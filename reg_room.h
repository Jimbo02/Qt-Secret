#ifndef REG_ROOM_H
#define REG_ROOM_H

#include <QDialog>

namespace Ui {
class reg_room;
}

class reg_room : public QDialog
{
    Q_OBJECT

public:
    explicit reg_room(QWidget *parent = nullptr);
    ~reg_room();
    //паблик функции для возврата данных в mainwindow
    QString getNameUser();//логина
    QString getPassUser();//пароля
    QString checkProf();//профессии
    Ui::reg_room *ui;

    bool checkPass();//функция подтверждения пароля

signals:
    void register_button_clicked2();//сигнал нажатия на кнопку "Зарегистрироваться"
    void signal_cycle_reg();

private slots:
    //методы в которых присваиваются значения переменным
    void on_line_Name_Reg_textEdited(const QString &arg1);//логина
    void on_line_Pass_Reg_textEdited(const QString &arg1);//пароля
    void on_line_Conf_Reg_textEdited(const QString &arg1);//подтверждения пароля

    void on_Reg_Button_clicked();//метод, который испускает сигнал кнопки "Зарегистрироваться"
    void on_cycle_reg_clicked();
    bool eventFilter(QObject *watched, QEvent *event);

private:


    //приватные переменные для передачи между приватными и публичными методами
    QString m_userName;//логина
    QString m_userPass;//пароля
    QString m_confirmation;//подтверждения пароля
    QString m_prof;//профессии
};

#endif // REG_ROOM_H
