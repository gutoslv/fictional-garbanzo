#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton btn("Oi mundo");
    btn.show();

    return app.exec();
}
