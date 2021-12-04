QT       += core gui
QT       += gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11



# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
include($$PWD/Qt-Secret/src/Qt-Secret.pri);
SOURCES += \
    add_prod.cpp \
    authentification.cpp \
    edit_prod.cpp \
    main.cpp \
    mainwindow.cpp \
    reg_room.cpp \
    winadmin.cpp \
    winseller.cpp \
    winstorekpr.cpp

HEADERS += \
    add_prod.h \
    authentification.h \
    edit_prod.h \
    mainwindow.h \
    reg_room.h \
    winadmin.h \
    winseller.h \
    winstorekpr.h

FORMS += \
    add_prod.ui \
    authentification.ui \
    edit_prod.ui \
    mainwindow.ui \
    reg_room.ui \
    winadmin.ui \
    winseller.ui \
    winstorekpr.ui


RC_FILE = file.rc


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

