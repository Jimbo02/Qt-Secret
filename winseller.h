#ifndef WINSELLER_H
#define WINSELLER_H

#include <QDialog>

namespace Ui {
class winseller;
}

class winseller : public QDialog
{
    Q_OBJECT

public:
    explicit winseller(QWidget *parent = nullptr);
    Ui::winseller *ui;
    ~winseller();
    int get_count_shop();//метод для возврата данных из счётчика в mainwindow

    QString value_art_shop_list;//переменная используемая для возврата данных артикула из таблицы магазина в mainwindow
    QString value_art_order_list;//переменная используемая для возврата данных артикула из таблицы заказа в mainwindow
    QString return_indexed_art_shop();//метод для возврата данных артикула из таблицы магазина в mainwindow
    QString return_indexed_art_order();//метод для возврата данных артикула из таблицы заказа в mainwindow

    int value_count_list;//переменная используемая для возврата текущего количества товаров из таблицы магазина в mainwindow
    int value_order_list;//переменная используемая для возврата количества товаров из таблицы заказа в mainwindow
    int return_max_count_shop();//метод для возврата данных текущего количества товаров из таблицы магазина в mainwindow
    int return_max_count_order();//метод для возврата данных количества товаров из таблицы заказа в mainwindow

    int max_value_count_list;//переменная используемая для возврата значения максимального количества товаров из таблицы магазина в mainwindow
    int return_count_shop();//метод для возврата данных максимального количества товаров из таблицы магазина в mainwindow

private slots:
    void on_Sell_Button_clicked();//Испускание сигнала на кнопку "Продать товар"
    void on_shop_table_clicked(const QModelIndex &index);//Нажатие на ячейку таблицы товаров в магазине
    void on_order_table_clicked(const QModelIndex &index);//Нажатие на ячейку таблицы товаров для заказа
    void on_cycle_sell_clicked();//Испускание сигнала на кнопку изменения цвета
    void on_button_order_all_clicked();//Испускание сигнала на кнопку "Заказать все товары из списка"
    void on_Max_Order_Button_seller_clicked();//Испускание сигнала на кнопку "Max"
    void on_setZero_Button_clicked();//Испускание сигнала на кнопку "Очистить"
    void on_spinBox_Order_valueChanged(int arg1);//Испускание сигнала на изменение счётчика
    void on_exit_sell_clicked();//Испускание сиганала на кнопку "Выход"

signals:
    void sell_product_s();//Сигнал на кнопку "Продать товар"
    void order_all_product_s();//Сигнал на кнопку "Заказать все товары из списка"
    void signal_cycle_sell();//Сигнал на кнопку изменения цвета
    void max_Button_order();//Сигнал на кнопку "Max"
    void zero_Button_order();//Сигнал на кнопку "Очистить"
    void change_cur_order_s();//Сигнал на изменение счётчика
    void signal_exit_sell();//Сигнал на кнопку "Выход"
private:

};

#endif // WINSELLER_H
