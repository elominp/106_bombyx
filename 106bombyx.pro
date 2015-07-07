#-------------------------------------------------
#
# Project created by QtCreator 2015-02-17T14:52:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = 106bombyx
TEMPLATE = app


SOURCES += main.cpp\
        bombyx.cpp \
        qt-plugins/qcustomplot.cpp

HEADERS  += bombyx.h \
         qt-plugins/qcustomplot.h

FORMS    += bombyx.ui
