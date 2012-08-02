#ifndef DOWNLOADCONECTION_H
#define DOWNLOADCONECTION_H

class DownloadConection : public QTcpSocket
{

 public:
    DownloadConection();
    qint64 receiveData(QString ip);
    QFile receiveInformation(QString ip);

};

#endif // DOWNLOADCONECTION_H
