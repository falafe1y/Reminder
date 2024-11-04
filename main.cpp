#include "MainWindow.h"

#include <QApplication>
#include <sqlite/sqlite3.h>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow window;



    window.show();
    return application.exec();
}
