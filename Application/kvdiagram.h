#ifndef KVDIAGRAM_H
#define KVDIAGRAM_H

#include <QStandardItemModel>

class KVDiagram : public QStandardItemModel
{
     Q_OBJECT
public:
    KVDiagram(QObject *parent = nullptr);
    void addVariable();
    void removeVariable();
    void updateValues(std::vector<int> results);

private:
    void setBorder();
    void setBorderText();
    void writeValues(std::vector<int> results, int maxI, int maxJ);
};

#endif // KVDIAGRAM_H
