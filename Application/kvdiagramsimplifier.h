#ifndef KVDIAGRAMSIMPLIFIER_H
#define KVDIAGRAMSIMPLIFIER_H

#include <QStandardItemModel>

class KVDiagramSimplifier : public QStandardItemModel
{
     Q_OBJECT
public:
    KVDiagramSimplifier(QObject *parent = nullptr);
    void addVariable();
    void removeVariable();
    void updateValues(std::vector<int> results);

private:
    void setBorder();
    void setBorderText();
    void writeValues(std::vector<int> results, int maxI, int maxJ);
};

#endif // KVDIAGRAMSIMPLIFIER_H
