#ifndef ADD_PROD_H
#define ADD_PROD_H

#include <QDialog>

namespace Ui {
class add_prod;
}

class add_prod : public QDialog
{
    Q_OBJECT//см приложение

public:
    explicit add_prod(QWidget *parent = nullptr);
    ~add_prod();
    //методы, с помощью которых возвращает значения из функции ввода в функции mainwindow
    QString get_name();//передача названия
    QString get_articul();//передача артикула
    QString get_price();//передача цены
    QString get_count();//передача количества
    Ui::add_prod *ui;//объект для работы (указания) с некоторыми виджетами внутри окна
signals:
   void add_product_clicked();//сигнал нажатия на кнопку "Добавить продукт"
private slots:
    //методы которые получают информацию из виджетов ввода(line_edit) и присваивают их значение приватным переменным QString
    void on_Name_prod_textEdited(const QString &arg1);//присваивание названия
    void on_Art_prod_textEdited(const QString &arg1);//присваивание артикула
    void on_price_prod_textEdited(const QString &arg1);//присваивание цены
    void on_Count_prod_textEdited(const QString &arg1);
    void on_add_prod_button_clicked();

private:
    //приватные переменные для передачи между приватными и публичными методами
    QString product;//название
    QString articul;//артикул
    QString price;//цена
    QString count;//количество
};

#endif // ADD_PROD_H
