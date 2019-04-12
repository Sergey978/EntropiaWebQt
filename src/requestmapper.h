#ifndef REQUESTMAPPER_H
#define REQUESTMAPPER_H

#include "httprequesthandler.h"
#include "httpsessionstore.h"

#include "staticfilecontroller.h"
#include "templatecache.h"
#include"Controllers/helloworldcontroller.h"
#include "Controllers/errorcontroller.h"
#include "Controllers/admincontroller.h"
#include "Controllers/homecontroller.h"
#include "Controllers/accountcontoller.h"

#include "logger.h"
#include "staticfilecontroller.h"
#include "FrameWork/Router/urlmatcher.h"
#include "FrameWork/controller.h"



using namespace stefanfrings;

class RequestMapper : public HttpRequestHandler {
    Q_OBJECT
public:
    RequestMapper(QObject* parent=0);
    void service(HttpRequest& request, HttpResponse& response);
    static HttpSessionStore* sessionStore;
    static StaticFileController* staticFileController;
    static TemplateLoader* templateLoader;
    static Logger* logger;

private:
    Controller contr;    
    HelloWorldController helloWorldController{&contr};
    ErrorController errController{&contr};
    AdminController adminController{&contr};
    HomeController homeController{&contr};
    AccountContoller accountController{&contr};

    UrlMatcher  matcher;

};

#endif // REQUESTMAPPER_H
