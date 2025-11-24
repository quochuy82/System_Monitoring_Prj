#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(AppDataProcessing* lpProcessor, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gpProcessor(lpProcessor)
{
    ui->setupUi(this);
    
    // Connect signals from data processor
    connect(gpProcessor, &AppDataProcessing::onCpuDataReady, this, &MainWindow::onCpuDataUpdate);
    connect(gpProcessor, &AppDataProcessing::onGpuDataReady, this, &MainWindow::onGpuDataUpdate);
    connect(gpProcessor, &AppDataProcessing::onRamDataReady, this, &MainWindow::onRamDataUpdate);
    connect(gpProcessor, &AppDataProcessing::onSsdDataReady, this, &MainWindow::onSsdDataUpdate);
    connect(gpProcessor, &AppDataProcessing::onNetworkDataReady, this, &MainWindow::onNetworkDataUpdate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCpuDataUpdate(double cpuUsage, double cpuTemp)
{
    // Update CPU temperature
    ui->labelCpuTemp->setText(QString::number((int)cpuTemp));
    
    // Update CPU usage
    ui->labelCpuUsage->setText(QString::number((int)cpuUsage) + "%");
}

void MainWindow::onGpuDataUpdate(double gpuTemp)
{
    // Update GPU temperature
    ui->labelGpuTemp->setText(QString::number((int)gpuTemp));
    
    // Note: GPU usage not implemented yet (would need separate query)
    // ui->labelGpuUsage->setText("0%");
}

void MainWindow::onRamDataUpdate(double ramUsage, double ramTotalMB, double ramAvailableMB)
{
    // Update RAM usage percentage
    ui->labelRamUsage->setText(QString::number((int)ramUsage) + "%");
    
    // Optionally could show RAM info in MB
    // ui->labelRamInfo->setText(QString("RAM: %1/%2 MB").arg(ramTotalMB - ramAvailableMB, 0, 'f', 0).arg(ramTotalMB, 0, 'f', 0));
}

void MainWindow::onSsdDataUpdate(double ssdTemp, double ssdUsage)
{
    // Update SSD temperature
    ui->labelSsdTemp->setText(QString::number((int)ssdTemp));
    
    // Update SSD usage percentage
    ui->labelSsdUsage->setText(QString::number((int)ssdUsage) + "%");
}

void MainWindow::onNetworkDataUpdate(QString myIP, double uploadSpeed, double downloadSpeed)
{
    // Update upload speed (convert from KB/s to MB/s if needed)
    if (uploadSpeed < 1024.0) {
        ui->labelUpload->setText(QString::number(uploadSpeed, 'f', 1));
    } else {
        ui->labelUpload->setText(QString::number(uploadSpeed / 1024.0, 'f', 2));
    }
    
    // Update download speed
    if (downloadSpeed < 1024.0) {
        ui->labelDownload->setText(QString::number(downloadSpeed, 'f', 1));
    } else {
        ui->labelDownload->setText(QString::number(downloadSpeed / 1024.0, 'f', 2));
    }
}

