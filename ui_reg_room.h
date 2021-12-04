/********************************************************************************
** Form generated from reading UI file 'reg_room.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_ROOM_H
#define UI_REG_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_reg_room
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Label_Name_Reg;
    QLineEdit *line_Name_Reg;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Label_Pass_Reg;
    QLineEdit *line_Pass_Reg;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Label_Conf_Reg;
    QLineEdit *line_Conf_Reg;
    QPushButton *Reg_Button;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QRadioButton *Admin;
    QRadioButton *Seller;
    QRadioButton *storekpr;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cycle_reg;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *reg_room)
    {
        if (reg_room->objectName().isEmpty())
            reg_room->setObjectName(QString::fromUtf8("reg_room"));
        reg_room->resize(402, 238);
        reg_room->setStyleSheet(QString::fromUtf8(""));
        reg_room->setModal(false);
        verticalLayout_5 = new QVBoxLayout(reg_room);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(reg_room);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Label_Name_Reg = new QLabel(reg_room);
        Label_Name_Reg->setObjectName(QString::fromUtf8("Label_Name_Reg"));
        Label_Name_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Label_Name_Reg);

        line_Name_Reg = new QLineEdit(reg_room);
        line_Name_Reg->setObjectName(QString::fromUtf8("line_Name_Reg"));
        line_Name_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(line_Name_Reg);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Label_Pass_Reg = new QLabel(reg_room);
        Label_Pass_Reg->setObjectName(QString::fromUtf8("Label_Pass_Reg"));
        Label_Pass_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(Label_Pass_Reg);

        line_Pass_Reg = new QLineEdit(reg_room);
        line_Pass_Reg->setObjectName(QString::fromUtf8("line_Pass_Reg"));
        line_Pass_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(line_Pass_Reg);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Label_Conf_Reg = new QLabel(reg_room);
        Label_Conf_Reg->setObjectName(QString::fromUtf8("Label_Conf_Reg"));
        Label_Conf_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(Label_Conf_Reg);

        line_Conf_Reg = new QLineEdit(reg_room);
        line_Conf_Reg->setObjectName(QString::fromUtf8("line_Conf_Reg"));
        line_Conf_Reg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(line_Conf_Reg);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        Reg_Button = new QPushButton(reg_room);
        Reg_Button->setObjectName(QString::fromUtf8("Reg_Button"));
        Reg_Button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(Reg_Button);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(reg_room);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_2);

        Admin = new QRadioButton(reg_room);
        Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Admin);

        Seller = new QRadioButton(reg_room);
        Seller->setObjectName(QString::fromUtf8("Seller"));
        Seller->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Seller);

        storekpr = new QRadioButton(reg_room);
        storekpr->setObjectName(QString::fromUtf8("storekpr"));
        storekpr->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(storekpr);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cycle_reg = new QPushButton(reg_room);
        cycle_reg->setObjectName(QString::fromUtf8("cycle_reg"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cycle_reg->sizePolicy().hasHeightForWidth());
        cycle_reg->setSizePolicy(sizePolicy);
        cycle_reg->setMinimumSize(QSize(5, 5));
        cycle_reg->setMaximumSize(QSize(25, 25));
        cycle_reg->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(cycle_reg);

        horizontalSpacer = new QSpacerItem(150, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(reg_room);

        QMetaObject::connectSlotsByName(reg_room);
    } // setupUi

    void retranslateUi(QDialog *reg_room)
    {
        reg_room->setWindowTitle(QCoreApplication::translate("reg_room", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("reg_room", "REGISTRATION WINDOW", nullptr));
        Label_Name_Reg->setText(QCoreApplication::translate("reg_room", "Name:", nullptr));
        Label_Pass_Reg->setText(QCoreApplication::translate("reg_room", "Password:", nullptr));
        Label_Conf_Reg->setText(QCoreApplication::translate("reg_room", "Confirm:", nullptr));
        Reg_Button->setText(QCoreApplication::translate("reg_room", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("reg_room", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        Admin->setText(QCoreApplication::translate("reg_room", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        Seller->setText(QCoreApplication::translate("reg_room", "\320\237\321\200\320\276\320\264\320\260\320\262\320\265\321\206", nullptr));
        storekpr->setText(QCoreApplication::translate("reg_room", "\320\232\320\273\320\260\320\264\320\276\320\262\321\211\320\270\320\272", nullptr));
        cycle_reg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reg_room: public Ui_reg_room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_ROOM_H
