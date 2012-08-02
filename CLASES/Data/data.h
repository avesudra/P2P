#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDataStream>
#include <QDir>
using namespace std;
///This struct contains all the information of the file required
///and the computer that send the search.
struct inf
{
    ///The ip.
    QString ip_s;
    ///The name of the file.
    QString filename_s;
};
///The objetive of this class is manage and analyze the files
///received both petitions (files .pet) and responses (files.resp)
///and the files sent.
class Data
{
public:
    Data();
    ///This member function reads the file that is passed by
    ///path_info and alloc the info in the struct information
    ///that is passed too.
    void readInfo(QString path_info,inf *information);
    ///This member function writes the contents of the struct
    ///in a file wich is called information.pet and is allocated
    ///in the subfolder data.
    void writeinfo (struct inf *infotxt);
private:

};

#endif // DATA_H
