#ifndef MODELFROMFILE_H
#define MODELFROMFILE_H


#include <QStringList>
#include <QFile>
#include "QStandardItemModel"
#include <QScopedPointer>

class ModelWrapperFromFile
{
    QString fileName;
    QScopedPointer<QStandardItemModel> model;
    QStringList list;
    QStringList horizontalHeader;

public:
    ModelWrapperFromFile(QString fileName);
    void setModel();
    QStandardItemModel* getModel();
    QString getFileName();
    int getDataFromFile(QString fileName);
    void writeToFile(QString &str, bool isRemove);
};

#endif // MODELFROMFILE_H
