#pragma once

#include <QAbstractListModel>

class Model : public QAbstractListModel {
    Q_OBJECT


public:
    Model();
    QVariant data(const QModelIndex& idx, int role) const override;
    int rowCount(const QModelIndex& parent) const override;

    void addText(const QString& txt);
private:
    QStringList m_list;
};
