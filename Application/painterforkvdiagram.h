#ifndef PAINTERFORKVDIAGRAM_H
#define PAINTERFORKVDIAGRAM_H

#include <QStyledItemDelegate>
#include "types.h"

class PainterForKVDiagram : public QStyledItemDelegate
{

public:
    PainterForKVDiagram(QObject *parent = nullptr, std::map<std::vector<int>,
                        std::vector<int>> primeImplicants = std::map<std::vector<int>, std::vector<int>>(),
                        int currentSize = TRUTH_TABLE_3VAR);
    void paint(QPainter* painter, const QStyleOptionViewItem& opt, const QModelIndex& index) const;

private:
    std::map<std::vector<int>, std::vector<int>> posPrimeImplicants;
    int currentTruthTableSize;
    int rowNum;
    int colNum;

    int truthtableIndexIntoKVDiagramCol(int index) const;
    int truthtableIndexIntoKVDiagramRow(int index) const;
    bool isFullRow(std::vector<int> cells) const;
    bool isFullCol(std::vector<int> cells) const;
};

#endif // PAINTERFORKVDIAGRAM_H
