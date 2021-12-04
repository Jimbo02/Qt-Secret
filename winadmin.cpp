#include "winadmin.h"
#include "ui_winadmin.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>

winadmin::winadmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winadmin)
{
    ui->setupUi(this);
    this->setWindowTitle("Administrator");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

winadmin::~winadmin()
{
    delete ui;
}

void winadmin::on_add_button_clicked()
{
    emit w_product_opened();
}


void winadmin::on_del_button_clicked()
{
    emit w_product_deleted();
}


void winadmin::on_edit_button_clicked()
{
    emit w_product_edited();

}


void winadmin::on_main_prod_button_clicked()
{
    emit admin_to_auth();
}



void winadmin::on_tableView_clicked(const QModelIndex &index)//метод нажатия на ячейку в таблице админа
{
    const QAbstractItemModel *model = index.model();

    value_winadmin = model->data(model->index(index.row(), 1)).toString();
    qDebug() << "value: " << value_winadmin;
}


QString winadmin::get_articul_table()
{
    return value_winadmin;
}




void winadmin::on_cycle_admin_clicked()
{
    emit signal_cycle_admin();
}

