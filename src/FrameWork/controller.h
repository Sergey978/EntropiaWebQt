#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "httprequesthandler.h"
#include "httpsession.h"

using namespace stefanfrings;

class Controller : public HttpRequestHandler
{
    Q_OBJECT
public:
    Controller(QObject* parent=0);
    void service(HttpRequest& request, HttpResponse& response);
    void error404(HttpResponse &response);
    HttpRequest * getHttpRequest();
    HttpResponse * getHttpResponse();
    HttpSession getSession();
    void setHttpRequest( HttpRequest & req);
    void setHttpResponse( HttpResponse & resp);
    void setReqResp(HttpRequest &req, HttpResponse &resp);
    virtual ~Controller(){}

protected:
    HttpRequest * req;
    HttpResponse * res;

};

#endif // CONTROLLER_H
