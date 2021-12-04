#ifndef WINSTOREKPR_H
#define WINSTOREKPR_H

#include <QWidget>

namespace Ui {
class winstorekpr;
}

class winstorekpr : public QWidget
{
    Q_OBJECT

public:
    explicit winstorekpr(QWidget *parent = nullptr);
     Ui::winstorekpr *ui;
    ~winstorekpr();

private slots:
     void on_order_button_clicked();//Испускание сигнала оформления заказа
     void on_cycle_strkp_clicked();//Испускание сигнала смены темы
     void on_exit_strkp_clicked();//Испускание сигнал выхода из программы

     void on_tabWidget_tabBarClicked(int index);

signals:
    void signal_order_aproved();//Сигнал оформления заказа
    void signal_cycle_strkp();//Сигнал смены темы
    void exit_strkp();//Сигнал выхода из программы
    void open_strkp();
private:

};

#endif // WINSTOREKPR_H
