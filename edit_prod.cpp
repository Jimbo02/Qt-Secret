#include "edit_prod.h"
#include "ui_edit_prod.h"

edit_prod::edit_prod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_prod)
{
    ui->setupUi(this);
    this->setWindowTitle("Edit product");
}

edit_prod::~edit_prod()
{
    delete ui;
}

void edit_prod::on_Name_edit_prod_textEdited(const QString &arg1)
{
    editName = arg1;
}


void edit_prod::on_Art_edit_prod_textEdited(const QString &arg1)
{
    editArticul = arg1;
}

void edit_prod::on_price_edit_prod_textEdited(const QString &arg1)
{
    editPrice = arg1;
}

void edit_prod::on_lineEdit_textEdited(const QString &arg1)
{
   editCount = arg1;
}

QString edit_prod::get_edit_name()
{
return editName;
ui->Name_edit_prod->clear();
}
QString edit_prod::get_edit_articul()
{
return editArticul;
ui->Art_edit_prod->clear();
}
QString edit_prod::get_edit_price()
{
return editPrice;
ui->price_edit_prod->clear();
}
QString edit_prod::get_edit_count()
{
return editCount;
ui->lineEdit->clear();//lineEdit строка ввода количества(забыл изменить название объекта)
}

void edit_prod::on_edit_prod_button_clicked()
{
emit edit_prod_clicked();
}




