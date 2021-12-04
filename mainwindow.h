#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QtSql>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

#include "authentification.h"
#include "reg_room.h"
#include "winadmin.h"
#include "add_prod.h"
#include "winseller.h"
#include "winstorekpr.h"
#include "edit_prod.h"
#include "ui_authentification.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();//вызов главного окна сменяется на вызов окна авторизации
    //булевые переменные для проверки на подключение к таблицам
    bool connectDB_USERS();
    bool connectDB_PROD();
    bool connectDB_SHOP();
    bool connectDB_ORDER();
    bool connectDB_preference();
    bool connectDB_history();
    bool connectDB_history_shop();

private:
    //Экземпляры окон:
    Ui::MainWindow *ui_Main;//окна mainwindow
    authentification *ui_auth;//окна авторизации
    reg_room *ui_reg;//и регистрации
    winadmin *ui_admin;//окна администратора
    add_prod *ui_prod;//окна добавления продуктов админом
    edit_prod *ui_edit;//окна изменения продуктов админом
    winseller *ui_sell;//окна продавца
    winstorekpr *ui_strkp;//окна продавщика


    //строки для получения данных о пользователе из БД
    QString m_username;//строка для обработки логина
    QString m_userpass;//и пароля
    QString m_prof;//профессия
    //строки для получения информации о новом продукте
    QString m_price;
    QString m_name;//название продукта
    QString m_articul;//артикул
    QString m_count;


    QString m_articul_entered;//строка для получения информации артикула товара, с которым пользователь хочет взаимодействовать

    //строки для получения инфы об изменении продуктов
    QString m_art_edit;
    QString m_name_edit;
    QString m_price_edit;
    QString m_count_edit;

    //shop
    QString m_shop_name;
    int m_shop_count;
    int new_order_count = 0;

    QSqlDatabase mw_db;//Экземпляр подключения к базе данных
    QSqlDatabase mw_dbProd;//Экземпляр подключения к базе данных товаров
    QSqlDatabase mw_dbShop;//Экземплряр подключения к базе данных товаров МАГАЗИНА
    QSqlDatabase mw_dbOrder;
    QSqlDatabase mw_dbPref;
    QSqlDatabase mw_dbHistory;

    QString db_input;// строка для отправки запроса к базе данных
    QString db_prod_input;//строка для отправки запроса к базе данных товаров
    QString db_shop_input;//строка для отправки запроса к базе данных товаров МАГАЗИНА
    QString db_order_input;//
    QString db_pref_input;
    QString db_history_input;
    QString db_prod_history_input;

    QSqlQueryModel *query_model = nullptr;//строка для взаимодействия между собой БД продуктов и таблицей админа
    QSqlQueryModel *query_model_shop = nullptr;//строка для взаимодействия между собой БД продуктов и таблицей админа
    QSqlQueryModel *query_model_order = nullptr;
    QSqlQueryModel *query_model_hstr = nullptr;
    QSqlQueryModel *query_model_hstr_shop = nullptr;


    int user_counter;//Счетчик пользователей
    int comboBox_int;
    bool m_loginSuccesfull;//успешный вход
private slots: //приватные методы

    void authorizeUser();//авторизация пользователя
    void registerWindowShow();//функция, которая скрывает окно авторизации и вызывает окно регистрации
    void registerUser();//регистрация пользователя
    void addProduction();//добавление продукции
    void delete_prod();//удаление продукции
    void open_edit_prod();//открыть окно изменения продукции
    void edit_prod_M();//изменение продукции
    void update_table();//обновление таблицы продуктов
    void update_tableShop();//обновление таблицы продуктов продавца
    void update_tableOrder();//обновление таблицы запроса для кладовщика
    void sell_product();//продажа продуктов
    void update_table_order_strkp();
    void all_products_ordered();
    void shop_order_aproved();
    void insert_history_table();
    void update_history_table();
    void update_history_shop();
    void changeDayNight();
    void setDayNight();
    void openDoc();
};
#endif // MAINWINDOW_H
