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
    src/ViewModels/Account/signinviewmodel.cpp \
   
  
    


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
    src/ViewModels/Account/signinviewmodel.h \
 

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

DISTFILES += \
    docroot/assets/fonts/fontawesome-webfont.woff \
    docroot/assets/fonts/glyphicons-halflings-regular.woff \
    docroot/assets/plugins/slider.revolution.v4/font/revicons.woff@5510888 \
    docroot/assets/js/bootstrap.min.js \
    docroot/assets/js/google-map.js \
    docroot/assets/js/headroom.min.js \
    docroot/assets/js/html5shiv.js \
    docroot/assets/js/jQuery.headroom.min.js \
    docroot/assets/js/respond.min.js \
    docroot/assets/js/signup.js \
    docroot/assets/js/slider_revolution.js \
    docroot/assets/js/template.js \
    docroot/assets/plugins/slider.revolution.v4/js/jquery.themepunch.revolution.min.js \
    docroot/assets/plugins/slider.revolution.v4/js/jquery.themepunch.tools.min.js \
    docroot/assets/fonts/glyphicons-halflings-regular.eot \
    docroot/assets/fonts/glyphicons-halflings-regular.woff2 \
    docroot/assets/plugins/slider.revolution.v4/font/revicons.eot@5510888 \
    docroot/assets/fonts/fontawesome-webfont.eot \
    docroot/assets/fonts/FontAwesome.otf \
    docroot/assets/fonts/fontawesome-webfont.ttf \
    docroot/assets/fonts/glyphicons-halflings-regular.ttf \
    docroot/assets/plugins/slider.revolution.v4/font/revicons.ttf@5510888 \
    docroot/assets/plugins/slider.revolution.v4/font/revicons.svg@5510888.xml \
    docroot/assets/images/loading.gif \
    docroot/assets/plugins/slider.revolution.v4/assets/loader.gif \
    docroot/assets/images/demo/revolution_slider/darkblurbg.jpg \
    docroot/assets/images/demo/revolution_slider/slider7.jpg \
    docroot/assets/images/demo/revolution_slider/sliderbg.jpg \
    docroot/assets/images/demo/revolution_slider/text_slider.jpg \
    docroot/assets/images/demo/parallax.jpg \
    docroot/assets/images/1.jpg \
    docroot/assets/images/2.jpg \
    docroot/assets/images/mac.jpg \
    docroot/assets/images/demo/revolution_slider/desktop_slider_2.png \
    docroot/assets/images/demo/revolution_slider/imac1.png \
    docroot/assets/images/demo/revolution_slider/leftarrow.png \
    docroot/assets/images/demo/revolution_slider/lupe_imac.png \
    docroot/assets/images/demo/revolution_slider/lupe_macbook.png \
    docroot/assets/images/demo/revolution_slider/macbook2.png \
    docroot/assets/images/demo/revolution_slider/rightarrow.png \
    docroot/assets/images/demo/revolution_slider/slider_run.png \
    docroot/assets/images/demo/revolution_slider/transparent.png \
    docroot/assets/images/demo/revolution_slider/videoshadow.png \
    docroot/assets/images/demo/desktop2.png \
    docroot/assets/images/gt_favicon.png \
    docroot/assets/images/logo.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrow_left.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrow_left2.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrow_right.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrow_right2.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrowleft.png \
    docroot/assets/plugins/slider.revolution.v4/assets/arrowright.png \
    docroot/assets/plugins/slider.revolution.v4/assets/boxed_bgtile.png \
    docroot/assets/plugins/slider.revolution.v4/assets/bullet.png \
    docroot/assets/plugins/slider.revolution.v4/assets/bullet_boxed.png \
    docroot/assets/plugins/slider.revolution.v4/assets/bullets.png \
    docroot/assets/plugins/slider.revolution.v4/assets/bullets2.png \
    docroot/assets/plugins/slider.revolution.v4/assets/coloredbg.png \
    docroot/assets/plugins/slider.revolution.v4/assets/gridtile.png \
    docroot/assets/plugins/slider.revolution.v4/assets/gridtile_3x3.png \
    docroot/assets/plugins/slider.revolution.v4/assets/gridtile_3x3_white.png \
    docroot/assets/plugins/slider.revolution.v4/assets/gridtile_white.png \
    docroot/assets/plugins/slider.revolution.v4/assets/large_left.png \
    docroot/assets/plugins/slider.revolution.v4/assets/large_right.png \
    docroot/assets/plugins/slider.revolution.v4/assets/navigdots.png \
    docroot/assets/plugins/slider.revolution.v4/assets/navigdots_bgtile.png \
    docroot/assets/plugins/slider.revolution.v4/assets/shadow1.png \
    docroot/assets/plugins/slider.revolution.v4/assets/shadow2.png \
    docroot/assets/plugins/slider.revolution.v4/assets/shadow3.png \
    docroot/assets/plugins/slider.revolution.v4/assets/small_left.png \
    docroot/assets/plugins/slider.revolution.v4/assets/small_left_boxed.png \
    docroot/assets/plugins/slider.revolution.v4/assets/small_right.png \
    docroot/assets/plugins/slider.revolution.v4/assets/small_right_boxed.png \
    docroot/assets/plugins/slider.revolution.v4/assets/timer.png \
    docroot/assets/plugins/slider.revolution.v4/images/gradient/g30.png \
    docroot/assets/plugins/slider.revolution.v4/images/gradient/g40.png \
    docroot/assets/fonts/fontawesome-webfont.svg \
    docroot/assets/fonts/glyphicons-halflings-regular.svg \
    docroot/assets/css/bootstrap-theme.css \
    docroot/assets/css/bootstrap-theme.min.css \
    docroot/assets/css/bootstrap.min.css \
    docroot/assets/css/font-awesome.min.css \
    docroot/assets/css/layout.css \
    docroot/assets/css/main.css \
    docroot/assets/css/signup.css \
    docroot/assets/plugins/slider.revolution.v4/css/settings.css \
    docroot/account/layout.html \
    docroot/account/signup-main-cont.html \
    docroot/default-share/footer.html \
    docroot/default-share/head.html \
    docroot/default-share/navbar.html \
    docroot/home/about-main-cont.html \
    docroot/home/contact-main-cont.html \
    docroot/home/header-slider.html \
    docroot/home/home-layout.html \
    docroot/home/layout.html \
    docroot/public/about.html \
    docroot/public/contact.html \
    docroot/public/index.html \
    docroot/public/manage.html \
    docroot/public/sidebar-left.html \
    docroot/public/sidebar-right.html \
    docroot/public/signin.html \
    docroot/public/signup.html




