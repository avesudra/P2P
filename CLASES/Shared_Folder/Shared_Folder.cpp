#include "Shared_Folder.h"

Shared_Folder::Shared_Folder()
{
}
bool Shared_Folder::exist_file(QString name)
{
    QDir::setCurrent("Shared Folder");
    QFile temp(name);
    if(temp.exists()){temp.~QFile(); return true;}
    else{temp.~QFile(); return false;}
}

qint64 Shared_Folder::get_file_size(QString name)
{
    QDir::setCurrent("Shared Folder");
    QFile temp(name);
    qint64 tamanyo = temp.size();
    temp.~QFile();
    return tamanyo;
}

qint8 Shared_Folder::percent(QString name)
{
   QDir::setCurrent("Shared Folder");
   qint64 tamanyo;
   tamanyo = Shared_Folder::get_file_size(name);
}
quint64 Shared_Folder::size()
{
/*POR HACER*/
}
quint16 Shared_Folder::files()
{
    QDir directory;
    directory.setCurrent("Shared Folder");
    n_files= directory.count();
    return n_files;
}
