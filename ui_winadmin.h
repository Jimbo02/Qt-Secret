/********************************************************************************
** Form generated from reading UI file 'winadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINADMIN_H
#define UI_WINADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_winadmin
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *add_button;
    QPushButton *edit_button;
    QPushButton *del_button;
    QSpacerItem *verticalSpacer;
    QPushButton *main_prod_button;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cycle_admin;
    QTableView *tableView;

    void setupUi(QDialog *winadmin)
    {
        if (winadmin->objectName().isEmpty())
            winadmin->setObjectName(QString::fromUtf8("winadmin"));
        winadmin->resize(431, 446);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(winadmin->sizePolicy().hasHeightForWidth());
        winadmin->setSizePolicy(sizePolicy);
        winadmin->setMinimumSize(QSize(0, 55));
        winadmin->setMaximumSize(QSize(700, 16777215));
        winadmin->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(winadmin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        add_button = new QPushButton(winadmin);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setMinimumSize(QSize(0, 80));
        add_button->setStyleSheet(QString::fromUtf8(""));
        add_button->setAutoDefault(false);
        add_button->setFlat(false);

        verticalLayout->addWidget(add_button);

        edit_button = new QPushButton(winadmin);
        edit_button->setObjectName(QString::fromUtf8("edit_button"));
        edit_button->setMinimumSize(QSize(0, 80));
        edit_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(edit_button);

        del_button = new QPushButton(winadmin);
        del_button->setObjectName(QString::fromUtf8("del_button"));
        del_button->setMinimumSize(QSize(0, 80));
        del_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(del_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        main_prod_button = new QPushButton(winadmin);
        main_prod_button->setObjectName(QString::fromUtf8("main_prod_button"));
        main_prod_button->setMinimumSize(QSize(0, 80));
        main_prod_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(main_prod_button);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cycle_admin = new QPushButton(winadmin);
        cycle_admin->setObjectName(QString::fromUtf8("cycle_admin"));
        sizePolicy.setHeightForWidth(cycle_admin->sizePolicy().hasHeightForWidth());
        cycle_admin->setSizePolicy(sizePolicy);
        cycle_admin->setMaximumSize(QSize(25, 25));
        cycle_admin->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(cycle_admin);


        verticalLayout_2->addLayout(horizontalLayout);

        tableView = new QTableView(winadmin);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(1, 300));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setDragEnabled(true);
        tableView->setDragDropMode(QAbstractItemView::DragOnly);
        tableView->setAlternatingRowColors(true);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->setSortingEnabled(false);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setMinimumSectionSize(20);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->verticalHeader()->setMinimumSectionSize(10);

        verticalLayout_2->addWidget(tableView);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(winadmin);

        add_button->setDefault(true);


        QMetaObject::connectSlotsByName(winadmin);
    } // setupUi

    void retranslateUi(QDialog *winadmin)
    {
        winadmin->setWindowTitle(QCoreApplication::translate("winadmin", "Dialog", nullptr));
        add_button->setText(QCoreApplication::translate("winadmin", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        edit_button->setText(QCoreApplication::translate("winadmin", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        del_button->setText(QCoreApplication::translate("winadmin", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        main_prod_button->setText(QCoreApplication::translate("winadmin", "\320\222\321\213\321\205\320\276\320\264 \320\262 \320\276\320\272\320\275\320\276 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        cycle_admin->setText(QString());
#if QT_CONFIG(tooltip)
        tableView->setToolTip(QCoreApplication::translate("winadmin", "<html><head/><body><p>\320\222\321\213\320\261\320\270\321\200\320\260\320\271\321\202\320\265 \321\202\320\276\320\262\320\260\321\200, \321\201 \320\272\320\276\321\202\320\276\321\200\321\213\320\274 \321\205\320\276\321\202\320\270\321\202\320\265 \320\277\321\200\320\276\320\262\320\276\320\264\320\270\321\202\321\214 \320\262\320\267\320\260\320\270\320\274\320\276\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265, \320\275\320\260\320\266\320\270\320\274\320\260\321\217 \320\275\320\260 \320\273\321\216\320\261\321\203\321\216 \321\217\321\207\320\265\320\271\320\272\321\203 \320\265\320\263\320\276 \321\201\321\202\321\200\320\276\320\272\320\270.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tableView->setWhatsThis(QCoreApplication::translate("winadmin", "<html><head/><body><p align=\"center\">\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\202\320\276\320\262\320\260\321\200\320\276\320\262</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class winadmin: public Ui_winadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINADMIN_H
