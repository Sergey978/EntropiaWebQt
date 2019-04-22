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

    //account controller actions resolver

    matcher.regController("GET|POST;account/",
                          fnptr<void(UrlParams )>([&](UrlParams ){
                              accountController->index();      }));


    matcher.regController("GET|POST;account/(action:str)",
                          fnptr<void(UrlParams p)>([&](UrlParams p){

                              bool result =    QMetaObject::invokeMethod(accountController,
                              p.Str("action").toLatin1().data(),
                              Qt::DirectConnection);
                              if(!result) errController.error404();     }));


    // homeController

    matcher.regController("GET;/",
                          fnptr<void(UrlParams)>([&](UrlParams ){
                              homeController->home();   }));

    matcher.regController("GET;home/(action:str)",
                          fnptr<void(UrlParams p)>([&](UrlParams p){
                              bool result =  QMetaObject::invokeMethod(homeController,
                              p.Str("action").toLatin1().data(),
                              Qt::DirectConnection);
                              if(!result) errController.error404();
                          }));

}

RequestMapper::~RequestMapper()
{

    delete homeController;
    delete  accountController;
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



