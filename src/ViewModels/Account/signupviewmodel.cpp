#include "signupviewmodel.h"

SignUpViewModel::SignUpViewModel(const QString &loginName,
                                 const QString &emailAdress,
                                 const QString &password,
                                 const QString &confirmPassword,
                                 bool confirmCondidtions):loginName(loginName),
    emailAdress(emailAdress),password(password),
    confirmPassword(confirmPassword),confirmConditions(confirmCondidtions)
{

}

bool SignUpViewModel::isValid()
{
    errMap.clear();
    if (loginName.isEmpty())
    {
        errMap["loginName"] = "Login is empty!";

    }
    if (emailAdress.isEmpty())
    {
         errMap["email"] = "Email is empty!";

    }
    if(password.size() < 6)
    {
        errMap["password"] = "Password is too short";
    }

    if (confirmPassword != password )
    {
        errMap["confirmPassword"] = "Verification password must match";
    }

    return errMap.isEmpty();
}

QString SignUpViewModel::getLoginName() const
{
    return loginName;
}

void SignUpViewModel::setLoginName(const QString &value)
{
    loginName = value;
}

QString SignUpViewModel::getEmailAdress() const
{
    return emailAdress;
}

void SignUpViewModel::setEmailAdress(const QString &value)
{
    emailAdress = value;
}

QString SignUpViewModel::getPassword() const
{
    return password;
}

void SignUpViewModel::setPassword(const QString &value)
{
    password = value;
}

QString SignUpViewModel::getConfirmPassword() const
{
    return confirmPassword;
}

void SignUpViewModel::setConfirmPassword(const QString &value)
{
    confirmPassword = value;
}

bool SignUpViewModel::getConfirmConditions() const
{
    return confirmConditions;
}

void SignUpViewModel::setConfirmConditions(bool value)
{
    confirmConditions = value;
}

QMap<QString, QString> SignUpViewModel::getErrMap() const
{
    return errMap;
}
