#include "truthtable.h"
#include <QDebug>
#include "types.h"

TruthTable::TruthTable(QObject *parent)
    : QStandardItemModel(parent), rows{8}, cols{4}
{
    setColumnCount(cols);
    setRowCount(rows);
    setHorizontalHeaderItem(0, new QStandardItem(QString("A")));
    setHorizontalHeaderItem(1, new QStandardItem(QString("B")));
    setHorizontalHeaderItem(2, new QStandardItem(QString("C")));
    setHorizontalHeaderItem(3, new QStandardItem(QString("X")));
}

int TruthTable::getRows() const {
    return rows;
}

int TruthTable::getCols() const {
    return cols;
}

void TruthTable::addVariable()
{
    if(cols < MAX_VARIABLES + 1) {
        cols++;
        insertColumn(cols-2);
        setHorizontalHeaderItem(cols-2, new QStandardItem(QString(static_cast<char>(65+cols-2))));
        rows = pow(2, cols-1);
        setColumnCount(cols);
        setRowCount(rows);
    }
}
