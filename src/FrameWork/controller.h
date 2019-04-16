#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "httprequesthandler.h"
#include "httpsession.h"

#include <QObject>

using namespace stefanfrings;

class Controller : public QObject
{
    Q_OBJECT
public:
    Controller(QObject* parent=0);
    HttpRequest * getHttpRequest();
    HttpResponse * getHttpResponse();
    HttpSession getSession();
    void setHttpRequest( HttpRequest & req);
    void setHttpResponse( HttpResponse & resp);
    void setReqResp(HttpRequest &req, HttpResponse &resp);
    ~Controller(){}

protected:
    HttpRequest * req;
    HttpResponse * res;

};

#endif // CONTROLLER_H
