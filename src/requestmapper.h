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
#include "Controllers/managecontroller.h"

#include "logger.h"
#include "staticfilecontroller.h"
#include "FrameWork/Router/urlmatcher.h"
#include "FrameWork/controller.h"



using namespace stefanfrings;

class RequestMapper : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(RequestMapper)
public:
    /**
          Constructor.
          @param parent Parent object
    */
    RequestMapper(QObject* parent=0);

    /**
          Destructor.
    */
       ~RequestMapper();

    void service(HttpRequest& request, HttpResponse& response);
    static HttpSessionStore* sessionStore;
    static StaticFileController* staticFileController;
    static TemplateLoader* templateLoader;
    static Logger* logger;

private:
    UrlMatcher  matcher;

    Controller * contr =new Controller();
    HelloWorldController helloWorldController{contr};
    ErrorController errController{contr};
    AdminController adminController{contr};
    HomeController * homeController = new HomeController(contr) ;
    AccountContoller * accountController = new AccountContoller(contr);
    ManageController * manageController = new ManageController(contr);


};

#endif // REQUESTMAPPER_H
