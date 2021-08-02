#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include <QStandardItemModel>

class TruthTable : public QStandardItemModel
{
    Q_OBJECT
private:
    int rows;
    int cols;
public:
    TruthTable(QObject *parent = nullptr);
    int getRows() const;
    int getCols() const;
    void addVariable();
};

#endif // TRUTHTABLE_H
