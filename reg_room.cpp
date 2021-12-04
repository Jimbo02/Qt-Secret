#include "reg_room.h"
#include "ui_reg_room.h"


reg_room::reg_room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_room)
{
    ui->setupUi(this);
    this->setWindowTitle("Registration");
    ui->Seller->setChecked(true);
    ui->line_Pass_Reg->setInputMask("NNNNNNNNNNNNNNNN");//маска для того, чтобы пользователь мог вводить только цифры и английские буквы
    ui->line_Conf_Reg->setInputMask("NNNNNNNNNNNNNNNN");//маска для того, чтобы пользователь мог вводить только цифры и английские буквы
    ui->line_Pass_Reg->installEventFilter(this);
    ui->line_Conf_Reg->installEventFilter(this);

}

reg_room::~reg_room()
{
    delete ui;
}

void reg_room::on_Reg_Button_clicked()
{
    if (ui->Admin->isChecked())
    {
        reg_room::m_prof = "administrator";
    }
    else if (ui->Seller->isChecked())
    {
        reg_room::m_prof = "seller";
    }
    else if(ui->storekpr->isChecked())
    {
        reg_room::m_prof = "storekpr";
    }
    emit register_button_clicked2();
}

void reg_room::on_line_Name_Reg_textEdited(const QString &arg1)
{
    reg_room::m_userName = arg1;
}


void reg_room::on_line_Pass_Reg_textEdited(const QString &arg1)
{
    reg_room::m_userPass = arg1;
}


void reg_room::on_line_Conf_Reg_textEdited(const QString &arg1)
{
    reg_room::m_confirmation = arg1;
}
void reg_room::on_cycle_reg_clicked()
{
    emit signal_cycle_reg();
}

QString reg_room::getNameUser()
{
    return m_userName;
}

QString reg_room::getPassUser()
{
    return m_userPass;
}

bool reg_room::checkPass()
{
if (m_confirmation.size() >= 8)
    {
    return (m_confirmation == m_userPass );
    }
else
{
    return false;
}
}

QString reg_room::checkProf()
{
    return m_prof;
}





bool reg_room::eventFilter(QObject *object_line, QEvent *clicked)//функция для возврата положения курсора при нажатии на объект ввода в положение 0 (положение сбивается из-за наложенной маски)
{
    if (object_line == (ui->line_Pass_Reg) && clicked->type() == QEvent::MouseButtonPress && m_userPass.size() == 0)
    {
        ui->line_Pass_Reg->QLineEdit::setCursorPosition(0);
        return true;
    }
    else if (object_line == (ui->line_Conf_Reg) && clicked->type() == QEvent::MouseButtonPress && m_confirmation.size() == 0)
    {
        ui->line_Conf_Reg->QLineEdit::setCursorPosition(0);
        return true;
    }
    else
    {
        return false;
    }
}
