#include "data.h"

Data::Data()
{
}
void Data::readInfo(QString path_info,inf *information)
{

    QFile infopet(path_info);                  /*We assign to infopet the path to the file .pet*/
    infopet.open(QIODevice::ReadOnly);         /*We open the file .pet in read mode only*/
    information->ip_s=infopet.readLine();      /*We assign the string read of the file to ip_s*/
    information->filename_s=infopet.readLine();/*We assign the next string read of the file to filename_s*/
}

void Data::writeinfo (struct inf *infopet)
{
    QDir currentdir = QDir::current(); /*We create a new variable and assign the current dir*/
    currentdir.mkdir("datos");         /*We create a new subdirectory called datos*/
    QFile pet("datos/information.pet");/*We assign pet the file passed by QString*/
    if(pet.open(QIODevice::WriteOnly)) /*We open the file in write mode only*/
    {
       QTextStream s(&pet);         /*We create a QTextStream and assign it pet*/
       s<<infopet->ip_s<<endl;      /*We write ip_s to QTextStream*/
       s<<infopet->filename_s<<endl;/*We write filename_s to QTextStream*/
       pet.close();                 /*We close the file*/
    }
    else                                /*Otherwise the program could not open the file*/
    {
        qDebug()<<"The program could not open the file"<<endl;
    }
}
