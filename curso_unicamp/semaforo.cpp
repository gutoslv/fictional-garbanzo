#include "semaforo.h"

Semaforo::Semaforo(QWidget *parent) : QWidget(parent)
{
    connect(&m_timer, &QTimer::timeout, [this]{
        ativo += 1;
        update();
    });
    m_timer.start(1000);
}

void Semaforo::paintEvent(QPaintEvent *ev)
{
    QPainter painter(this);

    painter.setBrush(Qt::black);
    painter.drawRect(0,0,100,300);
    const int luz = ativo % 3;

    auto red = luz == 0 ? Qt::red : Qt::darkRed;
    auto yellow = luz == 1 ? Qt::yellow : Qt::darkYellow;
    auto green = luz == 2 ? Qt::green : Qt::darkGreen;

    painter.setBrush(red);
    painter.drawEllipse(0,0,100,100);
    painter.setBrush(yellow);
    painter.drawEllipse(0,100,100,100);
    painter.setBrush(green);
    painter.drawEllipse(0,200,100,100);
}

