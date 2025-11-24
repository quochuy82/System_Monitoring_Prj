#include "appdataprocessing.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>

AppDataProcessing::AppDataProcessing(QObject *parent)
    : QObject{parent}
{
    // Initialize network info period
    goNetworkInfo.setPeriod(DATA_UPDATE_TIMER_INTERVAL_MS / 1000.0);
}

void AppDataProcessing::startDataProcessing()
{
    QTimer *lpTimer = new QTimer(this);
    connect(lpTimer, &QTimer::timeout, this, &AppDataProcessing::onTimerExceed);
    lpTimer->start(DATA_UPDATE_TIMER_INTERVAL_MS);
    
    // Initial update
    onTimerExceed();
}

void AppDataProcessing::onTimerExceed()
{
    // CPU data
    double cpuUsage = goCpuInfo.CalculateCpuUsage();
    double cpuTemp = goCpuInfo.CalculateTemperature();
    if (cpuUsage >= 0) {
        emit onCpuDataReady(cpuUsage, cpuTemp);
    }
    
    // GPU data
    double gpuTemp = getGpuTemperature();
    emit onGpuDataReady(gpuTemp);
    
    // RAM data
    double ramUsage = goRamInfo.CalculateRamUsage();
    double ramTotal = goRamInfo.getRamTotal() / 1024.0; // Convert to MB
    double ramAvailable = goRamInfo.getRamAvailable() / 1024.0; // Convert to MB
    if (ramUsage >= 0) {
        emit onRamDataReady(ramUsage, ramTotal, ramAvailable);
    }
    
    // SSD data
    double ssdTemp = getSsdTemperature();
    double ssdUsage = getSsdUsage();
    emit onSsdDataReady(ssdTemp, ssdUsage);
    
    // Network data
    goNetworkInfo.getCurrentNetworkInfo();
    QString myIP = goNetworkInfo.getMyIP();
    double uploadSpeed = goNetworkInfo.getUploadSpeed();
    double downloadSpeed = goNetworkInfo.getDownloadSpeed();
    emit onNetworkDataReady(myIP, uploadSpeed, downloadSpeed);
}

double AppDataProcessing::getGpuTemperature()
{
    QProcess process;
    process.start(GPU_TEMPER_CMD, QStringList() << "--query-gpu=temperature.gpu" << "--format=csv,noheader");
    process.waitForFinished();
    QString output = process.readAllStandardOutput().trimmed();
    if (!output.isEmpty()) {
        return output.toDouble();
    }
    return 0.0;
}

double AppDataProcessing::getSsdTemperature()
{
    QProcess process;
    process.start("bash", QStringList() << "-c" << QString("%1 -A %2 2>/dev/null | grep Temperature_Celsius | awk '{print $10}'").arg(SSD_TEMPER_CMD).arg(SSD_DEVICE));
    process.waitForFinished();
    QString output = process.readAllStandardOutput().trimmed();
    if (!output.isEmpty()) {
        return output.toDouble();
    }
    return 0.0;
}

double AppDataProcessing::getSsdUsage()
{
    QProcess process;
    process.start("df", QStringList() << "-h" << "/");
    process.waitForFinished();
    QString output = process.readAllStandardOutput();
    
    static const QRegularExpression WHITESPACE("\\s+");
    QStringList lines = output.split("\n", QString::SkipEmptyParts);
    if (lines.size() >= 2) {
        QStringList values = lines[1].split(WHITESPACE, QString::SkipEmptyParts);
        if (values.size() >= 5) {
            QString percent = values[4];
            percent.remove("%");
            return percent.toDouble();
        }
    }
    return 0.0;
}

