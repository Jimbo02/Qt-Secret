#include "add_prod.h"
#include "ui_add_prod.h"
#include <QPushButton>
#include <QIntValidator>

add_prod::add_prod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_prod)
{
    ui->setupUi(this);

    ui->Art_prod->setValidator(new QIntValidator);//ограничение по количеству вводимых символов(артикул)
    ui->price_prod->setValidator(new QIntValidator);//ограничение по количеству вводимых символов(цена)
    this->setWindowTitle("Production");//название окна
}

add_prod::~add_prod()
{
    delete ui;
}


void add_prod::on_add_prod_button_clicked()
{
        emit add_product_clicked();
}

void add_prod::on_Name_prod_textEdited(const QString &arg1)
{
    add_prod::product = arg1;
}

void add_prod::on_Art_prod_textEdited(const QString &arg1)
{
    add_prod::articul = arg1;
}

void add_prod::on_price_prod_textEdited(const QString &arg1)
{
    add_prod::price = arg1;
}


void add_prod::on_Count_prod_textEdited(const QString &arg1)
{
    add_prod::count = arg1;
}


QString add_prod::get_name()
{
    return product;
    ui->Name_prod->clear();
}

QString add_prod::get_articul()
{
    return articul;
    ui->Art_prod->clear();
}

QString add_prod::get_price()
{
    return price;
    ui->price_prod->clear();
}

QString add_prod::get_count()
{
    return count;
    ui->Count_prod->clear();
}





