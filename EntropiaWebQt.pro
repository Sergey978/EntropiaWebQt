QT  += core
QT -= gui
QT  += network

CONFIG += c++14 console

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        src\main.cpp \
    src/startup.cpp \
    src/requestmapper.cpp \
    src/FrameWork/Router/urlmatcher.cpp \
    src/FrameWork/Router/urlparams.cpp \
    src/FrameWork/controller.cpp \
    src/FrameWork/Router/route.cpp \
    src/Controllers/helloworldcontroller.cpp \
    src/Models/user.cpp \
    src/Controllers/admincontroller.cpp \
    src/Controllers/homecontroller.cpp \
    src/Controllers/errorcontroller.cpp \
    src/Models/SqlRepository/dbconfig.cpp \
    src/Models/userclaim.cpp \
    src/Models/customitem.cpp \
    src/Models/message.cpp \
    src/Models/selectedstandartitem.cpp \
    src/Models/role.cpp \
    src/Models/SqlRepository/userrepo.cpp \
    src/Models/roleoption.cpp \
    src/Controllers/accountcontoller.cpp \
    src/ViewModels/Account/signupviewmodel.cpp \
    src/FrameWork/Utilities/cypher.cpp \
    src/ViewModels/Account/signinviewmodel.cpp


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    src/startup.h \
    src/requestmapper.h \
    src/FrameWork/Router/urlmatcher.h \
    src/FrameWork/Router/urlparams.h \
    src/FrameWork/controller.h \
    src/FrameWork/Router/fnptr.h \
    src/FrameWork/Router/route.h \
    src/Controllers/helloworldcontroller.h \
    src/FrameWork/model.h \
    src/Models/user.h \
    src/Controllers/admincontroller.h \
    src/Controllers/homecontroller.h \
    src/Controllers/errorcontroller.h \
    src/Models/SqlRepository/EntropiaMySQl.h \
    src/Models/SqlRepository/dbconfig.h \
    src/Models/SqlRepository/dbcontext.h \
    src/Models/userclaim.h \
    src/Models/customitem.h \
    src/Models/message.h \
    src/Models/selectedstandartitem.h \
    src/Models/role.h \
    src/Models/SqlRepository/sqlrepository.h \
    src/Models/roleoption.h \
    src/Controllers/accountcontoller.h \
    src/ViewModels/Account/signupviewmodel.h \
    src/FrameWork/Utilities/cypher.h \
    src/ViewModels/Account/signinviewmodel.h



include(libs/QtWebApp/httpserver/httpserver.pri)
include(libs/QtWebApp/templateengine/templateengine.pri)
include(libs/QtWebApp/logging/logging.pri)
include(libs/QtWebApp/qtservice/qtservice.pri)

# select the required library package

!win32 {
        #include(libs/SQLpp11_linux/sqlpp11-mysql-connector-lib.pri)
        include(libs/SQLpp11_linux/sqlpp-sqliteconnector-lib.pri)
        }

win32 {
        #include(libs/SQLpp11_windows/sqlpp11-mysql-connector-lib.pri)
        include(libs/SQLpp11_windows/sqlpp-sqliteconnector-lib.pri)
        }




