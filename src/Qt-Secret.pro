#
# Copyright (C) 2018-2019 QuasarApp.
# Distributed under the lgplv3 software license, see the accompanying
# Everyone is permitted to copy and distribute verbatim copies
# of this license document, but changing it is not allowed.
#

QT -= gui
CONFIG += c++17

TARGET=Qt-Secret
TEMPLATE = lib

DEFINES += Qt_SECRET_LIBRARY
DEFINES += QT_DEPRECATED_WARNINGS

#DEPENDS
CONFIG(release, debug|release): {
    DESTDIR="$$PWD/build/release"
} else {
    DESTDIR="$$PWD/build/debug"
}

#include($$PWD/../uint256_t/uint256.pri)


VERSION = 0.0.0.1

HEADERS += \
    Qt-AES/qaesencryption.h \
    qtsecret_global.h \
    Qt-RSA/hexparser.h \
    Qt-RSA/qrsaencryption.h

SOURCES += \
    Qt-RSA/hexparser.cpp \
    Qt-AES/qaesencryption.cpp \
    Qt-RSA/qrsaencryption.cpp
