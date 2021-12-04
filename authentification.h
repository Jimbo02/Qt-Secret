#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QDialog>
namespace Ui
{
class authentification;
}

class authentification : public QDialog
{
    Q_OBJECT

public:
    explicit authentification(QWidget *parent = nullptr);
    Ui::authentification *ui;//объект для работы с некоторыми виджетами
    ~authentification();
    //паблик функции для возврата данных в mainwindow
    QString getLogin();//для возврата логина
    QString getPass();//для возврата пароля
signals:
    void login_button_clicked();//сигнал нажатия на кнопку входа
    void register_button_clicked();//сигнал нажатия на кнопку регистрации
    void signal_change_cycle();
    void signal_question();
private slots:
    //методы в которых присваиваются значения переменным
    void on_Line_Name_textEdited(const QString &arg1);//логина
    void on_Line_Password_textEdited(const QString &arg1);//пароля

    //методы, которые испускают соответствующие сигналы
    void on_Button_Login_clicked();//игнала входа
    void on_Button_Register_clicked();//сигнала регистрации
    void on_Cycle_clicked();//сигнал смены режима
    void on_Question_clicked();//сигнал открытия файла
    void on_Button_ViewPass_toggled(bool checked);//сигнал просмотра пароля

private:
    //приватные переменные для передачи между приватными и публичными методами
    QString m_username;//логин
    QString m_userpass;//пароль
};

#endif // AUTHENTIFICATION_H
