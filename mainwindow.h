#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "appdataprocessing.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(AppDataProcessing* lpProcessor, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCpuDataUpdate(double cpuUsage, double cpuTemp);
    void onGpuDataUpdate(double gpuTemp);
    void onRamDataUpdate(double ramUsage, double ramTotalMB, double ramAvailableMB);
    void onSsdDataUpdate(double ssdTemp, double ssdUsage);
    void onNetworkDataUpdate(QString myIP, double uploadSpeed, double downloadSpeed);

private:
    Ui::MainWindow *ui;
    AppDataProcessing* gpProcessor;
};
#endif // MAINWINDOW_H
