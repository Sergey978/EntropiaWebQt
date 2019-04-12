#ifndef SIGNUPVIEWMODEL_H
#define SIGNUPVIEWMODEL_H

#include "../../FrameWork/model.h"
#include "../../Models/user.h"
#include <QString>
#include <QMap>

class SignUpViewModel: public Model
{
public:
    SignUpViewModel(const QString &loginName,
                    const QString &emailAdress,
                    const QString &password,
                    const QString &confirmPassword,
                    bool confirmCondidtions);

    // Model interface
    bool isValid() override;
    QString getLoginName() const;
    void setLoginName(const QString &value);

    QString getEmailAdress() const;
    void setEmailAdress(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

    QString getConfirmPassword() const;
    void setConfirmPassword(const QString &value);

    bool getConfirmConditions() const;
    void setConfirmConditions(bool value);

    QMap<QString, QString> getErrMap() const;

private:
    QString loginName;
    QString emailAdress;
    QString password;
    QString confirmPassword;
    bool confirmConditions;
    QMap<QString, QString> errMap;



};

#endif // SIGNUPVIEWMODEL_H
