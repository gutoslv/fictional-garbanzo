//#include "mainwindow.h"
#include <semaforo.h>
#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include <iostream>
#include <QTimer>
#include <QWidget>
#include <QPainter>
#include<QHBoxLayout>

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

    QWidget *window = new QWidget;

    //QPushButton btn("Oi mundo");

    Semaforo *semaforo1 = new Semaforo();
    Semaforo *semaforo2 = new Semaforo();
    Semaforo *semaforo3 = new Semaforo();

    QPushButton *btn = new QPushButton("Oi mundo");


    QObject::connect(timer, & QTimer::timeout,impTimer);
    QObject::connect(btn, & QPushButton::clicked, imp);

    auto layout = new QHBoxLayout();
    layout->addWidget(semaforo1);
    layout->addWidget(semaforo2);
    layout->addWidget(semaforo3);


    window->setLayout(layout);
    window->show();


    return app.exec();
}
