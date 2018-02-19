#include <QApplication>
#include <QListView>
#include <QStringListModel>
#include <QStringList>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QDebug>
#include "model.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    auto model = new Model();
    auto janela = new QWidget();
    auto lineEdit = new QLineEdit();
    auto btn = new QPushButton("Add");

    auto view = new QListView();
    view->setModel(model);

    auto layout = new QVBoxLayout();
    layout->addWidget(view);
    layout->addWidget(lineEdit);
    layout->addWidget(btn);
    janela->setLayout(layout);
    janela->show();

    QObject::connect(btn, &QPushButton::clicked, [lineEdit, model]{
        //model->addText(lineEdit->text());
    });

    view->show();

    return app.exec();
}
