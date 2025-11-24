#ifndef APPDATAPROCESSING_H
#define APPDATAPROCESSING_H

#include <QObject>
#include <QTimer>
#include <QProcess>

#include "cpuinfoclass.h"
#include "raminfoclass.h"
#include "networkinfoclass.h"
#include "AppConfig.h"

// Timer intervals
#define DATA_UPDATE_TIMER_INTERVAL_MS       2000

class AppDataProcessing : public QObject
{
    Q_OBJECT
public:
    explicit AppDataProcessing(QObject *parent = nullptr);

public slots:
    void startDataProcessing();
    void onTimerExceed();

signals:
    void onCpuDataReady(double cpuUsage, double cpuTemp);
    void onGpuDataReady(double gpuTemp);
    void onRamDataReady(double ramUsage, double ramTotalMB, double ramAvailableMB);
    void onSsdDataReady(double ssdTemp, double ssdUsage);
    void onNetworkDataReady(QString myIP, double uploadSpeed, double downloadSpeed);

private:
    CpuInfoClass goCpuInfo;
    RamInfoClass goRamInfo;
    NetworkInfoClass goNetworkInfo;
    
    double getGpuTemperature();
    double getSsdTemperature();
    double getSsdUsage();
};

#endif // APPDATAPROCESSING_H

