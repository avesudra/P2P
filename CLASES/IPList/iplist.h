#ifndef IPLIST_H
#define IPLIST_H
#include <QStringList>
#include <QFile>
#include <stdarg.h>
#include <QTextStream>
#include <QDebug>
///The objetive of this class is manage the files that contains all the ips
///where the user is connected.
///There are two operators overloaded.
///The operator << to write in the file , that receive one QStringList wich contains the ips to be written.
///The operator >> to read from the file , that receive one QStringList to save the ips wich have been read.
class IPList
{
public:
    IPList(QString path);
    IPList();
    void operator<<(QStringList ips);

    void operator>>(QStringList &ips);
    ~IPList();
    void writeips(QStringList ips);
    QStringList readip();
private:
    QString pathtolistfile;
    QFile listfile;
};

#endif // IPLIST_H
