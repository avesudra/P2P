#include "iplist.h"

IPList::IPList(QString path)
{

    pathtolistfile=path;
    listfile.setFileName(pathtolistfile);

}
IPList::IPList()
{
    listfile.setFileName("iplist.ips");

}

IPList::~IPList()
{
    //listfile.~QFile();
}

void IPList::writeips(QStringList ips)
{
    listfile.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream s(&listfile);
    int largo = ips.length();
    for(int i=0; i!=largo;++i)
    s<<ips.at(i).toAscii()<<endl;
    listfile.close();
}
QStringList IPList::readip()
{
    listfile.open(QIODevice::ReadOnly );
    QStringList temp;
    while(listfile.atEnd())
    {
        temp<<listfile.readLine();
    }
    listfile.close();
    return temp;

}
void IPList::operator <<(QStringList ips)
{
    IPList::writeips(ips);
}
void IPList::operator >>(QStringList &ips)
{
    ips<<IPList::readip();
}

/*IPList::IPList& operator<<(IPList &lista,QStringList ips)
{
   lista.writeips(ips);
}*/
/*IPList::IPList& operator>>(IPList &lista,QStringList &ips)
{
   ips<<lista.readip();
}*/
int main()
{
    IPList lista;
    QStringList listaips;
    listaips<<"0234857028945"<<"2038450284"<<"2384508234705";
    lista<<listaips;
}
