/********************************************************************************
** Form generated from reading UI file 'add_prod.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PROD_H
#define UI_ADD_PROD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_prod
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Name_prod;
    QLabel *label_2;
    QLineEdit *Art_prod;
    QLabel *label_4;
    QLineEdit *price_prod;
    QLabel *label_3;
    QLineEdit *Count_prod;
    QPushButton *add_prod_button;

    void setupUi(QDialog *add_prod)
    {
        if (add_prod->objectName().isEmpty())
            add_prod->setObjectName(QString::fromUtf8("add_prod"));
        add_prod->resize(400, 300);
        add_prod->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(add_prod);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(add_prod);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Name_prod = new QLineEdit(add_prod);
        Name_prod->setObjectName(QString::fromUtf8("Name_prod"));

        verticalLayout->addWidget(Name_prod);

        label_2 = new QLabel(add_prod);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        Art_prod = new QLineEdit(add_prod);
        Art_prod->setObjectName(QString::fromUtf8("Art_prod"));
        Art_prod->setMaxLength(6);

        verticalLayout->addWidget(Art_prod);

        label_4 = new QLabel(add_prod);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        price_prod = new QLineEdit(add_prod);
        price_prod->setObjectName(QString::fromUtf8("price_prod"));

        verticalLayout->addWidget(price_prod);

        label_3 = new QLabel(add_prod);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        Count_prod = new QLineEdit(add_prod);
        Count_prod->setObjectName(QString::fromUtf8("Count_prod"));
        Count_prod->setMaxLength(5);

        verticalLayout->addWidget(Count_prod);

        add_prod_button = new QPushButton(add_prod);
        add_prod_button->setObjectName(QString::fromUtf8("add_prod_button"));
        add_prod_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(add_prod_button);


        retranslateUi(add_prod);

        QMetaObject::connectSlotsByName(add_prod);
    } // setupUi

    void retranslateUi(QDialog *add_prod)
    {
        add_prod->setWindowTitle(QCoreApplication::translate("add_prod", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_prod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("add_prod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\321\200\321\202\320\270\320\272\321\203\320\273 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("add_prod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\206\320\265\320\275\321\203(\320\262 \321\200\321\203\320\261\320\273\321\217\321\205):", nullptr));
        label_3->setText(QCoreApplication::translate("add_prod", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\276\320\262 \320\262 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\265:", nullptr));
        add_prod_button->setText(QCoreApplication::translate("add_prod", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_prod: public Ui_add_prod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PROD_H
