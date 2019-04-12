INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

# libmysql.dll put together with .exe file

# Enable very detailed debug messages when compiling the debug version
CONFIG(debug, debug|release) {
    DEFINES += SUPERVERBOSE
}




LIBS += $$PWD/libsqlpp-mysql.a \
        $$PWD/libmysql.lib \
        "$$PWD/libmysql.dll"



HEADERS += $$PWD/sqlpp11/mysql \
           $$PWD/date  
           

    





