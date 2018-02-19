//#include "mainwindow.h"
#include <semaforo.h>
#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include <iostream>
#include <QTimer>
#include <QWidget>
#include <QPainter>

void imp(){
    std::cout << "lalalala\n";
}

void impTimer(){
    std::cout << "tututu\n";
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTimer *timer = new QTimer(nullptr);
    timer->start(1000);

    //QPushButton btn("Oi mundo");

    Semaforo * butao = new Semaforo();

    QPushButton *btn = new QPushButton("Oi mundo");


    QObject::connect(timer, & QTimer::timeout,impTimer);
    QObject::connect(btn, & QPushButton::clicked, imp);


    //btn->show();
    butao->show();


    return app.exec();
}
