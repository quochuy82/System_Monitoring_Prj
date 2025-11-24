/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelCpuTemp;
    QLabel *labelGpuTemp;
    QLabel *labelSsdTemp;
    QLabel *labelUpload;
    QLabel *labelDownload;
    QLabel *labelCpuUsage;
    QLabel *labelGpuUsage;
    QLabel *labelRamUsage;
    QLabel *labelSsdUsage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 240);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"    border-image: url(:/hello2.png) 0 0 0 0 stretch stretch;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelCpuTemp = new QLabel(centralwidget);
        labelCpuTemp->setObjectName(QString::fromUtf8("labelCpuTemp"));
        labelCpuTemp->setGeometry(QRect(63, 55, 50, 20));
        labelCpuTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 16px; font-weight: bold; background: transparent;"));
        labelCpuTemp->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelGpuTemp = new QLabel(centralwidget);
        labelGpuTemp->setObjectName(QString::fromUtf8("labelGpuTemp"));
        labelGpuTemp->setGeometry(QRect(63, 87, 50, 20));
        labelGpuTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 16px; font-weight: bold; background: transparent;"));
        labelGpuTemp->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelSsdTemp = new QLabel(centralwidget);
        labelSsdTemp->setObjectName(QString::fromUtf8("labelSsdTemp"));
        labelSsdTemp->setGeometry(QRect(63, 122, 50, 20));
        labelSsdTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 16px; font-weight: bold; background: transparent;"));
        labelSsdTemp->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelUpload = new QLabel(centralwidget);
        labelUpload->setObjectName(QString::fromUtf8("labelUpload"));
        labelUpload->setGeometry(QRect(55, 175, 120, 18));
        labelUpload->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 14px; background: transparent;"));
        labelUpload->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelDownload = new QLabel(centralwidget);
        labelDownload->setObjectName(QString::fromUtf8("labelDownload"));
        labelDownload->setGeometry(QRect(55, 196, 120, 18));
        labelDownload->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 14px; background: transparent;"));
        labelDownload->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelCpuUsage = new QLabel(centralwidget);
        labelCpuUsage->setObjectName(QString::fromUtf8("labelCpuUsage"));
        labelCpuUsage->setGeometry(QRect(180, 85, 70, 50));
        labelCpuUsage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 22px; font-weight: bold; background: transparent;"));
        labelCpuUsage->setAlignment(Qt::AlignCenter);
        labelGpuUsage = new QLabel(centralwidget);
        labelGpuUsage->setObjectName(QString::fromUtf8("labelGpuUsage"));
        labelGpuUsage->setGeometry(QRect(250, 85, 70, 50));
        labelGpuUsage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 22px; font-weight: bold; background: transparent;"));
        labelGpuUsage->setAlignment(Qt::AlignCenter);
        labelRamUsage = new QLabel(centralwidget);
        labelRamUsage->setObjectName(QString::fromUtf8("labelRamUsage"));
        labelRamUsage->setGeometry(QRect(180, 155, 70, 50));
        labelRamUsage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 22px; font-weight: bold; background: transparent;"));
        labelRamUsage->setAlignment(Qt::AlignCenter);
        labelSsdUsage = new QLabel(centralwidget);
        labelSsdUsage->setObjectName(QString::fromUtf8("labelSsdUsage"));
        labelSsdUsage->setGeometry(QRect(250, 155, 70, 50));
        labelSsdUsage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 100); font-size: 22px; font-weight: bold; background: transparent;"));
        labelSsdUsage->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "System Monitoring", nullptr));
        labelCpuTemp->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelGpuTemp->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelSsdTemp->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelUpload->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelDownload->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelCpuUsage->setText(QApplication::translate("MainWindow", "0%", nullptr));
        labelGpuUsage->setText(QApplication::translate("MainWindow", "0%", nullptr));
        labelRamUsage->setText(QApplication::translate("MainWindow", "0%", nullptr));
        labelSsdUsage->setText(QApplication::translate("MainWindow", "0%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
