QT       += core gui
QT       += webkitwidgets
QT       += webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spabro
TEMPLATE = app

SOURCES += \
    src/canvas.cpp \
    src/main.cpp \

FORMS += \
    src/canvas.ui \

HEADERS += \
    src/canvas.h \

SUBDIRS += \
    tests/tests.pro
