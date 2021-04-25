#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "student.h"
#include "dashboard.h"
#include "dashboardstudent.h"
//#include "sgsapp.h"



class databaseconnection
{

public:
    databaseconnection();
    ~databaseconnection();
    void connect();
    void disconnect();
    void searchAllStudent();
    void searchStudent();
    void insertNewUser(student &student);
    bool loginUser(QString, QString);
    void logoutUser();
    void resetPassword();
    void suspendUser();
    bool isconnected();
    QSqlQuery updateQuestion();
    QSqlQuery getUserInfo(QString , int);
    QSqlQuery getLecturerInfo(QString);
    QString getUserId();
    void setUserId(QString);
    void resetPassword(QString);
    void setRole(QString);
    QString getRole();

private:
    bool connected;
    bool logSatus;
    Dashboard *dash;
    Dashboard createDash;
    QString currentUserID;
    QString UserRole;
    int const questionAsk = 3;
};

#endif // DATABASECONNECTION_H