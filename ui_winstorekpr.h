/********************************************************************************
** Form generated from reading UI file 'winstorekpr.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINSTOREKPR_H
#define UI_WINSTOREKPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winstorekpr
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *table_order_strkp;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *order_button;
    QPushButton *pushButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableView *table_history;
    QWidget *tab_3;
    QFormLayout *formLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cycle_strkp;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_strkp;

    void setupUi(QWidget *winstorekpr)
    {
        if (winstorekpr->objectName().isEmpty())
            winstorekpr->setObjectName(QString::fromUtf8("winstorekpr"));
        winstorekpr->resize(673, 507);
        winstorekpr->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(winstorekpr);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabWidget = new QTabWidget(winstorekpr);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setSizeIncrement(QSize(0, 0));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table_order_strkp = new QTableView(tab);
        table_order_strkp->setObjectName(QString::fromUtf8("table_order_strkp"));
        table_order_strkp->setStyleSheet(QString::fromUtf8(""));
        table_order_strkp->setCornerButtonEnabled(true);

        verticalLayout->addWidget(table_order_strkp);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        order_button = new QPushButton(tab);
        order_button->setObjectName(QString::fromUtf8("order_button"));
        order_button->setStyleSheet(QString::fromUtf8(""));
        order_button->setCheckable(false);
        order_button->setFlat(false);

        horizontalLayout_2->addWidget(order_button);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        table_history = new QTableView(tab_2);
        table_history->setObjectName(QString::fromUtf8("table_history"));
        table_history->setStyleSheet(QString::fromUtf8(""));
        table_history->setCornerButtonEnabled(false);

        verticalLayout_2->addWidget(table_history);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayout = new QFormLayout(tab_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, tableView);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_3->addWidget(tabWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cycle_strkp = new QPushButton(winstorekpr);
        cycle_strkp->setObjectName(QString::fromUtf8("cycle_strkp"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cycle_strkp->sizePolicy().hasHeightForWidth());
        cycle_strkp->setSizePolicy(sizePolicy);
        cycle_strkp->setMaximumSize(QSize(25, 25));
        cycle_strkp->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(cycle_strkp);

        verticalSpacer = new QSpacerItem(17, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        exit_strkp = new QPushButton(winstorekpr);
        exit_strkp->setObjectName(QString::fromUtf8("exit_strkp"));
        sizePolicy.setHeightForWidth(exit_strkp->sizePolicy().hasHeightForWidth());
        exit_strkp->setSizePolicy(sizePolicy);
        exit_strkp->setMinimumSize(QSize(25, 25));
        exit_strkp->setMaximumSize(QSize(25, 25));

        verticalLayout_4->addWidget(exit_strkp);


        horizontalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(winstorekpr);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(winstorekpr);
    } // setupUi

    void retranslateUi(QWidget *winstorekpr)
    {
        winstorekpr->setWindowTitle(QCoreApplication::translate("winstorekpr", "Form", nullptr));
        order_button->setText(QCoreApplication::translate("winstorekpr", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        pushButton->setText(QCoreApplication::translate("winstorekpr", "\320\236\321\202\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("winstorekpr", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("winstorekpr", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\267\320\260\320\272\320\260\320\267\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("winstorekpr", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        cycle_strkp->setText(QString());
        exit_strkp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class winstorekpr: public Ui_winstorekpr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINSTOREKPR_H
