/********************************************************************************
** Form generated from reading UI file 'edit_prod.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_PROD_H
#define UI_EDIT_PROD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_edit_prod
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_name_edit;
    QLineEdit *Name_edit_prod;
    QLabel *label_art_edit;
    QLineEdit *Art_edit_prod;
    QLabel *label_price_edit;
    QLineEdit *price_edit_prod;
    QLabel *label_count_edit;
    QLineEdit *lineEdit;
    QPushButton *edit_prod_button;

    void setupUi(QDialog *edit_prod)
    {
        if (edit_prod->objectName().isEmpty())
            edit_prod->setObjectName(QString::fromUtf8("edit_prod"));
        edit_prod->resize(400, 300);
        edit_prod->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(edit_prod);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_name_edit = new QLabel(edit_prod);
        label_name_edit->setObjectName(QString::fromUtf8("label_name_edit"));

        verticalLayout->addWidget(label_name_edit);

        Name_edit_prod = new QLineEdit(edit_prod);
        Name_edit_prod->setObjectName(QString::fromUtf8("Name_edit_prod"));

        verticalLayout->addWidget(Name_edit_prod);

        label_art_edit = new QLabel(edit_prod);
        label_art_edit->setObjectName(QString::fromUtf8("label_art_edit"));

        verticalLayout->addWidget(label_art_edit);

        Art_edit_prod = new QLineEdit(edit_prod);
        Art_edit_prod->setObjectName(QString::fromUtf8("Art_edit_prod"));

        verticalLayout->addWidget(Art_edit_prod);

        label_price_edit = new QLabel(edit_prod);
        label_price_edit->setObjectName(QString::fromUtf8("label_price_edit"));

        verticalLayout->addWidget(label_price_edit);

        price_edit_prod = new QLineEdit(edit_prod);
        price_edit_prod->setObjectName(QString::fromUtf8("price_edit_prod"));

        verticalLayout->addWidget(price_edit_prod);

        label_count_edit = new QLabel(edit_prod);
        label_count_edit->setObjectName(QString::fromUtf8("label_count_edit"));

        verticalLayout->addWidget(label_count_edit);

        lineEdit = new QLineEdit(edit_prod);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        edit_prod_button = new QPushButton(edit_prod);
        edit_prod_button->setObjectName(QString::fromUtf8("edit_prod_button"));
        edit_prod_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(edit_prod_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(edit_prod);

        QMetaObject::connectSlotsByName(edit_prod);
    } // setupUi

    void retranslateUi(QDialog *edit_prod)
    {
        edit_prod->setWindowTitle(QCoreApplication::translate("edit_prod", "Dialog", nullptr));
        label_name_edit->setText(QCoreApplication::translate("edit_prod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_art_edit->setText(QCoreApplication::translate("edit_prod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\321\200\321\202\320\270\320\272\321\203\320\273:", nullptr));
        label_price_edit->setText(QCoreApplication::translate("edit_prod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\206\320\265\320\275\321\203:", nullptr));
        label_count_edit->setText(QCoreApplication::translate("edit_prod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\276\320\262:", nullptr));
        edit_prod_button->setText(QCoreApplication::translate("edit_prod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_prod: public Ui_edit_prod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_PROD_H
