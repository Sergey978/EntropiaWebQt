#include "accountcontoller.h"
#include "../requestmapper.h"
#include "../ViewModels/Account/signupviewmodel.h"
#include "../ViewModels/Account/signinviewmodel.h"
#include "../Models/user.h"
#include "../Models/SqlRepository/sqlrepository.h"
#include <QMap>
#include "../FrameWork/Utilities/cypher.h"


AccountContoller::AccountContoller(Controller * contr ):controller(contr),
    t(RequestMapper::templateLoader->getTemplate("account/layout"))
{

}

void AccountContoller::signup()
{
    HttpSession session=controller->getSession();

    Template t = RequestMapper::templateLoader->getTemplate("account/layout");
    if (controller->getHttpRequest()->getMethod() == "GET")
    {

        QString username=session.get("username").toString();

        if (!username.isEmpty())
        {
            controller->getHttpResponse()->redirect("manage/index");
        }
        setCommonTemplate();
        controller->getHttpResponse()->write(t.toUtf8(),true);
    }
    else if (controller->getHttpRequest()->getMethod() == "POST")
    {
        QMap<QByteArray, QByteArray> reqParams =
                controller->getHttpRequest()->getParameterMap();

        SignUpViewModel signUpModel(
                    reqParams["username"],
                reqParams["email"],
                reqParams["Password"],
                reqParams["confirmPassword"],
                reqParams["AgreementsConfirm"].toInt());

        if(signUpModel.isValid())
        {
            //register new user in database
            User newUser(0u,
                         signUpModel.getEmailAdress().toStdString(),
                         signUpModel.getLoginName().toStdString(),
                         Cypher::getHashStringFromQba(reqParams["Password"], "salt")
                    );

            SqlRepository repo;
            repo.createUser(newUser);

            controller->getHttpResponse()->redirect("/");

        }
        else {
            QMap<QString, QString> errMap = signUpModel.getErrMap();
            //  foreach(QString i, errMap.keys()) std::cout << errMap[i].toStdString();
            controller->getHttpResponse()->redirect("/account/");

        }

    }


}

void AccountContoller::signin()
{
    HttpSession session=controller->getSession();
    Template t = RequestMapper::templateLoader->getTemplate("public/signin");
    QString _resultJSON = "{\"response\":\"false\"}";
    if (controller->getHttpRequest()->getMethod() == "GET")
    {

        QString username=session.get("username").toString();

        if (!username.isEmpty())
        {
            controller->getHttpResponse()->redirect("manage/index");
        }
        controller->getHttpResponse()->write(t.toUtf8(),true);
    }
    else if (controller->getHttpRequest()->getMethod() == "POST")
    {
        QMap<QByteArray, QByteArray> reqParams =
                controller->getHttpRequest()->getParameterMap();

        SignInViewModel signInModel(
                    reqParams["username"],
                reqParams["Password"]
                );

        if(signInModel.isValid())
        {
            //find user
            SqlRepository repo;
            User user = repo.findUserByLogin(signInModel.getLogin().toStdString());
            //if user not found
            if (user.getId() == 0)
            {
                controller->getHttpResponse()->write(_resultJSON.toUtf8(),true);
                return;
            }
            // check password
            else if ( user.getPasswordHash() != Cypher::getHashStringFromQba(reqParams["Password"], "salt")){
                // password incorrect
                controller->getHttpResponse()->write(_resultJSON.toUtf8(),true);
                return;
            }
            else{
                // login and password correct
                session.set("username",QString::fromUtf8(user.getUserName().c_str()));
                session.set("logintime",QTime::currentTime());
                _resultJSON = "{\"response\":\"true\"}";
            }

        }
        else {
            //signInVieweModel not valid redirect to form
            controller->getHttpResponse()->redirect("/account/signin");

        }

    }


}

void AccountContoller::index()
{
    HttpSession session=controller->getSession();
    QString username=session.get("username").toString();

           if (!username.isEmpty())
           {
                controller->getHttpResponse()->redirect("/manage");
           }
           else {
                controller->getHttpResponse()->redirect("/account/signin");

           }

}

void AccountContoller::isUserNameExist()
{

    if (controller->getHttpRequest()->getMethod() == "POST"){

        QMap<QByteArray, QByteArray> reqParams =
                controller->getHttpRequest()->getParameterMap();

        std::string username = reqParams["username"].toStdString();

        SqlRepository _repo;
        QString _resultJSON;
        if (_repo.findUserByUserName( username).getId() != 0){

            // if userName isn't free
            _resultJSON = "{\"response\":\"true\"}";
        }
        else {
            _resultJSON = "{\"response\":\"false\"}";
        }

        controller->getHttpResponse()->setHeader("Access-Control-Allow-Origin:", "*");
        controller->getHttpResponse()->write(_resultJSON.toUtf8(),true);
    }
    else if (controller->getHttpRequest()->getMethod() == "OPTIONS") {

        QMap<QByteArray, QByteArray> reqParams =
                controller->getHttpRequest()->getParameterMap();
        std::string username = reqParams["username"].toStdString();

    }

}


void AccountContoller::isUserEmailExist()
{
    if (controller->getHttpRequest()->getMethod() == "POST"){

        QMap<QByteArray, QByteArray> reqParams =
                controller->getHttpRequest()->getParameterMap();

        std::string email = reqParams["email"].toStdString();

        SqlRepository _repo;
        QString _resultJSON;
        if (_repo.findUserByEmail( email).getId() != 0){

            // if user Email isn't free
            _resultJSON = "{\"response\":\"true\"}";
        }
        else {
            _resultJSON = "{\"response\":\"false\"}";
        }
        controller->getHttpResponse()->setHeader("Access-Control-Allow-Origin:", "*");
        controller->getHttpResponse()->write(_resultJSON.toUtf8(),true);

    }

}

void AccountContoller::setCommonTemplate()
{
    Template footer = RequestMapper::templateLoader->getTemplate("default-share/footer");
    Template head = RequestMapper::templateLoader->getTemplate("default-share/head");
    Template navbar = RequestMapper::templateLoader->getTemplate("default-share/navbar");

    t.setVariable("footer", footer);
    t.setVariable("head", head);
    t.setVariable("navbar", navbar);

}




