#include "painterforkvdiagram.h"
#include <QPainter>
#include <QLabel>
#include <QSpinBox>

PainterForKVDiagram::PainterForKVDiagram(QObject *parent, std::map<std::vector<int>, std::vector<int>> primeImplicants, int currentSize)
    : QStyledItemDelegate(parent),
      posPrimeImplicants(primeImplicants),
      currentTruthTableSize(currentSize)
{
    if(currentSize == TRUTH_TABLE_2VAR) {
        rowNum = 2;
        colNum = 2;
    }
    else if(currentSize == TRUTH_TABLE_3VAR) {
        rowNum = 3;
        colNum = 4;
    }
    else if(currentSize == TRUTH_TABLE_4VAR) {
        rowNum = 5;
        colNum = 5;
    }
}

void PainterForKVDiagram::paint(QPainter* painter, const QStyleOptionViewItem& opt, const QModelIndex& index) const
{
    int i = 0;
    for(auto& entry : posPrimeImplicants) {
        painter->setBrush(KV_DIAGRAM_COLORS.at(i));
        i++;
        if((unsigned int) i >= KV_DIAGRAM_COLORS.size()) i = 0;
        if(std::find_if(entry.second.begin(), entry.second.end(), [this, index](int i) {
                return truthtableIndexIntoKVDiagramCol(i) == index.column() && truthtableIndexIntoKVDiagramRow(i) == index.row();
           }) != entry.second.end()) {

            bool left = false;
            bool right = false;
            bool top = false;
            bool bottom = false;
            for(auto& e : entry.second) {
                if(truthtableIndexIntoKVDiagramCol(e) == index.column() - 1 && truthtableIndexIntoKVDiagramRow(e) == index.row()) left = true;
                else if(truthtableIndexIntoKVDiagramCol(e) == index.column() + 1 && truthtableIndexIntoKVDiagramRow(e) == index.row()) right = true;
                else if(truthtableIndexIntoKVDiagramRow(e) == index.row() - 1 && truthtableIndexIntoKVDiagramCol(e) == index.column()) top = true;
                else if(truthtableIndexIntoKVDiagramRow(e) == index.row() + 1 && truthtableIndexIntoKVDiagramCol(e) == index.column()) bottom = true;
                else if(index.column() == 1 && truthtableIndexIntoKVDiagramCol(e) == colNum &&
                        truthtableIndexIntoKVDiagramRow(e) == index.row() && !isFullRow(entry.second)) left = true;
                else if(index.column() == colNum && truthtableIndexIntoKVDiagramCol(e) == 1 &&
                        truthtableIndexIntoKVDiagramRow(e) == index.row() && !isFullRow(entry.second)) right = true;
                else if(index.row() == 1 && truthtableIndexIntoKVDiagramRow(e) == rowNum - 1 &&
                        truthtableIndexIntoKVDiagramCol(e) == index.column() && !isFullCol(entry.second)) top = true;
                else if(index.row() == rowNum - 1 && truthtableIndexIntoKVDiagramRow(e) == 1 &&
                        truthtableIndexIntoKVDiagramCol(e) == index.column() && !isFullCol(entry.second)) bottom = true;
            }

            painter->setPen(Qt::NoPen);
            if(!left && !right && !top && !bottom) {        // normal
                painter->setPen(Qt::black);
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 15, 30, 30);
            }
            else if(!left && right && !top && !bottom) {    // right
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 15, 40, 30);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15 + 40, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15, opt.rect.center().y() - 15 + 30);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() + 15, opt.rect.center().x() - 15 + 40, opt.rect.center().y() + 15);
            }
            else if(left && !right && !top && !bottom) {    // left
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 15, 40, 30);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15 + 30);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() + 15, opt.rect.center().x() - 24 + 40, opt.rect.center().y() + 15);
            }
            else if(!left && !right && !top && bottom) {    // bottom
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 15, 30, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 15, opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 15 + 35);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15, opt.rect.center().y() - 15 + 35);
            }
            else if(!left && !right && top && !bottom) {    // top
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 20, 30, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20, opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 35);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 35, opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 20 + 35);
                painter->drawLine(opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 20, opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 20 + 35);
            }
            else if(!left && right && !top && bottom) {     // right-bottom
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 15, 40, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15 + 40, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 15, opt.rect.center().x() - 15, opt.rect.center().y() - 15 + 35);
            }
            else if(!left && right && top && !bottom) {     // right-top
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 20, 40, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20, opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 35);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 35, opt.rect.center().x() - 15 + 40, opt.rect.center().y() - 20 + 35);
            }
            else if(left && !right && top && !bottom) {     // left-top
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 20, 40, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 20 + 35, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 20 + 35);
                painter->drawLine(opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 20, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 20 + 35);
            }
            else if(left && !right && !top && bottom) {     // left-bottom
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 15, 40, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 15 + 35);
            }
            else if(left && !right && top && bottom) {      // full-left
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 20, 40, 40);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 20, opt.rect.center().x() - 24 + 40, opt.rect.center().y() - 20 + 40);
            }
            else if(!left && right && top && bottom) {      // full-right
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 20, 40, 40);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20, opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 40);
            }
            else if(left && right && top && !bottom) {      // full-top
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 20, 49, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 20 + 35, opt.rect.center().x() - 24 + 49, opt.rect.center().y() - 20 + 35);
            }
            else if(left && right && !top && bottom) {      // full-bottom
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 15, 49, 35);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 49, opt.rect.center().y() - 15);
            }
            else if(left && right && top && bottom) {       // middle
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 20, 50, 40);
            }
            else if(left && right && !top && !bottom) {     // middle left-to-right
                painter->drawRect(opt.rect.center().x() - 24, opt.rect.center().y() - 15, 49, 30);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() - 15, opt.rect.center().x() - 24 + 49, opt.rect.center().y() - 15);
                painter->drawLine(opt.rect.center().x() - 24, opt.rect.center().y() + 15, opt.rect.center().x() - 24 + 49, opt.rect.center().y() + 15);
            }
            else if(!left && !right && top && bottom) {     // middle top-to-bottom
                painter->drawRect(opt.rect.center().x() - 15, opt.rect.center().y() - 20, 30, 40);
                painter->setPen(Qt::black);
                painter->drawLine(opt.rect.center().x() - 15, opt.rect.center().y() - 20, opt.rect.center().x() - 15, opt.rect.center().y() - 20 + 40);
                painter->drawLine(opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 20, opt.rect.center().x() - 15 + 30, opt.rect.center().y() - 20 + 40);
            }
        }
    }
    QStyledItemDelegate::paint(painter, opt, index);
}

