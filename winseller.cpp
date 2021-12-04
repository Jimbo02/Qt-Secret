#include "winseller.h"
#include "ui_winseller.h"
#include <QMessageBox>
#include <QtSql/QtSql>
#include "QStandardItemModel"
#include <QSqlTableModel>

winseller::winseller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winseller)
{
    ui->setupUi(this);
    this->setWindowTitle("Seller");
    ui->shop_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//Выставление значения Stretch для того, чтобы столбцы расстянулись равномерно по всей таблице
    ui->order_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//Выставление значения Stretch для того, чтобы столбцы расстянулись равномерно по всей таблице
}

winseller::~winseller()
{
    delete ui;
}



void winseller::on_Sell_Button_clicked()
{
    emit sell_product_s();
}


void winseller::on_button_order_all_clicked()
{
        emit order_all_product_s();
}

int winseller::get_count_shop()
{
    return ui->spinBox_Shop->value();
}



void winseller::on_shop_table_clicked(const QModelIndex &index)//Метод нажатия на ячейку таблицы магазина
{
    const QAbstractItemModel *model_shop = index.model();

    value_art_shop_list = model_shop->data(model_shop->index(index.row(), 1)).toString();
    value_count_list = model_shop->data(model_shop->index(index.row(), 4)).toInt();
    max_value_count_list = model_shop->data(model_shop->index(index.row(), 3)).toInt();
    ui->spinBox_Shop->setRange(0,value_count_list);
    qDebug() << "value: " << value_art_shop_list;
}

void winseller::on_order_table_clicked(const QModelIndex &index)//Метод нажатия на ячейку таблицы заказов
{
        const QAbstractItemModel *model_order = index.model();

    value_art_order_list = model_order->data(model_order->index(index.row(), 1)).toString();
    value_order_list = model_order->data(model_order->index(index.row(), 3)).toInt();
     ui->spinBox_Order->setRange(0,value_order_list);
}

QString winseller::return_indexed_art_shop()
{
    return value_art_shop_list;
}
QString winseller::return_indexed_art_order()
{
    return value_art_order_list;
}

int winseller::return_count_shop()
{
    return value_count_list;
}
int winseller::return_max_count_shop()
{
    return max_value_count_list;
}
int winseller::return_max_count_order()
{
    return value_order_list;
}

void winseller::on_cycle_sell_clicked()
{
    emit signal_cycle_sell();
}




void winseller::on_Max_Order_Button_seller_clicked()//При нажатии на кнопку max
{
    QSqlQuery query_max_order(QSqlDatabase::database("ORDER"));
    QString str_seller_max = "UPDATE order_list SET curent_order = max_order";//текущее значение заказа становится равным максимальному
    if (!query_max_order.exec(str_seller_max))
    {
        qDebug() << "Unable to insert data" << query_max_order.lastError() << " : " << query_max_order.lastQuery();
    }

emit max_Button_order();

}


void winseller::on_setZero_Button_clicked()//При нажатии на кнопку очистить
{
    QSqlQuery query_zero_order(QSqlDatabase::database("ORDER"));
    QString str_seller_zero = "UPDATE order_list SET curent_order = 0";//текущее значение заказа становится равным 0
    if (!query_zero_order.exec(str_seller_zero))
    {
        qDebug() << "Unable to insert data" << query_zero_order.lastError() << " : " << query_zero_order.lastQuery();
    }
    emit zero_Button_order();

}




void winseller::on_spinBox_Order_valueChanged(int arg1)//при изменении значения в счётчике
{
    qDebug() << "Aboba";
    QSqlQuery query_cur_value(QSqlDatabase::database("ORDER"));
    QString str_curent_value = "UPDATE order_list SET curent_order = %1 WHERE articul = %2";//текущее значения заказа становится равным значению в этом счётчике
    QString db_cur_value = str_curent_value.arg(arg1)
                                           .arg(value_art_order_list);
    if(!query_cur_value.exec(db_cur_value))
    {
        qDebug() << query_cur_value.lastError() << query_cur_value.lastQuery();
        QMessageBox::warning(this, "Ошибка", "Выберите нужный товар из таблицы order");
    }
    emit change_cur_order_s();

}


void winseller::on_exit_sell_clicked()
{
    emit signal_exit_sell();
}

