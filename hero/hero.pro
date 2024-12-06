#-------------------------------------------------
#
# Project created by QtCreator 2023-04-26T17:14:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hero
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    xuanyingxiong.cpp \
    youxi.cpp \
    youxi2.cpp \
    youxi3.cpp \
    shengli.cpp

HEADERS += \
        mainwindow.h \
    xuanyingxiong.h \
    youxi.h \
    youxi2.h \
    youxi3.h \
    shengli.h

FORMS += \
        mainwindow.ui \
    xuanyingxiong.ui \
    youxi.ui \
    youxi2.ui \
    youxi3.ui \
    shengli.ui

RESOURCES += \
    tupian.qrc \
    tupian.qrc \
    tupain.qrc

DISTFILES += \
    烟花.jpg
