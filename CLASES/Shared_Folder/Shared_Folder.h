#ifndef SHARED_FOLDER_H
#define SHARED_FOLDER_H
#include <QString>
#include <QDir>

///The objetive of this class is manage all the content of
// the folder "Shared_Folder".
class Shared_Folder
{
    public:
    Shared_Folder();
        ///This member function update the statistics.
        void update_statistics();
        ///This member function get the size of the file passed by name.
        qint64 get_file_size(QString name);
        ///This member function return true if the file passed by name exists or false if not.
        bool exist_file(QString name);
        ///This member function obtains the percent of the downloading process of the file passed by name.
        qint8 percent(QString name);
        ///This member function return the number of files that are in "Shared_Folder"
        quint16 files();
        ///This member function return size of the folder "Shared_Folder"
        quint64 size();

    private:
        ///Private variable that contents the number of files that are in"Shared_Folder"
        quint16 n_files;
        ///Private variable that contents the size of"Shared_Folder"
        quint64 dir_size;
};
#endif // SHARED_FOLDER_H
