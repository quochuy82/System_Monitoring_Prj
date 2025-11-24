#include "mainwindow.h"
#include "appdataprocessing.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Create data processor
    AppDataProcessing* dataProcessor = new AppDataProcessing(&a);
    
    // Create main window with data processor
    MainWindow w(dataProcessor);
    w.show();
    
    // Start data processing
    dataProcessor->startDataProcessing();
    
    return a.exec();
}
