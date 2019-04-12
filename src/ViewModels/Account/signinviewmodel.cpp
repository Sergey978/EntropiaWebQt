#include "signinviewmodel.h"


SignInViewModel::SignInViewModel(const QString &login, const QString &password):
    login(login), password(password)
{

}

bool SignInViewModel::isValid()
{
    errMap.clear();
    if (login.isEmpty())
    {
        errMap["login"] = "Login is empty!";

    }

    if(password.isEmpty())
    {
        errMap["password"] = "Password is empty";
    }
    return errMap.isEmpty();
}

QString SignInViewModel::getLogin() const
{
   return login;
}

void SignInViewModel::setLogin(const QString &value)
{
    login = value;

}

QString SignInViewModel::getPassword() const
{
    return password;

}

void SignInViewModel::setPassword(const QString &value)
{
    password = value;
}
