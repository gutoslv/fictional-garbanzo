#include <QApplication>
#include <QListView>
#include <QStringListModel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    auto list = QStringList({"Uma", "Duas", "Três"});

    auto model = new QStringListModel();
    model->setStringList(list);

    auto view = new QListView();
    view->setModel(model);
    view->show();

    return app.exec();
}
