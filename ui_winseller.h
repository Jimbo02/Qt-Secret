/********************************************************************************
** Form generated from reading UI file 'winseller.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINSELLER_H
#define UI_WINSELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_winseller
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *shop_table;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_Shop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Sell_Button;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *order_table;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *setZero_Button;
    QPushButton *Max_Order_Button_seller;
    QSpinBox *spinBox_Order;
    QPushButton *button_order_all;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cycle_sell;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit_sell;

    void setupUi(QDialog *winseller)
    {
        if (winseller->objectName().isEmpty())
            winseller->setObjectName(QString::fromUtf8("winseller"));
        winseller->resize(479, 602);
        winseller->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(winseller);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(winseller);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        shop_table = new QTableView(winseller);
        shop_table->setObjectName(QString::fromUtf8("shop_table"));

        verticalLayout->addWidget(shop_table);

        label_3 = new QLabel(winseller);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        spinBox_Shop = new QSpinBox(winseller);
        spinBox_Shop->setObjectName(QString::fromUtf8("spinBox_Shop"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_Shop->sizePolicy().hasHeightForWidth());
        spinBox_Shop->setSizePolicy(sizePolicy);
        spinBox_Shop->setMinimumSize(QSize(70, 0));
        spinBox_Shop->setMinimum(1);
        spinBox_Shop->setMaximum(1000);

        horizontalLayout->addWidget(spinBox_Shop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        Sell_Button = new QPushButton(winseller);
        Sell_Button->setObjectName(QString::fromUtf8("Sell_Button"));

        verticalLayout->addWidget(Sell_Button);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(17, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(winseller);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        order_table = new QTableView(winseller);
        order_table->setObjectName(QString::fromUtf8("order_table"));

        verticalLayout_2->addWidget(order_table);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        setZero_Button = new QPushButton(winseller);
        setZero_Button->setObjectName(QString::fromUtf8("setZero_Button"));
        sizePolicy.setHeightForWidth(setZero_Button->sizePolicy().hasHeightForWidth());
        setZero_Button->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(setZero_Button);

        Max_Order_Button_seller = new QPushButton(winseller);
        Max_Order_Button_seller->setObjectName(QString::fromUtf8("Max_Order_Button_seller"));
        sizePolicy.setHeightForWidth(Max_Order_Button_seller->sizePolicy().hasHeightForWidth());
        Max_Order_Button_seller->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Max_Order_Button_seller);

        spinBox_Order = new QSpinBox(winseller);
        spinBox_Order->setObjectName(QString::fromUtf8("spinBox_Order"));
        sizePolicy.setHeightForWidth(spinBox_Order->sizePolicy().hasHeightForWidth());
        spinBox_Order->setSizePolicy(sizePolicy);
        spinBox_Order->setMinimumSize(QSize(70, 0));
        spinBox_Order->setMaximum(100000);

        horizontalLayout_3->addWidget(spinBox_Order);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        button_order_all = new QPushButton(winseller);
        button_order_all->setObjectName(QString::fromUtf8("button_order_all"));

        verticalLayout_3->addWidget(button_order_all);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cycle_sell = new QPushButton(winseller);
        cycle_sell->setObjectName(QString::fromUtf8("cycle_sell"));
        sizePolicy.setHeightForWidth(cycle_sell->sizePolicy().hasHeightForWidth());
        cycle_sell->setSizePolicy(sizePolicy);
        cycle_sell->setMaximumSize(QSize(25, 25));
        cycle_sell->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(cycle_sell);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        exit_sell = new QPushButton(winseller);
        exit_sell->setObjectName(QString::fromUtf8("exit_sell"));

        horizontalLayout_2->addWidget(exit_sell);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(winseller);

        QMetaObject::connectSlotsByName(winseller);
    } // setupUi

    void retranslateUi(QDialog *winseller)
    {
        winseller->setWindowTitle(QCoreApplication::translate("winseller", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("winseller", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("winseller", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\276\320\262\320\260\321\200 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\270 \320\265\320\263\320\276 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        Sell_Button->setText(QCoreApplication::translate("winseller", "\320\237\321\200\320\276\320\264\320\260\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("winseller", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\267\320\260\320\272\320\260\320\267\320\276\320\262", nullptr));
        setZero_Button->setText(QCoreApplication::translate("winseller", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        Max_Order_Button_seller->setText(QCoreApplication::translate("winseller", "Max", nullptr));
        button_order_all->setText(QCoreApplication::translate("winseller", "\320\227\320\260\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        cycle_sell->setText(QString());
        exit_sell->setText(QCoreApplication::translate("winseller", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winseller: public Ui_winseller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINSELLER_H
