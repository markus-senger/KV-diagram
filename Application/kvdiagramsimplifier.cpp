#include "kvdiagramsimplifier.h"
#include "types.h"
#include <QTableWidgetItem>

KVDiagramSimplifier::KVDiagramSimplifier(QObject *parent, int numOfVar)
    : QStandardItemModel(parent)
{
    if(numOfVar == 2) {
        setColumnCount(KV_DIAGRAM_2VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_2VAR_ROW_NUM);
    }
    else if(numOfVar == 4) {
        setColumnCount(KV_DIAGRAM_4VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_4VAR_ROW_NUM);
    }
    else {
        setColumnCount(KV_DIAGRAM_3VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_3VAR_ROW_NUM);
    }
    setBorder();
}

void KVDiagramSimplifier::addVariable()
{
    if(rowCount() == KV_DIAGRAM_2VAR_ROW_NUM && columnCount() == KV_DIAGRAM_2VAR_COL_NUM) {
        setColumnCount(KV_DIAGRAM_3VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_3VAR_ROW_NUM);
    }
    else if(rowCount() == KV_DIAGRAM_3VAR_ROW_NUM && columnCount() == KV_DIAGRAM_3VAR_COL_NUM) {
        setColumnCount(KV_DIAGRAM_4VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_4VAR_ROW_NUM);
    }
    setBorder();
}

void KVDiagramSimplifier::removeVariable()
{
    if(rowCount() == KV_DIAGRAM_3VAR_ROW_NUM && columnCount() == KV_DIAGRAM_3VAR_COL_NUM) {
        setColumnCount(KV_DIAGRAM_2VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_2VAR_ROW_NUM);
    }
    else if(rowCount() == KV_DIAGRAM_4VAR_ROW_NUM && columnCount() == KV_DIAGRAM_4VAR_COL_NUM) {
        setColumnCount(KV_DIAGRAM_3VAR_COL_NUM);
        setRowCount(KV_DIAGRAM_3VAR_ROW_NUM);
    }
    setBorder();
}

void KVDiagramSimplifier::updateValues(std::vector<int> results)
{
    if(rowCount() == KV_DIAGRAM_2VAR_ROW_NUM && columnCount() == KV_DIAGRAM_2VAR_COL_NUM) {
        writeValues(results, 3, 3);
    }
    else if(rowCount() == KV_DIAGRAM_3VAR_ROW_NUM && columnCount() == KV_DIAGRAM_3VAR_COL_NUM) {
        writeValues(results, 3, 5);
    }
    else if(rowCount() == KV_DIAGRAM_4VAR_ROW_NUM && columnCount() == KV_DIAGRAM_4VAR_COL_NUM) {
        writeValues(results, 5, 5);
    }
}

void KVDiagramSimplifier::setBorder()
{
    for(int i = 0; i < rowCount(); i++) {
        for(int j = 0; j < columnCount(); j++) {
            setItem(i, j, new QStandardItem);
            QFont font;
            font.setBold(true);
            item(i,j)->setFont(font);
            item(i,j)->setTextAlignment(Qt::AlignCenter);
            if(i == 0 || (columnCount() >= KV_DIAGRAM_3VAR_COL_NUM && i == rowCount()-1) || j == 0 || (rowCount() >= KV_DIAGRAM_4VAR_ROW_NUM && j == columnCount()-1)) {
                item(i,j)->setBackground(QColor(COLOR_RED));
                item(i,j)->setForeground(Qt::white);
            }
        }
    }

    setBorderText();
}

void KVDiagramSimplifier::setBorderText()
{
    if(rowCount() == KV_DIAGRAM_2VAR_ROW_NUM && columnCount() == KV_DIAGRAM_2VAR_COL_NUM) {
        item(0,1)->setText("not B");
        item(0,2)->setText("B");
        item(1,0)->setText("not A");
        item(2,0)->setText("A");
    }
    else if(rowCount() == KV_DIAGRAM_3VAR_ROW_NUM && columnCount() == KV_DIAGRAM_3VAR_COL_NUM) {
        item(0,1)->setText("not B");
        item(0,2)->setText("not B");
        item(0,3)->setText("B");
        item(0,4)->setText("B");
        item(1,0)->setText("not A");
        item(2,0)->setText("A");
        item(3,1)->setText("not C");
        item(3,2)->setText("C");
        item(3,3)->setText("C");
        item(3,4)->setText("not C");
    }
    else if(rowCount() == KV_DIAGRAM_4VAR_ROW_NUM && columnCount() == KV_DIAGRAM_4VAR_COL_NUM) {
        item(0,1)->setText("not C");
        item(0,2)->setText("not C");
        item(0,3)->setText("C");
        item(0,4)->setText("C");
        item(1,0)->setText("not A");
        item(2,0)->setText("not A");
        item(3,0)->setText("A");
        item(4,0)->setText("A");
        item(5,1)->setText("not D");
        item(5,2)->setText("D");
        item(5,3)->setText("D");
        item(5,4)->setText("not D");
        item(1,5)->setText("not B");
        item(2,5)->setText("B");
        item(3,5)->setText("B");
        item(4,5)->setText("not B");
    }
}

void KVDiagramSimplifier::writeValues(std::vector<int> results, int maxI, int maxJ)
{
    int a = 0;
    for(int i = 1; i < maxI; i++) {
        for(int j = 1; j < maxJ; j++) {
            int b = 0;
            if(i == 3) {
                b += maxJ - 1;
            }
            else if(i == 4) {
                b += -maxJ + 1;
            }
            if(j == 3) {
                b += 1;
            }
            else if(j == 4) {
                b += -1;
            }
            if(results.at(a + b) != OPTION_DONT_CARE) {
                item(i,j)->setText(QString::number(results.at(a + b)));
            }
            else {
                item(i,j)->setText("X");
            }
            a++;
        }
    }
}