int PainterForKVDiagram::truthtableIndexIntoKVDiagramCol(int index) const
{
    if(currentTruthTableSize == TRUTH_TABLE_2VAR) {
        switch(index) {
            case 0:
            case 2: return 1;
            case 1:
            case 3: return 2;
        }
    }
    else if(currentTruthTableSize == TRUTH_TABLE_3VAR) {
        switch(index) {
            case 0:
            case 4: return 1;
            case 1:
            case 5: return 2;
            case 2:
            case 6: return 4;
            case 3:
            case 7: return 3;
        }
    }
    else if(currentTruthTableSize == TRUTH_TABLE_4VAR) {
        switch(index) {
            case 0:
            case 4:
            case 8:
            case 12: return 1;
            case 1:
            case 5:
            case 9:
            case 13: return 2;
            case 2:
            case 6:
            case 10:
            case 14: return 4;
            case 3:
            case 7:
            case 11:
            case 15: return 3;
        }
    }
    return -1;
}

int PainterForKVDiagram::truthtableIndexIntoKVDiagramRow(int index) const
{
    if(currentTruthTableSize == TRUTH_TABLE_2VAR) {
        switch(index) {
            case 0:
            case 1: return 1;
            case 2:
            case 3: return 2;
        }
    }
    else if(currentTruthTableSize == TRUTH_TABLE_3VAR) {
        switch(index) {
            case 0:
            case 1:
            case 2:
            case 3: return 1;
            case 4:
            case 5:
            case 6:
            case 7: return 2;
        }
    }
    else if(currentTruthTableSize == TRUTH_TABLE_4VAR) {
        switch(index) {
            case 0:
            case 1:
            case 2:
            case 3: return 1;
            case 4:
            case 5:
            case 6:
            case 7: return 2;
            case 8:
            case 9:
            case 10:
            case 11: return 4;
            case 12:
            case 13:
            case 14:
            case 15: return 3;
        }
    }
    return -1;
}

bool PainterForKVDiagram::isFullRow(std::vector<int> cells) const
{
    if((unsigned int) rowNum > cells.size()) return false;
    int curRow = truthtableIndexIntoKVDiagramRow(cells.at(0));
    for(auto& entry : cells) {
       if(curRow != truthtableIndexIntoKVDiagramRow(entry)) {
           return false;
       }
    }
    return true;
}

bool PainterForKVDiagram::isFullCol(std::vector<int> cells) const
{
    if((unsigned int) colNum > cells.size()) return false;
    int curCol = truthtableIndexIntoKVDiagramCol(cells.at(0));
    for(auto& entry : cells) {
       if(curCol != truthtableIndexIntoKVDiagramCol(entry)) {
           return false;
       }
    }
    return true;
}
