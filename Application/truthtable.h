#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include <QStandardItemModel>
#include <map>
#include <vector>

class TruthTable : public QStandardItemModel
{
    Q_OBJECT
private:
    std::map<int, std::vector<int>> mdata;

    void updateData();

public:
    TruthTable(QObject *parent = nullptr);
    bool addVariable();
    bool removeVariable();
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // TRUTHTABLE_H
