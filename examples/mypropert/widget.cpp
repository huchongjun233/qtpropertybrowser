#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    senceProperty();
}

Widget::~Widget()
{

}

void Widget::senceProperty()//场景属性
{
    QtVariantPropertyManager *variantManager = new QtVariantPropertyManager();

    QtProperty *topItem = variantManager->addProperty(QtVariantPropertyManager::groupTypeId(),
                QStringLiteral("Group Property"));


    QtVariantProperty *item = variantManager->addProperty(QVariant::Bool, QStringLiteral(" Bool Property"));
    item->setValue(true);
    topItem->addSubProperty(item);

    item = variantManager->addProperty(QVariant::Int, QStringLiteral(" Int Property"));
    item->setValue(20);
    item->setAttribute(QStringLiteral("minimum"), 0);
    item->setAttribute(QStringLiteral("maximum"), 100);
    item->setAttribute(QStringLiteral("singleStep"), 10);
    topItem->addSubProperty(item);


    item = variantManager->addProperty(QtVariantPropertyManager::enumTypeId(),
                    QStringLiteral(" Enum Property"));
    QStringList enumNames;
    enumNames << "Enum0" << "Enum1" << "Enum2";
    item->setAttribute(QStringLiteral("enumNames"), enumNames);
    item->setValue(1);
    topItem->addSubProperty(item);

    item = variantManager->addProperty(QtVariantPropertyManager::flagTypeId(),
                    QStringLiteral(" Flag Property"));
    QStringList flagNames;
    flagNames << "Flag0" << "Flag1" << "Flag2";
    item->setAttribute(QStringLiteral("flagNames"), flagNames);
    item->setValue(5);
    topItem->addSubProperty(item);

    item = variantManager->addProperty(QtVariantPropertyManager::filePathTypeId(),QStringLiteral("路径"));
    item->setAttribute(QStringLiteral("filter"), QStringLiteral("earth files (*.earth)"));
    item->setValue("D:/SXEarthData/resource/test.earth");
    //QString strPath = item->value().value<QString>();
    //qDebug()<<"strPath1 = "<<strPath<<endl;
    topItem->addSubProperty(item);


    QtVariantEditorFactory *variantFactory = new QtVariantEditorFactory();

    //属性树
    QtTreePropertyBrowser *variantEditor = new QtTreePropertyBrowser();
    variantEditor->setFactoryForManager(variantManager, variantFactory);
    variantEditor->addProperty(topItem);
    variantEditor->setPropertiesWithoutValueMarked(true);
    variantEditor->setRootIsDecorated(false);


    //显示
    // main layout
    QVBoxLayout* vLayout = new QVBoxLayout;
    vLayout->addWidget(variantEditor);
    setLayout(vLayout);
}
