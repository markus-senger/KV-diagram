#ifndef TRUTHTABLESIMPLIFIER_H
#define TRUTHTABLESIMPLIFIER_H

#include <QStandardItemModel>
#include <map>
#include <vector>

class TruthTableSimplifier : public QStandardItemModel
{
    Q_OBJECT

public:
    TruthTableSimplifier(QObject *parent = nullptr);
    bool addVariable();
    bool removeVariable();
    void addResult(int result);
    void clearResults();
    int getCurRowNum() const;
    int getCurColNum() const;
    int getCurVariableNum() const;
    std::vector<int> getResults() const;
    std::vector<int> getDataAtIdx(int i) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    std::map<int, std::vector<int>> mdata;
    std::vector<int> mresults;
    int mvariable;

    void updateData();
};

#endif // TRUTHTABLESIMPLIFIER_H
