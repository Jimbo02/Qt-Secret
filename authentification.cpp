#include "authentification.h"
#include "ui_authentification.h"

authentification::authentification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::authentification)
{
    ui->setupUi(this);
    this->setWindowTitle("Authentification");
}


authentification::~authentification()
{
    delete ui;
}


void authentification::on_Button_Login_clicked()
{
    emit login_button_clicked();
}


void authentification::on_Button_Register_clicked()
{
    emit register_button_clicked();
}

void authentification::on_Line_Name_textEdited(const QString &arg1)
{
    authentification::m_username = arg1;
}


void authentification::on_Line_Password_textEdited(const QString &arg1)
{
    authentification::m_userpass = arg1;
}

QString authentification::getLogin()
{
    return authentification::m_username;
}

QString authentification::getPass()
{
    return authentification::m_userpass;
}


void authentification::on_Cycle_clicked()
{
    emit signal_change_cycle();
}


void authentification::on_Question_clicked()
{
    emit signal_question();
}


void authentification::on_Button_ViewPass_toggled(bool checked)//функция просмотра пароля с помощью булевой переменной checked (изначально равен false)
{
if (checked == false)
{
    ui->Line_Password->setEchoMode(QLineEdit::Password);//установить строку в режим пароля(точек)
}
else
{
    ui->Line_Password->setEchoMode(QLineEdit::Normal);//установить строку в обычный режим
}
}

