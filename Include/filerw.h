#ifndef FILERW_H
#define FILERW_H

#include <qfile.h>
#include "myenums.h"

class FileRW
{
    QString _pathFile;
    QString _BootAuthState;
    QStringList _ConfigDB;
    QStringList _admin;
    QStringList _user;
    QStringList _guest;
    QStringList _lastUser;
    QWidget *_parent;

    void errorRead();

public:
    explicit FileRW(const QString &pathFile = "..\\LibIS\\Configure.dat", QWidget *parent=nullptr);
    void readFile();
    void writeFile();
    QString getBootAuthState();
    QStringList getConfigDB();
    QStringList getAuthPair(UserRole role);
    void setBootAuthState(const QString &state);
    void setConfigDB(const QStringList &configuration);
    void setAuthPair(UserRole role, const QStringList &pair);

};

#endif // FILERW_H
