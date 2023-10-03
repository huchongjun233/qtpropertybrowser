win32:DEFINES += QT_QTPROPERTYBROWSER_EXPORT
greaterThan(QT_MAJOR_VERSION, 4): QT *= widgets
INCLUDEPATH += $$PWD/src

HEADERS += src/qtpropertybrowser.h \
    src/qtpropertymanager.h \
    src/qteditorfactory.h \
    src/qtvariantproperty.h \
    src/qttreepropertybrowser.h \
    src/qtbuttonpropertybrowser.h \
    src/qtgroupboxpropertybrowser.h \
    src/qtpropertybrowserutils_p.h

SOURCES += src/qtpropertybrowser.cpp \
    src/qtpropertymanager.cpp \
    src/qteditorfactory.cpp \
    src/qtvariantproperty.cpp \
    src/qttreepropertybrowser.cpp \
    src/qtbuttonpropertybrowser.cpp \
    src/qtgroupboxpropertybrowser.cpp \
    src/qtpropertybrowserutils.cpp

RESOURCES += src/qtpropertybrowser.qrc
