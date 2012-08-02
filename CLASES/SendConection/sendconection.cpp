#include "sendconection.h"

SendConection::SendConection()
{
}
SendConection::sendInformation(QString filename)//Esta la estoy haciendo ahora.
{
   QFile temp(filename);
   QHostInfo hostinfo();
   struct inf *info;
   info->ip_s = hostinfo().fromName(hostinfo.localHostName());
   info->filename_s = temp.fileName();
   Datos datos;
   datos.writeInfo(info);
   temp.~QFile();
   QFile pet("information.pet");
   SendConection::connectToHost();
}

SendConection::sendData(QString filename) //Hay que comprobar si está bien!
{
       Data data;
       QFile *file;
       file = new QFile(filename);
       file->open(QIODevice::ReadOnly);
       data = file->readAll();
       socket->write(data); 
       file->close();
       delete[] file;      
}