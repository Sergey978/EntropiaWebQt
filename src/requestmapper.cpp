#include "requestmapper.h"
#include "httpsession.h"
#include "FrameWork/Router/urlparams.h"
#include "FrameWork/Router/fnptr.h"

HttpSessionStore* RequestMapper::sessionStore=0;
StaticFileController* RequestMapper::staticFileController=0;
TemplateLoader* RequestMapper::templateLoader=0;
Logger* RequestMapper::logger=0;


RequestMapper::RequestMapper(QObject* parent)
    : HttpRequestHandler(parent) {

    //registration Controllers
    //  example: matcher.regController("GET;home/about", [&](){});
    //  example: matcher.regController("GET;home/(method:str)", [&](){});
    //  example: matcher.regController("GET|POST;user/edit/(id:num)",
    //  fnptr<void(UrlParams)>[&](UrlParams p){UserController.edit(p.Num("id"))});

    //    matcher.regController("GET;admin/user/(id:num)",
    //             fnptr<void(UrlParams)>([&](UrlParams p){adminController.user(p.Num("id"));}));


    // adminController
    matcher.regController("GET;admin/user/(id:num)",
                          fnptr<void(UrlParams)>([&](UrlParams p){adminController.user(p.Num("id"));}));

    //account controller
//    matcher.regController("GET|POST;account/",
//                          fnptr<void(UrlParams)>([&](UrlParams ){accountController.index();}));


    // methods for check is empty username and user email
    matcher.regController("GET;account/(method:str)/(param:any)",
                          fnptr<void(UrlParams p)>([&](UrlParams p ){

                          }));


    matcher.regController("GET|POST;account/(action:str)",
                          fnptr<void(UrlParams p)>([&](UrlParams p){
//                              if(p.Str("method")=="signup" ) {
//                                  accountController.signup();
//                              }
//                              if(p.Str("method")=="signin" ) {
//                                  accountController.signin();
//                              }
//                              else if( p.Str("method") == "username" ){
//                                  accountController.isUserNameExist();
//                              }
//                              else if (p.Str("method") == "useremail") {
//                                  accountController.isUserEmailExist();
//                              }



              QMetaObject::invokeMethod(accountController, p.Str("action").toLatin1().data(),
                             Qt::DirectConnection);

                          }));

    // homeController
    matcher.regController("GET;/",
                          fnptr<void(UrlParams)>([&](UrlParams p){
                              homeController.home();   }));
    matcher.regController("GET;home/(method:str)",
                          fnptr<void(UrlParams)>([&](UrlParams p){
                              if (p.Str("method") == "contact")  homeController.contact();
                              else if (p.Str("method") == "about") homeController.about();
                          }));

}

RequestMapper::~RequestMapper()
{

    delete contr;
}

void RequestMapper::service(HttpRequest& request, HttpResponse& response) {
    QByteArray path=request.getPath();
    qDebug("RequestMapper: path=%s",path.data());
    HttpSession session=sessionStore->getSession(request,response,false);
    QString username=session.get("username").toString();
    logger->set("currentUser",username);
    QByteArray sessionId=sessionStore->getSessionId(request,response);

    contr->setReqResp(request, response);


    if (path.startsWith("/files" )
            || (path.startsWith("/assets"))) {
        staticFileController->service(request,response);
    }
    else if (path.startsWith("/hello"))
    {
        // contr.getHttpResponse()->write("Hello World",true);
        helloWorldController.ser();
    }

    else
    {
        Route * route = matcher.match(request.getMethod(), request.getPath().toStdString());
        if (route != nullptr)
        {
            matcher.execRoute(route);

        }
        else
        {
            errController.error404();

        }
    }

    qDebug("RequestMapper: finished request");
    logger->clear(true,true);


}



