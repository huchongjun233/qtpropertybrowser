win32:DEFINES += QT_QTPROPERTYBROWSER_IMPORT
QT += widgets gui core
INCLUDEPATH += $$PWD/../qproperty/include
message($$PWD/../property/include)
LIBARY_NAME = qproperty
CONFIG(debug, debug|release): LIBARY_NAME = $$LIBARY_NAME"d"
LIBS += -l$$PWD/../qproperty/lib/$$LIBARY_NAME
DESTDIR = $$PWD/../build/
