#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include "qtpropertymanager.h"
#include "qtvariantproperty.h"
#include "qttreepropertybrowser.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void senceProperty();//场景属性
};

#endif // WIDGET_H
