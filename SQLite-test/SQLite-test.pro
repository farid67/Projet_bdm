#-------------------------------------------------
#
# Project created by QtCreator 2015-03-01T11:35:36
#
#-------------------------------------------------

QT       += core gui
QT       -= gui

# Ajout pour avoir une base de donnée SQLite
QT+=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SQLite-test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    db.cpp

HEADERS  += mainwindow.h \
    db.h

FORMS    += mainwindow.ui
