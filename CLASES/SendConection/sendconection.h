#ifndef SENDCONECTION_H
#define SENDCONECTION_H
#include <QString>
#include <QFile>
class SendConection : public QTcpSocket
{
 public:
    SendConection();
    void sendData(QFile file);
    void sendInformation(QString filename);
};
#endif // SENDCONECTION_H
