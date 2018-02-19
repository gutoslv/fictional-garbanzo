#include "model.h"

Model::Model()
{
    m_list << "um" << "dois" << "tres" << "quatro";
}

void Model::addText(const QString& text){
    beginInsertRows({},m_list.count(),m_list.count());
    m_list << text;
    endInsertRows();
}

QVariant Model::data(const QModelIndex& idx, int role) const {

    if (!idx.isValid())
        return QVariant();

    switch (role) {
    case Qt::DisplayRole : return m_list[idx.row()];
    case Qt::ToolTip : return QString("Oi Mundo");
    }
    return QVariant();
}

int Model::rowCount(const QModelIndex& parent) const {
    return m_list.count();
}
