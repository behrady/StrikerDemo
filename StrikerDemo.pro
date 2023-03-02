QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dbQuery.cpp \
    login.cpp \
    main.cpp \
    mainwidget.cpp \
    mainwindow.cpp \
    passchange.cpp \
    passwordchange.cpp

HEADERS += \
    dbQuery.h \
    login.h \
    mainwidget.h \
    mainwindow.h \
    passchange.h \
    passwordchange.h

FORMS += \
    login.ui \
    mainwidget.ui \
    mainwindow.ui \
    passchange.ui \
    passwordchange.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
