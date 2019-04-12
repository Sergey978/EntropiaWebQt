#ifndef SIGNINVIEWMODEL_H
#define SIGNINVIEWMODEL_H


#include "../../FrameWork/model.h"
#include "../../Models/user.h"
#include <QString>
#include <QMap>



class SignInViewModel : public Model
{
public:

    SignInViewModel(const QString &login,
                    const QString &password
                    );

    // Model interface
    bool isValid() override;
    QString getLogin() const;
    void setLogin(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
    QMap<QString, QString> getErrMap() const;

private:
    QString login;
    QString password;
    QMap<QString, QString> errMap;

};

#endif // SIGNINVIEWMODEL_H
