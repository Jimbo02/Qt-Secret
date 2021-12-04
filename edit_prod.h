#ifndef EDIT_PROD_H
#define EDIT_PROD_H

#include <QDialog>

namespace Ui {
class edit_prod;
}

class edit_prod : public QDialog
{
    Q_OBJECT

public:
    explicit edit_prod(QWidget *parent = nullptr);
    ~edit_prod();

    //паблик функции для возврата данных в mainwindow
    QString get_edit_name();//для возврата изменённого названия товара
    QString get_edit_articul();//для возврата изменённого арткула
    QString get_edit_price();//для возврата изменённой цены
    QString get_edit_count();//для возврата изменённого количества
    Ui::edit_prod *ui;//объект для работы (указания) с некоторыми виджетами внутри окна

signals:
    void edit_prod_clicked();//сигнал на нажатия кнопки "Изменить товар"

private slots:

    //методы в которых присваиваются значения переменным
    void on_Name_edit_prod_textEdited(const QString &arg1);//названия
    void on_Art_edit_prod_textEdited(const QString &arg1);//артикула
    void on_price_edit_prod_textEdited(const QString &arg1);//цены
    void on_lineEdit_textEdited(const QString &arg1);//количества


    void on_edit_prod_button_clicked();//нажатие на кнопку "Изменить товары"

private:
    //приватные переменные для передачи между приватными и публичными методами
    QString editName;//строка названия
    QString editArticul;//строка артикула
    QString editPrice;//строка цены
    QString editCount;//строка количества товаров
};

#endif // EDIT_PROD_H
