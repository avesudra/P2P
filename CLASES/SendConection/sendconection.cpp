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
