#include "kvdiagram.h"
#include "types.h"
#include <QTableWidgetItem>

KVDiagram::KVDiagram(QObject *parent)
    : QStandardItemModel(parent)
{
    setColumnCount(KV_DIAGRAM_3VAR_COL_NUM);
    setRowCount(KV_DIAGRAM_3VAR_ROW_NUM);
    setBorder();
}

void KVDiagram::addVariable() {
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

void KVDiagram::removeVariable() {
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

void KVDiagram::setBorder()
{
    for(int i = 0; i < rowCount(); i++) {
        for(int j = 0; j < columnCount(); j++) {
            setItem(i, j, new QStandardItem);
            if(i == 0 || (columnCount() >= KV_DIAGRAM_3VAR_COL_NUM && i == rowCount()-1) || j == 0 || (rowCount() >= KV_DIAGRAM_4VAR_ROW_NUM && j == columnCount()-1)) {
                QFont font;
                font.setBold(true);
                item(i,j)->setBackground(QColor(COLOR_RED));
                item(i,j)->setForeground(Qt::white);
                item(i,j)->setFont(font);
                item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }

    setBorderText();
}

void KVDiagram::setBorderText()
{
    if(rowCount() == KV_DIAGRAM_2VAR_ROW_NUM && columnCount() == KV_DIAGRAM_2VAR_COL_NUM) {
        item(0,1)->setText("A");
        item(0,2)->setText("not A");
        item(1,0)->setText("B");
        item(2,0)->setText("not B");
    }
    else if(rowCount() == KV_DIAGRAM_3VAR_ROW_NUM && columnCount() == KV_DIAGRAM_3VAR_COL_NUM) {
        item(0,1)->setText("A");
        item(0,2)->setText("A");
        item(0,3)->setText("not A");
        item(0,4)->setText("not A");
        item(1,0)->setText("B");
        item(2,0)->setText("not B");
        item(3,1)->setText("C");
        item(3,2)->setText("not C");
        item(3,3)->setText("not C");
        item(3,4)->setText("C");
    }
    else if(rowCount() == KV_DIAGRAM_4VAR_ROW_NUM && columnCount() == KV_DIAGRAM_4VAR_COL_NUM) {
        item(0,1)->setText("A");
        item(0,2)->setText("A");
        item(0,3)->setText("not A");
        item(0,4)->setText("not A");
        item(1,0)->setText("B");
        item(2,0)->setText("B");
        item(3,0)->setText("not B");
        item(4,0)->setText("not B");
        item(5,1)->setText("C");
        item(5,2)->setText("not C");
        item(5,3)->setText("not C");
        item(5,4)->setText("C");
        item(1,5)->setText("D");
        item(2,5)->setText("not D");
        item(3,5)->setText("not D");
        item(4,5)->setText("D");
    }
}
