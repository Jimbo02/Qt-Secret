/********************************************************************************
** Form generated from reading UI file 'authentification.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTIFICATION_H
#define UI_AUTHENTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_authentification
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Label_Shop;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *Label_Name;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *Line_Name;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *Label_Password;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *Line_Password;
    QPushButton *Button_ViewPass;
    QPushButton *Button_Login;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QLabel *Label_Register;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cycle;
    QPushButton *Question;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_Register;

    void setupUi(QDialog *authentification)
    {
        if (authentification->objectName().isEmpty())
            authentification->setObjectName(QString::fromUtf8("authentification"));
        authentification->resize(615, 450);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(authentification->sizePolicy().hasHeightForWidth());
        authentification->setSizePolicy(sizePolicy);
        authentification->setMinimumSize(QSize(550, 400));
        authentification->setMaximumSize(QSize(1920, 1080));
        authentification->setStyleSheet(QString::fromUtf8("color: rgb(125, 125, 125);\n"
"background-color: rgb(38, 38, 38);"));
        authentification->setSizeGripEnabled(true);
        verticalLayout_6 = new QVBoxLayout(authentification);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Label_Shop = new QLabel(authentification);
        Label_Shop->setObjectName(QString::fromUtf8("Label_Shop"));
        Label_Shop->setMinimumSize(QSize(300, 0));
        Label_Shop->setMaximumSize(QSize(300, 200));
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        Label_Shop->setFont(font);
        Label_Shop->setLayoutDirection(Qt::LeftToRight);
        Label_Shop->setStyleSheet(QString::fromUtf8(""));
        Label_Shop->setTextFormat(Qt::AutoText);
        Label_Shop->setPixmap(QPixmap(QString::fromUtf8("Pics/Fon2.png")));

        horizontalLayout_2->addWidget(Label_Shop);

        label = new QLabel(authentification);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        label->setBaseSize(QSize(200, 200));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Sunken);
        label->setPixmap(QPixmap(QString::fromUtf8("Pics/MsShop.png")));
        label->setScaledContents(true);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(label);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Label_Name = new QLabel(authentification);
        Label_Name->setObjectName(QString::fromUtf8("Label_Name"));
        QFont font1;
        font1.setPointSize(9);
        Label_Name->setFont(font1);
        Label_Name->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Label_Name);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Line_Name = new QLineEdit(authentification);
        Line_Name->setObjectName(QString::fromUtf8("Line_Name"));
        Line_Name->setMinimumSize(QSize(0, 35));
        Line_Name->setMaximumSize(QSize(16777215, 35));
        QFont font2;
        font2.setPointSize(10);
        Line_Name->setFont(font2);
        Line_Name->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(Line_Name);

        horizontalSpacer_2 = new QSpacerItem(30, 30, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Label_Password = new QLabel(authentification);
        Label_Password->setObjectName(QString::fromUtf8("Label_Password"));
        Label_Password->setFont(font1);
        Label_Password->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Label_Password);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Line_Password = new QLineEdit(authentification);
        Line_Password->setObjectName(QString::fromUtf8("Line_Password"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Line_Password->sizePolicy().hasHeightForWidth());
        Line_Password->setSizePolicy(sizePolicy2);
        Line_Password->setMinimumSize(QSize(0, 35));
        Line_Password->setMaximumSize(QSize(16777215, 35));
        Line_Password->setFont(font2);
        Line_Password->setEchoMode(QLineEdit::Password);
        Line_Password->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(Line_Password);

        Button_ViewPass = new QPushButton(authentification);
        Button_ViewPass->setObjectName(QString::fromUtf8("Button_ViewPass"));
        sizePolicy1.setHeightForWidth(Button_ViewPass->sizePolicy().hasHeightForWidth());
        Button_ViewPass->setSizePolicy(sizePolicy1);
        Button_ViewPass->setMinimumSize(QSize(30, 30));
        Button_ViewPass->setMaximumSize(QSize(30, 30));
        Button_ViewPass->setIconSize(QSize(30, 30));
        Button_ViewPass->setCheckable(true);
        Button_ViewPass->setFlat(true);

        horizontalLayout_4->addWidget(Button_ViewPass);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        Button_Login = new QPushButton(authentification);
        Button_Login->setObjectName(QString::fromUtf8("Button_Login"));
        Button_Login->setStyleSheet(QString::fromUtf8(""));
        Button_Login->setCheckable(false);
        Button_Login->setChecked(false);

        verticalLayout_5->addWidget(Button_Login);


        verticalLayout_6->addLayout(verticalLayout_5);

        line = new QFrame(authentification);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Label_Register = new QLabel(authentification);
        Label_Register->setObjectName(QString::fromUtf8("Label_Register"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft Tai Le")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setKerning(true);
        Label_Register->setFont(font3);
        Label_Register->setStyleSheet(QString::fromUtf8(""));
        Label_Register->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout_3->addWidget(Label_Register);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Cycle = new QPushButton(authentification);
        Cycle->setObjectName(QString::fromUtf8("Cycle"));
        sizePolicy1.setHeightForWidth(Cycle->sizePolicy().hasHeightForWidth());
        Cycle->setSizePolicy(sizePolicy1);
        Cycle->setMinimumSize(QSize(25, 25));
        Cycle->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(Cycle);

        Question = new QPushButton(authentification);
        Question->setObjectName(QString::fromUtf8("Question"));
        Question->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(Question);

        horizontalSpacer = new QSpacerItem(214, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_Register = new QPushButton(authentification);
        Button_Register->setObjectName(QString::fromUtf8("Button_Register"));
        sizePolicy1.setHeightForWidth(Button_Register->sizePolicy().hasHeightForWidth());
        Button_Register->setSizePolicy(sizePolicy1);
        Button_Register->setMinimumSize(QSize(200, 40));
        Button_Register->setMaximumSize(QSize(100, 40));
        Button_Register->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Button_Register);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(authentification);

        QMetaObject::connectSlotsByName(authentification);
    } // setupUi

    void retranslateUi(QDialog *authentification)
    {
        authentification->setWindowTitle(QCoreApplication::translate("authentification", "Dialog", nullptr));
        Label_Shop->setText(QString());
        label->setText(QString());
        Label_Name->setText(QCoreApplication::translate("authentification", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        Label_Password->setText(QCoreApplication::translate("authentification", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Button_ViewPass->setText(QString());
        Button_Login->setText(QCoreApplication::translate("authentification", "\320\222\321\205\320\276\320\264", nullptr));
        Label_Register->setText(QCoreApplication::translate("authentification", "\320\222\321\213 \320\275\320\276\320\262\321\213\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214?", nullptr));
        Cycle->setText(QString());
        Question->setText(QCoreApplication::translate("authentification", "?", nullptr));
        Button_Register->setText(QCoreApplication::translate("authentification", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authentification: public Ui_authentification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTIFICATION_H
