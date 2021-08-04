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

private:
    void setBorder();
    void setBorderText();
};

#endif // KVDIAGRAM_H
