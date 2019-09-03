QT       += core gui
QT       += webkitwidgets
QT       += webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spabro
TEMPLATE = app

SOURCES += \
    src/canvas.cpp \
    src/dialog.cpp \
    src/main.cpp \

FORMS += \
    src/canvas.ui \
    src/dialog.ui \

HEADERS += \
    src/canvas.h \
    src/dialog.h \

SUBDIRS += \
    tests/tests.pro
