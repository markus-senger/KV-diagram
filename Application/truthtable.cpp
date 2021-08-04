#include "truthtable.h"
#include "types.h"
#include "auxiliaryFunctions.h"

TruthTable::TruthTable(QObject *parent)
    : QStandardItemModel(parent)
{
    setColumnCount(TRUTH_TABLE_INIT_COL_NUM + 1);
    setRowCount(TRUTH_TABLE_INIT_ROW_NUM);
    mvariable = TRUTH_TABLE_3VAR;
    setHorizontalHeaderItem(0, new QStandardItem(QString("A")));
    setHorizontalHeaderItem(1, new QStandardItem(QString("B")));
    setHorizontalHeaderItem(2, new QStandardItem(QString("C")));
    setHorizontalHeaderItem(3, new QStandardItem(QString("X")));
    updateData();
}

bool TruthTable::addVariable()
{
    if(columnCount() < MAX_VARIABLES+1) {
        mvariable++;
        insertColumn(columnCount()-1);
        setHorizontalHeaderItem(columnCount()-2, new QStandardItem(QString(static_cast<char>(65+columnCount()-2))));
        setRowCount(pow(2, columnCount()-1));
        updateData();
        return true;
    }
    return false;
}

bool TruthTable::removeVariable()
{
    if(columnCount()-1 > MIN_VARIABLES) {
        mvariable--;
        removeRows(pow(2, columnCount()-2), rowCount()-pow(2, columnCount()-2));
        removeColumn(columnCount()-2);
        updateData();
        return true;
    }
    return false;
}

void TruthTable::addResult(int result) {
    mresults.push_back(result);
}

void TruthTable::clearResults() {
    mresults.clear();
}

int TruthTable::getCurRowNum() const {
    return rowCount();
}

int TruthTable::getCurColNum() const {
    return columnCount();
}

int TruthTable::getCurVariableNum() const {
    return mvariable;
}

QVariant TruthTable::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole && index.column() < columnCount()-1) {
       int digit = mdata.at(index.row()).at(index.column());
       return QString::number(digit);
    }

    if(role == Qt::TextAlignmentRole) {
        return Qt::AlignCenter;
    }

    return QVariant();
}

void TruthTable::updateData()
{
    mdata.clear();
    for(int i = 0; i < rowCount(); i++) {
        QString binaryCode = toBinary(i);
        for(int j = columnCount()-2; j >= 0; j--) {
            if(j < binaryCode.size()) {
                mdata[i].push_back(binaryCode[j].digitValue());
            }
            else {
                mdata[i].push_back(0);
            }
        }
    }
}
