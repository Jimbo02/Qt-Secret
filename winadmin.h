#ifndef WINADMIN_H
#define WINADMIN_H

#include <QDialog>
#include <QtSql/QtSql>
#include <QStandardItemModel>

namespace Ui {
class winadmin;
}

class winadmin : public QDialog
{
    Q_OBJECT

public:
    explicit winadmin(QWidget *parent = nullptr);
    Ui::winadmin *ui;
    ~winadmin();
    QString get_articul_table();//паблик функции для возврата артикула таблицы в mainwindow
    QString value_winadmin;

signals:
void w_product_opened();//сигнал на кнопку "Добавление товара"
void w_product_deleted();//сигнал на кнопку "Удаление товара"
void w_product_edited();//сигнал на кнопку "Изменение товара"
void admin_to_auth();//сигнал на кнопку "Выход в окно авторизации"
void signal_cycle_admin();//сигнал на кнопку изменения темы

private slots:

//методы которые испускают сигналы
void on_add_button_clicked();//испускание сигнала на кнопку "Добавление товара"
void on_del_button_clicked();//испускание сигнала на кнопку "Удаление товара"
void on_edit_button_clicked();//испускание сигнала на кнопку "Изменение товара"
void on_main_prod_button_clicked();//испускание сигнала на кнопку "Выход в окно авторизации"
void on_tableView_clicked(const QModelIndex &index);//нажатие на ячейку таблицы
void on_cycle_admin_clicked();//испускание сигнала на изменение темы

private:
QModelIndex product_name;
};

#endif // WINADMIN_H
