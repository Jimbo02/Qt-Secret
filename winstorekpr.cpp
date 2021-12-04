#include "winstorekpr.h"
#include "ui_winstorekpr.h"
#include <QTabWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QTableWidget>

winstorekpr::winstorekpr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::winstorekpr)
{
  ui->setupUi(this);
  this->setWindowTitle("Storekeeper");
  ui->table_order_strkp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//Выставление значения Stretch для того, чтобы столбцы расстянулись равномерно по всей таблице
  ui->table_history->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//Выставление значения Stretch для того, чтобы столбцы расстянулись равномерно по всей таблице
}
winstorekpr::~winstorekpr()
{
    delete ui;

}

void winstorekpr::on_order_button_clicked()
{
    emit signal_order_aproved();
}


void winstorekpr::on_cycle_strkp_clicked()
{
    emit signal_cycle_strkp();
}


void winstorekpr::on_exit_strkp_clicked()
{
    emit exit_strkp();
}


void winstorekpr::on_tabWidget_tabBarClicked(int index)
{
    if (index == 2)
    {
           emit open_strkp();
    }
}

