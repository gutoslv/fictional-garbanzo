#pragma once

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>

class Semaforo : public QWidget{
    Q_OBJECT
public:
    Semaforo(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *v) override;
private:
    QTimer m_timer;
    int ativo;
signals:
    void clicked();
};
