//библиотеки
#include <qrsaencryption.h>
#include <QDebug>//отображение сообщений программы в окне QtCreator, вместо консоли
#include <QtSql/QtSql>//работа с sql
#include <QSqlTableModel>//библиотека для связи таблиц внутри окон и баз данных SQL
#include <QMessageBox>//вывод всплывающих окон с ифнормацией или предупреждением
#include <QTime>//получение текущего времени (для таблицы с историей заказов)
#include <QDate>//получение текущей даты для таблицы с историей заказов)
#include <QStyle>//работа с визуальной частью программы
#include <QStyleFactory>//добавление стилей окон(например закругление кнопок)
#include <QImage>//использование изображений внутри корневой папки проекта в качестве иконок
#include <QDesktopServices>//открытие файлов


/*подключение библиотек дочерних классов для обращения к ним и их методам,
 * а также ui для обращения к окну и его объектам
 */
#include "mainwindow.h"// класс главное окно
#include "ui_mainwindow.h"//графический интерфейс главного окна
#include "authentification.h"//класс входа
#include "reg_room.h"//класс регистрации
#include "ui_reg_room.h"//графический интерфейс окна регистрации
#include "winadmin.h"//класс админа
#include "ui_winadmin.h"//графический интерфейс окна админа
#include "winseller.h"//класс продавца
#include "ui_winseller.h"//графический интерфейс окна продавца
#include "winstorekpr.h"//класс кладовщика
#include "ui_winstorekpr.h"//графический интефейс окна кладовщика
#include "add_prod.h"//класс добавления товаров
#include "ui_add_prod.h"//графический интерфейс добавления товаров
#include "edit_prod.h"//класс изменения товаров
#include "ui_edit_prod.h"//графический интерфейс изменения товаров

MainWindow::MainWindow(QWidget *parent)://конструктор класса MainWindow. Аргумент parent нужен для задания родителя виджета. По дефолту он равен 0, то есть родителя нет
      QMainWindow(parent),//вызов стандартного конструктора QMainWindow с аргументом в качестве родителя
      ui_Main(new Ui::MainWindow)//создание объекта класса интерфейса
{
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    user_counter = 0;
    m_loginSuccesfull = false;

    //Создание экземпляров окна
    ui_auth = new authentification;
    ui_reg = new reg_room;
    ui_admin = new winadmin;
    ui_sell = new winseller;
    ui_strkp = new winstorekpr;
    ui_prod = new add_prod;
    ui_edit = new edit_prod;

//список соединений
    //коннекты в окне аутентификации
    connect(ui_auth, &authentification::login_button_clicked, this, &MainWindow::authorizeUser);//при нажатии на кнопку входа выполняется метод авторизации
    connect(ui_auth, &authentification::register_button_clicked, this, &MainWindow::registerWindowShow);//при нажатии на кнопку регистрации вызывается метод открытия окна регистрации
    connect(ui_auth, &authentification::signal_change_cycle, this, &MainWindow::changeDayNight);//при нажатии на кнопку смены цветового режима изменяется переменная для определения выбора пользователя
    connect(ui_auth, &authentification::signal_change_cycle, this, &MainWindow::setDayNight);//и сразу же происходит смена цвета при помощи переменной полученной в прошлом методе
    connect(ui_auth, &authentification::signal_question, this, &MainWindow::openDoc);//при нажатии на кнопку открывается мануал

    //коннекты в окне регистрации
    connect(ui_reg, &reg_room::register_button_clicked2, this, &MainWindow::registerUser);//при нажатии на кнопку зарегестрироваться вызывается метод регистрации
    connect(ui_reg, &reg_room::destroyed, ui_auth, &authentification::show);//при выходе из окна открывается окно входа
    connect(ui_reg, &reg_room::signal_cycle_reg, this, &MainWindow::changeDayNight);//при нажатии на кнопку смены цветового режима изменяется переменная для определения выбора пользователя
    connect(ui_reg, &reg_room::signal_cycle_reg, this,&MainWindow::setDayNight);//и сразу же происходит смена цвета при помощи переменной полученной в прошлом методе

    //коннекты в окне админа
    connect(ui_admin, &winadmin::w_product_opened, ui_prod, &add_prod::show);//при нажатии на кнопку добавления товара открывается окно добавления товара
    connect(ui_admin, &winadmin::w_product_deleted, this, &MainWindow::delete_prod);//при нажатии на кнопку удаления товара вызывается метод удаления товара
    connect(ui_admin, &winadmin::w_product_deleted, this, &MainWindow::update_table);//при нажатии на кнопку удаления товара вызывается метод обновления содержимого таблицы админа
    connect(ui_admin, &winadmin::w_product_edited, this, &MainWindow::open_edit_prod);//при нажатии на кнопку изменения товара вызывается метод открытия окна изменения
    connect(ui_admin, &winadmin::admin_to_auth, ui_admin, &winadmin::close);//при нажатии на кнопку выход происходит окно админа закрывается
    connect(ui_admin, &winadmin::admin_to_auth, ui_auth, &authentification::show);//и открывается окно входа
    connect(ui_admin, &winadmin::signal_cycle_admin, this, &MainWindow::changeDayNight);//при нажатии на кнопку смены цветового режима изменяется переменная для определения выбора пользователя
    connect(ui_admin, &winadmin::signal_cycle_admin, this, &MainWindow::setDayNight);//и сразу же происходит смена цвета при помощи переменной полученной в прошлом методе

    //коннекты в окне добавления товара
    connect(ui_prod, &add_prod::add_product_clicked, this, &MainWindow::addProduction);//при нажатии на кнопку добавления товара вызывается метод добавления товара
    connect(ui_prod, &add_prod::add_product_clicked, this, &MainWindow::update_table);//при нажатии на кнопку добавления товара вызывается метод обновления содержимого таблицы админа

    //коннекты в окне изменения товара
    connect(ui_edit, &edit_prod::edit_prod_clicked, this, &MainWindow::edit_prod_M);//при нажатии на кнопку изменения товара вызывается метод изменения товара
    connect(ui_edit, &edit_prod::edit_prod_clicked, this, &MainWindow::update_table);//при нажатии на кнопку изменения товара вызывается метод обновления содержимого таблицы админа

    //коннекты в окне продавца
    connect(ui_sell, &winseller::sell_product_s, this, &MainWindow::sell_product);//при нажатии на кнопку продажи товара вызывается метод продажи товара
    connect(ui_sell, &winseller::sell_product_s, this, &MainWindow::update_tableShop);//при нажатии на кнопку продажи товара вызывается метод обновления содержимого таблицы магазина
    connect(ui_sell, &winseller::sell_product_s, this, &MainWindow::update_tableOrder);//при нажатии на кнопку продажи товара вызывается метод обновления содержимого таблицы заказов для кладовщика
    connect(ui_sell, &winseller::zero_Button_order, this, &MainWindow::update_tableOrder);//при нажатии на кнопку очистить вызывается метод обновления содержимого таблицы заказов для кладовщика
    connect(ui_sell, &winseller::max_Button_order, this, &MainWindow::update_tableOrder);//при нажатии на кнопку Max вызывается метод обновления содержимого таблицы заказов для кладовщика
    connect(ui_sell, &winseller::change_cur_order_s, this, &MainWindow::update_tableOrder);//при изменении текущего числа заказа так же обновляется содержимое таблицы заказов для кладовщика
    connect(ui_sell, &winseller::order_all_product_s, this, &MainWindow::all_products_ordered);//при нажатии на кнопку заказа товаров у кладовщика вызывается метод заказа
    connect(ui_sell, &winseller::signal_exit_sell, ui_sell, &winseller::close);//при нажатии на кнопку выход происходит окно продавца закрывается
    connect(ui_sell, &winseller::signal_exit_sell, ui_auth, &authentification::show);//и открывается окно входа
    connect(ui_sell, &winseller::signal_cycle_sell, this, &MainWindow::changeDayNight);//при нажатии на кнопку смены цветового режима изменяется переменная для определения выбора пользователя
    connect(ui_sell, &winseller::signal_cycle_sell, this, &MainWindow::setDayNight);//и сразу же происходит смена цвета при помощи переменной полученной в прошлом методе

    //коннекты в окне кладовщика
    connect(ui_strkp, &winstorekpr::signal_order_aproved, this, &MainWindow::insert_history_table);//при нажатии на кнопку принять заказ вызывается метод добавления записей в таблицу истории заказов
    connect(ui_strkp, &winstorekpr::signal_order_aproved, this, &MainWindow::update_history_table);//при нажатии на кнопку принять заказ вызывается метод обновления содержимого таблицы истории заказов
    connect(ui_strkp, &winstorekpr::signal_order_aproved, this, &MainWindow::shop_order_aproved);//при нажатии на кнопку принять заказ вызывается метод изменения количества продуктов в таблицах
    connect(ui_strkp, &winstorekpr::signal_order_aproved, this, &MainWindow::update_table_order_strkp);//при нажатии на кнопку принять заказ вызыавется метод обновления таблицы заказов в окнн кладовщика
    connect(ui_strkp, &winstorekpr::open_strkp, this, &MainWindow::update_history_shop);
    connect(ui_strkp, &winstorekpr::exit_strkp, ui_strkp, &winstorekpr::close);//при нажатии на кнопку выход происходит окно кладовщика закрывается
    connect(ui_strkp, &winstorekpr::exit_strkp, ui_auth, &authentification::show);//и открывается окно входа
    connect(ui_strkp, &winstorekpr::signal_cycle_strkp, this, &MainWindow::changeDayNight);//при нажатии на кнопку смены цветового режима изменяется переменная для определения выбора пользователя
    connect(ui_strkp, &winstorekpr::signal_cycle_strkp, this, &MainWindow::setDayNight);//и сразу же происходит смена цвета при помощи переменной полученной в прошлом методе

    //проверки на подключение к БД
    if(!connectDB_USERS())
    {
        qDebug() << "Failed to connect DB";
    }
    if(!connectDB_PROD())
    {
        qDebug() << "Failed to connect DB_PROD";
    }
    if(!connectDB_SHOP())
    {
        qDebug() << "Failed to connect DB_SHOP";
    }
    if(!connectDB_ORDER())
    {
        qDebug() << "Failed to connect DB_ORDER";
    }
    if(!connectDB_preference())
    {
        qDebug() << "Failed to connect DB_preference";
    }
    if(!connectDB_history())
    {
        qDebug() << "Failed to connect DB_history";
    }
    if(!connectDB_history_shop())
    {
        qDebug() << "Failed to connect DB_history_shop";
    }

    //Создание таблиц USERS, PRODUCT, SHOP, ORDER, PREF, HISTORY
{
    QSqlQuery query(QSqlDatabase::database("USERS"));

    db_input = "CREATE TABLE userlist ( "//Создание БД Пользователей
               "number INTEGER PRIMARY KEY,"
               "name VARCHAR(20), "
               "pass VARCHAR(12), "
               "xpos INTEGER, "
               "ypos INTEGER, "
               "prof VARCHAR(20))";
    if (!query.exec(db_input))

    {
        qDebug() << "Unable to create a user table" << query.lastError();
    }
}
    {
    QSqlQuery query_prod(QSqlDatabase::database("PRODUCT"));
    {
    db_prod_input = "CREATE TABLE products_list ( "// Создание БД товаров
                        "product VARCHAR(30), "
                        "articul VARCHAR(30) PRIMARY KEY, "
                        "price FLOAT, "
                        "max_count INTEGER)";
            if (!query_prod.exec(db_prod_input))
            {
                qDebug() << "Unable to create a product table" << query_prod.lastError();
            }
    }

    QSqlQuery query_shop(QSqlDatabase::database("SHOP"));
    {
        db_shop_input = "CREATE TABLE shop_list ( "//Создание БД товаров магазина
                        "product VARCHAR(30), "
                        "articul VARCHAR(30) PRIMARY KEY, "
                        "price FLOAT, "
                        "max_count INTEGER,"
                        "count INTEGER )";
        if(!query_shop.exec(db_shop_input))
        {
            qDebug() << "Unable to create shop table" << query_shop.lastError();
        }
    }

    QSqlQuery query_order(QSqlDatabase::database("ORDER"));
    {
        db_order_input = "CREATE TABLE order_list ( "//Создание БД заказов кладовщику
                         "product VARCHAR(30), "
                         "articul VARCHAR(30) PRIMARY KEY, "
                         "price FLOAT,"
                         "max_order INTEGER,"
                         "curent_order INTEGER)";
        if (!query_order.exec(db_order_input))
        {
            qDebug() << "Unable to create order table " << query_order.lastError();
        }
    }
    QSqlQuery query_pref(QSqlDatabase::database("PREF"));
    {
        db_pref_input = "CREATE TABLE preference ( "//Создание
                        "ordered BOOL PRIMARY KEY,"
                        "cycle BOOL)";
        if (!query_pref.exec(db_pref_input))
            {
            qDebug() << "Unable to INSERT ZERO pref table " << query_pref.lastError();
            }
    }

    QSqlQuery query_history(QSqlDatabase::database("HISTORY"));
    {
        db_history_input = "CREATE TABLE history_list ( "
                           "product VARCHAR(30), "
                           "articul VARCHAR(6), "
                           "data VARCHAR(12), "
                           "time VARCHAR(12), "
                           "price FLOAT, "
                           "count INTEGER)";
        if (!query_history.exec(db_history_input))
            {
            qDebug() << "Unable to create history table " << query_history.lastError();
            }
    }
    QSqlQuery query_history_shop(QSqlDatabase::database("HISTORY_SHOP"));
    {
        db_prod_history_input = "CREATE TABLE history_shop ( "
                           "product VARCHAR(30), "
                           "articul VARCHAR(6), "
                           "data VARCHAR(12), "
                           "time VARCHAR(12), "
                           "price FLOAT, "
                           "count INTEGER)";
        if (!query_history_shop.exec(db_prod_history_input))
            {
            qDebug() << "Unable to create shop history table " << query_history.lastError();
            }
    }
    ui_Main->setupUi(this);
}
}
//ФУНКЦИИ ДЛЯ РАБОТЫ С БД ПОЛЬЗОВАТЕЛЯ (ВХОД, РЕГИСТРАЦИЯ)
struct User
{
    QString username;
    QString userpass;
    QString prof;
};
struct Product
{
    QString name;
    QString articul;
    QString price;
    int count;
};
void MainWindow::authorizeUser()//функция входа
{
    m_username = ui_auth->getLogin();
    m_userpass = ui_auth->getPass();

    QString str_t = " SELECT * "
                    " FROM userlist "
                    " WHERE name = '%1'";

    //int db_number = 0;
    User auth_user{"","",""};

    db_input = str_t.arg(m_username);

    QSqlQuery query(QSqlDatabase::database("USERS"));
    QSqlRecord rec;

    if (!query.exec(db_input))
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
    }
    rec = query.record();
    query.next();
    user_counter = query.value(rec.indexOf("number")).toInt();
    auth_user.username = query.value(rec.indexOf("name")).toString();
    auth_user.userpass = query.value(rec.indexOf("pass")).toString();
    auth_user.prof = query.value(rec.indexOf("prof")).toString();

    if (m_username != auth_user.username || m_userpass != auth_user.userpass)//в случае неправильного логина/пароля выводится сообщение
    {
        qDebug() << "Password dismatch" << auth_user.username << " " << auth_user.userpass;
        m_loginSuccesfull = false;
        QMessageBox::warning(this, "Ошибка", "Нет такого пользователя или пароль неверен");
    }
    else//в случае успешного входа запрашиваются параметры окна из БД, которые будут использоваться
    {
        m_loginSuccesfull = true;
        ui_auth->ui->Line_Name->clear();//очистка поля ввода логина
        ui_auth->ui->Line_Password->clear();//очистка поля ввода пароля
        ui_auth->close();//закрытие окна аунтефикации
        ui_reg->close();//и регистрации

//если у юзера профессия:
        if (auth_user.prof == "administrator")//админа, то открывается окно админа и апдейтится содержимое таблицы
        {
            ui_admin->show();
            update_table();
        }
        else if (auth_user.prof == "seller" )//продавца, то открывается окно продавца и апдейтятся содержимое таблицы склада магазина и заказа к кладовщику
        {
            ui_sell->show();
            update_tableShop();
            update_tableOrder();

        }
        else if (auth_user.prof == "storekpr")//кладовщика, то открывается окно кладовщика
        {
            ui_strkp->show();
            bool table_ordered = 0;//затем инициализируется булевая переменная table_ordered = 0, она нужна для проверки на то, есть ли заказы или нет. Если она равна 0, то программа считает, что заказов нет
            QSqlQuery query_strkp_table(QSqlDatabase::database("PREF"));//создается объект для выполнения запроса в БД с именем подключения PREF класса QSqlQuery
            QString  str_t_ordered = "SELECT ordered FROM preference ";//составляем запрос в БД с помощью синтаксиса SQL
            QSqlRecord rec_ordered;//Создаем объект класса QSqlRecord
            /*Проверка на выполнение запроса с помощью метода .exec
             * Если запрос не выполняется, то в вывод приложения с помощью qDebug выводится ошибка и последний запрос
             * Если выполняется, то компилятор считывает код дальше*/
            if(!query_strkp_table.exec(str_t_ordered))
            {
                qDebug() << "Unable to execute query - exiting " << query_strkp_table.lastError() << query_strkp_table.lastQuery();
            }
            rec_ordered = query_strkp_table.record();//объект записи rec_odered принадлежит объекту qyert_strkp_table класса QSqlQuery
            query_strkp_table.next();//вызывается метод для продвижения между ячейками для поиска значения
            table_ordered = query_strkp_table.value(rec_ordered.indexOf("ordered")).toBool();/*считывается ячейка ordered базы данных preference и значение переопределяют в булевую форму,
                                                                                              *для того, чтобы придать его переменной table_ordered*/
            if(table_ordered == 1)//если заказ есть, то есть переменная равна 0
            {
            update_table_order_strkp();//то обновлеяем содержимое таблицы заказов
            }
            else//если 0, то ничего не происходит
            {
            }
            update_history_table();//обновление таблицы истории происходит в любом случае
        }
    }
}
void MainWindow::registerWindowShow()//функция, которая скрывает окно авторизации и вызывает окно регистрации
{
    ui_auth->hide();
    ui_reg->show();
}
void MainWindow::registerUser()//функция регистрации
{
    QString comp_name = "";//инициализируем строку для работы с логином
    m_username = ui_reg->getNameUser();//присваиваем значения для логина, получая его из виджета окна авторизации
    m_userpass = ui_reg->getPassUser();//присваиваем значения для пароля, получая его из виджета окна авторизации
    QSqlQuery query_check_name(QSqlDatabase::database("USERS"));//создаем объект для выполнения запроса в БД с именем подключения USERS класса QSqlQuery
    QSqlRecord rec_check_name;//Создаем объект класса QSqlRecord
    QString str_t_check_name = "SELECT name FROM userlist WHERE name = '%1'";//строка для запроса query_check_name
    QString db_input = str_t_check_name .arg(m_username);//составление запроса, в котором аргумент %1 будет равен m_username
    if(!query_check_name.exec(db_input))//если не выполняется запрос, то
    {
        qDebug() << "Cannot execute str_t_check_name " << query_check_name.lastError() << query_check_name.lastQuery();
    }
    //если выполняется проходим дальше
    while(query_check_name.next())//цикл для поиска в БД такого же значения, как и в m_username. Если такого нет, то comp_name останется неизменным. (Проверка на совпадение имени пользователя)
    {
    rec_check_name = query_check_name.record();
    comp_name = rec_check_name.value(rec_check_name.indexOf("name")).toString();
        qDebug() << comp_name << query_check_name.lastError() << query_check_name.lastQuery() << rec_check_name;
    }
    if(comp_name == "")//Если comp_name останется неизменным
    {
        if (ui_reg->checkPass())//вызывается метод, в котором происходит сравнение пароля и подтверждения и длины пароля
        {
        QSqlQuery query(QSqlDatabase::database("USERS"));//создаем объект для выполнения запроса в БД с именем подключения USERS класса QSqlQuery
        QSqlRecord rec;//Создаем объект класса QSqlRecord
        QString str_t = "SELECT COUNT(*) "
                        "FROM userlist";//строка для запроса query на количество строк в таблице userlist
        db_input = str_t;
        if(!query.exec(db_input))//Если номер не удалось найти
        {
            qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
            return;
        }
        //Если найден, то продолжаем
        else//проверяется БД и на основе первого столбца узнаётся номер последнего аккаунта
        {
            query.next();//вызывается метод для продвижения между ячейками для поиска значения
            rec = query.record();//объект записи rec принадлежит объекту query класса QSqlQuery
            user_counter = rec.value(0).toInt();

        }

        m_prof = ui_reg->checkProf();//получаем профессию из чекбокса
        user_counter++;//увеличиваем найденную переменную user_counter на 1


        QByteArray crypt_pass, crypt_depass; // Создаем переменные под наши ключи.
        QRSAEncryption coder;     // Создаем переменную нашего шифровальщика
        coder.generatePairKey(crypt_pass, crypt_depass, QRSAEncryption::Rsa::RSA_128);
        QByteArray array_pass;
        array_pass = m_userpass.toUtf8();
        auto encodePass = coder.encode(array_pass, crypt_pass);

        str_t = "INSERT INTO userlist(number, name, pass, xpos, ypos, prof)"
                "VALUES(%1, '%2', '%3', '%4', '%5', '%6');";//запрос на добавление данных в userlist
        db_input = str_t .arg(user_counter)//вставляем все данные для добавления, которые мы получили раннее
                         .arg(m_username)
                         .arg(m_userpass)
                         .arg(0)
                         .arg(0)
                         .arg(m_prof);


        if (!query.exec(db_input))//если не удалось добавить
        {
            qDebug() << "Unable to insert data" << query.lastError() << " : " << query.lastQuery();
        }
        else//если удалось
        {
            ui_reg->hide();//скрываем окно регистрации
            QMessageBox::information(this, "Новый пользователь", "Новый пользователь '"+m_username+"' успешно создан");//выводим сообщение
            ui_auth->show();//показываем окно авторизации
        }
    }
    else//если пароли не совпадают
    {
        qDebug() << "Confirm password correctly";
        QMessageBox::warning(this, "Ошибка", "Ваши пароли не совпадают, либо длина пароля меньше 8 символов");
    }
    }
    else//если comp_name не равен "", то есть найдено совпадение с именем пользователя в БД
    {
        QMessageBox::warning(this, "Ошибка", "Такое имя пользователя уже существует");
    }
}
void MainWindow::display()//вызов главного окна сменяется на вызов окна авторизации
{
    ui_auth->show();
    setDayNight();
}

//методы обновления таблиц
void MainWindow::update_table()//обновление таблицы товаров(все остальные методы используют этот метод, поэтому я опишу только первое обновление)
{
        QSqlDatabase mw_dbProd = QSqlDatabase::database("PRODUCT");// объект БД с подключение PRODUCT класса mw_dbProd
            if (!mw_dbProd.open())//если запрос объекта на открытие не выполняется
            {
                qDebug() <<  mw_dbProd.lastError();//вывод последней ошибки
            }
            else
            {
                QSqlQueryModel *query_model = new QSqlQueryModel;//создаётся объект query_model в куче
                query_model->QSqlQueryModel::setQuery(QString("SELECT * FROM products_list"), QSqlDatabase::database("PRODUCT"));//к объекту query_model БД подключения PRODUCT присваивается запрос  о выборке каждой ячейки из products_list
                ui_admin->ui->tableView->setModel(query_model);//в таблицу tableView окна winadmin присваиваются все значения из products_list
            }
            delete query_model;//очистка памяти
}
void MainWindow::update_tableShop()//обновление таблицы склада магазина
{
    QSqlDatabase mw_dbShop = QSqlDatabase::database("SHOP");
    if (!mw_dbShop.open())
    {
        qDebug() << mw_dbShop.lastError();
    }
    else
    {
        QSqlQueryModel *query_model_shop = new QSqlQueryModel;
        query_model_shop->QSqlQueryModel::setQuery(QString("SELECT * FROM shop_list"), QSqlDatabase::database("SHOP"));
        ui_sell->ui->shop_table->setModel(query_model_shop);
    }
    delete query_model_shop;
}
void MainWindow::update_tableOrder()//обновление таблицы заказа для кладовщика
{
    QSqlDatabase mw_dbOrder = QSqlDatabase::database("ORDER");
    if (!mw_dbOrder.open())
    {
        qDebug() << mw_dbOrder.lastError();
    }
    else
    {
        QSqlQueryModel *query_model_order = new QSqlQueryModel;
        query_model_order->QSqlQueryModel::setQuery(QString("SELECT * FROM order_list"), QSqlDatabase::database("ORDER"));
        ui_sell->ui->order_table->setModel(query_model_order);
        ui_strkp->ui->table_order_strkp->setModel(query_model_order);
    }
}
void MainWindow::update_table_order_strkp()
{
    QSqlDatabase mw_dbOrder = QSqlDatabase::database("ORDER");
    if (!mw_dbOrder.open())
    {
        qDebug() << mw_dbOrder.lastError();
    }
    else
    {
        QSqlQueryModel *query_model_order = new QSqlQueryModel;
        query_model_order->QSqlQueryModel::setQuery(QString("SELECT * FROM order_list"), QSqlDatabase::database("ORDER"));
        ui_strkp->ui->table_order_strkp->setModel(query_model_order);
    }
    delete query_model_shop;
}
void MainWindow::update_history_table()
{
    QSqlDatabase mw_dbHistory = QSqlDatabase::database("HISTORY");
    if (!mw_dbHistory.open())
    {
        qDebug() << mw_dbHistory.lastError();
    }
    else
    {
        QSqlQueryModel *query_model_hstr = new QSqlQueryModel;
        query_model_hstr->QSqlQueryModel::setQuery(QString("SELECT * FROM history_list"), QSqlDatabase::database("HISTORY"));
        ui_strkp->ui->table_history->setModel(query_model_hstr);
}
    delete query_model_hstr;
}
void MainWindow::update_history_shop()
{
    qDebug() << "ABOBA";
    QSqlDatabase mw_dbHistory_shop = QSqlDatabase::database("HISTORY_SHOP");
    if (!mw_dbHistory_shop.open())
    {
        qDebug() << mw_dbHistory_shop.lastError();
    }
    else
    {
        QSqlQueryModel *query_model_hstr_shop = new QSqlQueryModel;
        query_model_hstr_shop->QSqlQueryModel::setQuery(QString("SELECT * FROM history_shop"), QSqlDatabase::database("HISTORY_SHOP"));
        ui_strkp->ui->tableView->setModel(query_model_hstr_shop);
    }
}

//функции работы с товаром(добавление, изменение, удаление)
//добавление товара
void MainWindow::addProduction()
{
    //присваивание переменным значений из дочернего окна add_prod; объявление происходит в заголовочном файле mainwindow.h
    Product prod{ui_prod->get_name(),ui_prod->get_articul(),ui_prod->get_price(),ui_prod->get_count().toInt()};

    QSqlQuery query_prod(QSqlDatabase::database("PRODUCT"));//создание объекта для запроса в БД подключения PRODUCT
    QString str_tp = "INSERT or REPLACE INTO products_list(product,articul,price,max_count)"
                     "VALUES('%1','%2', %3, %4);";//строка запроса
    db_prod_input = str_tp .arg(prod.name, prod.articul, prod.price).arg(prod.count);//добавление аргументов к запросу
    if (!query_prod.exec(db_prod_input))//если запрос не удалось выполнить
    {
        qDebug() << "Unable to insert data" << query_prod.lastError() << " : " << query_prod.lastQuery();
    }

    QSqlQuery query_shop(QSqlDatabase::database("SHOP"));//создание объекта для запроса в БД подключения SHOP
    QString str_s = "INSERT or REPLACE INTO shop_list(product, articul, price, max_count, count)"
                    "VALUES ('%1', '%2','%3',%4,%5)";//строка запроса
    db_shop_input = str_s .arg(prod.name, prod.articul, prod.price)
                          .arg(prod.count, prod.count);//добавление аргументов к запросу
    if(!query_shop.exec(db_shop_input))//если запрос не удалось выполнить
       {
           qDebug() << "Unable to insert data" << query_shop.lastError() << " : " << query_shop.lastQuery();
       }
    QSqlQuery query_order(QSqlDatabase::database("ORDER"));//создание объекта для запроса в БД подключения ORDER
    QString str_s_order = "INSERT or REPLACE INTO order_list(product, articul, price, max_order, curent_order)"
                    "VALUES ('%1', '%2',%3,%4,%5)";//строка запроса
   QString db_order_input = str_s_order .arg(m_name, m_articul, m_price)//добавление аргументов к запросу
                          .arg(0)
                          .arg(0);
    if(!query_order.exec(db_order_input))//если запрос не удалось выполнить
       {
           qDebug() << "Unable to insert data" << query_order.lastError() << " : " << query_order.lastQuery();
       }

}
//удаление товара
void MainWindow::delete_prod()
{
    QString db_articul = " ";//инициализируем строку для работы с артикулом
    m_articul_entered = ui_admin->get_articul_table();//присваиваем переменной значение полученное из ячейки articul в таблице администратора
    QString str_t_prod = " SELECT articul FROM products_list WHERE articul = "+m_articul_entered+"";//запрос на получение артикула, который равен m_articul_entered

    db_prod_input = str_t_prod.arg(m_articul_entered);//добавление аргумента к запросу

    QSqlQuery query_prod(QSqlDatabase::database("PRODUCT"));//создание объекта для запроса в БД подключения PRODUCT
    QSqlRecord rec_prod;//Создаем объект класса QSqlRecord

    if (!query_prod.exec(db_prod_input))//если запрос не удалось выполнить
    {
        qDebug() << "Unable to execute query - exiting" << query_prod.lastError() << " : " << query_prod.lastQuery() << m_articul_entered << db_articul;
    }

    rec_prod = query_prod.record();//объект записи rec_odered принадлежит объекту query_strkp_table класса QSqlQuery
    query_prod.next();//вызывается метод для продвижения между ячейками для поиска значения
    db_articul = query_prod.value(rec_prod.indexOf("articul")).toString();

    if (m_articul_entered != db_articul)//если выбранный артикул каким-то образом не совпадает ни с одним с артикулом из БД
    {
        qDebug() << "Unable to execute query - exiting" << query_prod.lastError() << " : " << query_prod.lastQuery();
        QMessageBox msg_box;
        msg_box.setText("Удаление не произвелось: проверьте введённые данные");
        msg_box.exec();//вывод сообщения
    }
    else//если всё успешно
    {
        QMessageBox::critical(this, tr("Delete"), tr("Deleted"));//вывод окна, подтверждающее удаление


        QSqlQuery query_prod_del(QSqlDatabase::database("PRODUCT"));
        query_prod_del.exec(" DELETE FROM products_list "
                            " WHERE articul = '"+m_articul_entered+"'");//реализация запроса удаления строки из products_list, где она равна m_articul_entered
        QSqlQuery query_shop_del(QSqlDatabase::database("SHOP"));
        query_shop_del.exec(" DELETE FROM shop_list "
                            " WHERE articul = '"+m_articul_entered+"'");//реализация запроса удаления строки из shop_list, где она равна m_articul_entered
        QSqlQuery query_shop_order(QSqlDatabase::database("ORDER"));
        query_shop_order.exec(" DELETE FROM order_list "
                            " WHERE articul = '"+m_articul_entered+"'");//реализация запроса удаления строки из order_list, где она равна m_articul_entered
    }
}
void MainWindow::open_edit_prod()//открытие окна изменения товара
{
    QString db_articul = " ";//инициализируем строку для работы с артикулом
    QString db_name;//объявляем строку для получения значение названия товара из БД
    m_articul_entered = ui_admin->get_articul_table();//присваиваем переменной значение полученное из таблицы админа
    QString str_t_prod = " SELECT articul, product "
                         " FROM products_list "
                         " WHERE articul = '%1'";//запрос в котором происходит выборка элементов строки, в которой есть совпадение артикула БД с артикулом, полученным из таблицы

    db_prod_input = str_t_prod.arg(m_articul_entered);//к запросу добавляется аргумент, равный выбранному артикулу из таблицы

    QSqlQuery query_prod(QSqlDatabase::database("PRODUCT"));
    QSqlRecord rec_prod;

    if (!query_prod.exec(db_prod_input))
    {
        qDebug() << "Unable to execute query - exiting" << query_prod.lastError() << " : " << query_prod.lastQuery() << m_articul_entered << db_articul;
    }
    rec_prod = query_prod.record();
    query_prod.next();//вызывается метод для продвижения между ячейками для поиска значения
    db_articul = query_prod.value(rec_prod.indexOf("articul")).toString();
    db_name = query_prod.value(rec_prod.indexOf("product")).toString();
    if (m_articul_entered != db_articul || db_articul == " ")//если полученный артикул и артикул таблицы не совпадают или не удалось найти арткул в таблице выводится сообщение об ошибке
    {
        qDebug() << "Unable to execute query - exiting" << query_prod.lastError() << " : " << query_prod.lastQuery();
        QMessageBox msg_box;
        msg_box.setText("Окно редактирования не открылось: проверьте введённые данные");
        msg_box.exec();
    }
    else//в ином случае выводится сообщение с названием и артикулом выбранного товара
    {
        QMessageBox::information(this, "Товар '"+db_name+"'", "Вы выбрали товар '"+db_name+"' ('"+db_articul+"')");
        ui_edit->show();
    }
}

//функции для работы с окном продавца
//продажа товара
void MainWindow::sell_product()
{
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    QString cd_str = cd.toString();
    QString ct_str = ct.toString();

    Product shop{"",//инициализация строки со значением полученным из выбранной  ячейки таблицы SHOP(артикул)
                 ui_sell->return_indexed_art_shop(),//инициализации int переменной со значением полученным из строки ввода числа продажи
                 "",
                 ui_sell->get_count_shop()};//инициализации int переменной
    QString shop_count = QString::number(shop.count);//инициализации копии shop.count только в качестве строки
    qDebug() << shop.count << shop_count;
    Product order;
    QSqlDatabase mw_dbSell = QSqlDatabase::database("SHOP");//объект таблицы с именем подключения SHOP
if (!mw_dbSell.open())//если таблица не открывается
    {
        qDebug() << mw_dbSell.lastError();
    }
else
    {
    QSqlQuery query_sell(QSqlDatabase::database("SHOP"));//объект таблицы с именем подключения SHOP
    query_sell.exec("UPDATE shop_list SET count = count - "+shop_count+" WHERE articul = '"+shop.articul+"' ");/*выполнение запроса в котором из ячейки count которая находится в строке,
                                                                                                              *где находится артикул выбранной ячейки таблицы shop_list вычитается введенное число
                                                                                                              */
    QSqlQuery query_name_price(QSqlDatabase::database("SHOP"));//новый объект таблицы с именем подключения SHOP
    query_name_price.exec("SELECT product, price FROM shop_list WHERE articul = '"+shop.articul+"'");/*выполнение запроса в котором выбираются название товара и цена в той строке,
                                                                                                    *где находится артикул выбранной ячейки таблицы shop_list вычитается введенное число
                                                                                                    */
    QSqlRecord record_name_price;

    record_name_price = query_name_price.record();
    while(query_name_price.next())//цикл для продвижения ячеек при поиске product и price, которые приндлежат к той же строчке, что и articul
    {
    order.name = query_name_price.value(record_name_price.indexOf("product")).toString();
    order.price = query_name_price.value(record_name_price.indexOf("price")).toString();
    }
    QSqlQuery query_select(QSqlDatabase::database("ORDER"));
    QString str_select = "SELECT articul FROM order_list WHERE articul = '"+shop.articul+"'";//запрос поиска артикула в таблице order_list, который равен артикулу в shop_list
    QSqlRecord record_art;

    if (!query_select.exec(str_select))//если запрос не получается выполнить
    {
        qDebug() << query_select.lastQuery() << query_select.lastError();
    }
    record_art = query_select.record();
    query_select.next();//вызывается метод для продвижения между ячейками для поиска значения
    order.articul = query_select.value(record_art.indexOf("articul")).toString();//пытаемся найти артикул, равный артикулу из shop_list, который равен выбранной пользователем ячейке
    if (order.articul == shop.articul)//если такой находится, то строка с нужным артикулом в order_list просто обновляется с нужными значениями(количество товаров увеличивается на только что совершенную покупку)
    {
        QSqlQuery query_order(QSqlDatabase::database("ORDER"));
        query_order.exec("UPDATE order_list SET max_order = max_order + "+shop_count+", curent_order = curent_order + "+shop_count+" WHERE articul = '"+shop.articul+"' ");
    }
    else//если не находится, то создается новая строка с нужным артикулом и данными ячеек той же строки
    {

    QSqlQuery query_order_insert(QSqlDatabase::database("ORDER"));
    QString str_insert = "INSERT INTO order_list (product, articul, price, max_order, curent_order)"
                            "VALUES ('%1', '%2', '%3', '%4', %5)";
    QString db_insert = str_insert. arg(order.name, shop.articul, order.price)
                                  .arg(shop.count)
                                  .arg(shop.count);
    if (!query_order_insert.exec(db_insert))
    {
    qDebug() << query_order_insert.lastError() << " : " << query_order_insert.lastQuery();
    }
    }
    QSqlQuery query_history_shop(QSqlDatabase::database("HISTORY_SHOP"));
    QString str_t_history_time = "INSERT INTO history_shop (data, time)"
                                 "VALUES ('%1', '%2')";
    db_history_input = str_t_history_time .arg(cd_str, ct_str);
    if(!query_history_shop.exec(db_history_input))
    {
        qDebug() << "Unable to insert data and time in history_table " << query_history_shop.lastError() << " : " << query_history_shop.lastQuery();
    }
    QString hstr_insert = "INSERT INTO history_shop (product, articul, price, count) VALUES ('%1', '%2', '%3', '%4')";
    QString db_hstr_insert = hstr_insert. arg(order.name, shop.articul, order.price)
                                        . arg(shop.count);

    if(!query_history_shop.exec(db_hstr_insert))
    {
        qDebug() << query_history_shop.lastError() << " : " << query_history_shop.lastQuery();
        }
    }
}
void MainWindow::edit_prod_M()//изменение товара
{

    m_name_edit = ui_edit->get_edit_name();//присваивание переменной значению из строки изменения названия товара
    m_art_edit = ui_edit->get_edit_articul();//присваивание переменной значению из строки изменения артикула товара
    m_price_edit = ui_edit->get_edit_price();//присваивание переменной значению из строки изменения цены товара
    m_count_edit = ui_edit->get_edit_count();//присваивание переменной значению из строки изменения количества товаров
    QString db_articul = " ";//строка для работы с артикулом в БД
    m_articul_entered = ui_admin->get_articul_table();//присваивание переменной артикулом из таблицы админа
    QString str_t_prod = " SELECT articul "
                         " FROM products_list "
                         " WHERE articul = '%1'";//строка запроса для поиска артикула в БД который совпадает с артикулом, находящимся в таблице админа

    db_prod_input = str_t_prod.arg(m_articul_entered);

    QSqlQuery query_prod_edit(QSqlDatabase::database("PRODUCT"));
    QSqlRecord rec_prod_edit;
    if (!query_prod_edit.exec(db_prod_input))
    {
        qDebug() << "Unable to execute query - exiting" << query_prod_edit.lastError() << " : " << query_prod_edit.lastQuery() << m_articul_entered << db_articul;
    }
    rec_prod_edit = query_prod_edit.record();
    query_prod_edit.next();
    db_articul = query_prod_edit.value(rec_prod_edit.indexOf("articul")).toString();//получаем артикул, который искался в запросе
    if (m_articul_entered != db_articul)//если они не равны, то
    {
        QMessageBox msg_box;
        msg_box.setText("Окно редактирования не открылось: проверьте введённые данные");
        msg_box.exec();
    }
    else//если равны, то
    {
        QSqlQuery query_prod_ed(QSqlDatabase::database("PRODUCT"));
        query_prod_ed.exec("UPDATE products_list SET product = '"+m_name_edit+"', articul = '"+m_art_edit+"', price = '"+m_price_edit+"', max_count = '"+m_count_edit+"' "
                    "WHERE articul = '"+m_articul_entered+"'");//выполнение запроса обновления таблицы products_list
            if (query_prod_ed.exec())//если запрос выполнен выходит сообщение о успешном изменении
            {
                QMessageBox::warning(this,tr("Изменение"), tr("Таблица администратора успешно изменена"));
            }
            else//в другом случае выводится ошибка
            {
               QMessageBox::critical(this,tr("error::"),query_prod_ed.lastError().text());
            }

       QSqlQuery query_shop_ed(QSqlDatabase::database("SHOP"));
       query_shop_ed.exec("UPDATE shop_list SET product = '"+m_name_edit+"', articul = '"+m_art_edit+"', price = '"+m_price_edit+"', max_count = '"+m_count_edit+"', count = '"+m_count_edit+"'"
                          "WHERE articul = '"+m_articul_entered+"'");//выполнение запроса обновления таблицы shop_list
       if (query_shop_ed.exec())//если запрос выполнен выходит сообщение о успешном изменении
       {
           QMessageBox::warning(this,tr("EDIT"), tr("USER TABLE EDITED"));
       }
       else//в другом случае выводится ошибка
       {
          QMessageBox::critical(this,tr("error::"),query_shop_ed.lastError().text());
       }
       QSqlQuery query_order_ed(QSqlDatabase::database("ORDER"));
       query_order_ed.exec("DELETE order_list"
                          "WHERE articul = '"+m_articul_entered+"'");//выполнение запроса  удаления строки из таблицы order_list
       if (query_order_ed.exec())//если запрос выполнен выходит сообщение о успешном изменении
       {
           QMessageBox::warning(this,tr("EDIT"), tr("USER TABLE EDITED"));
       }
       else//в другом случае выводится ошибка
       {
          QMessageBox::critical(this,tr("error::"),query_order_ed.lastError().text());
       }

}
}
void MainWindow::insert_history_table()
{
    Product hisOrder;
    QSqlQuery query_history(QSqlDatabase::database("HISTORY"));
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    QString cd_str = cd.toString();
    QString ct_str = ct.toString();

    QString str_t_history_time = "INSERT INTO history_list (data, time)"
                                 "VALUES ('%1', '%2')";
    db_history_input = str_t_history_time .arg(cd_str, ct_str);
    if(!query_history.exec(db_history_input))
    {
        qDebug() << "Unable to insert data and time in history_table " << query_history.lastError() << " : " << query_history.lastQuery();
    }

    QString str_sel_order = "SELECT * FROM order_list ";
    QSqlQuery query_select_order(QSqlDatabase::database("ORDER"));
    QSqlRecord rec_order;
    if(!query_select_order.exec(str_sel_order))
    {
        qDebug() << "Cannot return values from order_list(WINDOW STRKPR) " << query_select_order.lastError() << query_select_order.lastQuery();
    }
    else
    {
    rec_order = query_select_order.record();
    while(query_select_order.next())
    {
    hisOrder.name = query_select_order.value(rec_order.indexOf("product")).toString();
    hisOrder.articul = query_select_order.value(rec_order.indexOf("articul")).toString();
    hisOrder.price = query_select_order.value(rec_order.indexOf("price")).toString();
    hisOrder.count = query_select_order.value(rec_order.indexOf("curent_order")).toInt();

    QSqlQuery query_history(QSqlDatabase::database("HISTORY"));

    QString str_t_history_products = "INSERT INTO history_list (product, articul, price, count)"
                                     "VALUES ('%1', '%2', '%3', '%4')";
    db_prod_history_input = str_t_history_products .arg(hisOrder.name, hisOrder.articul, hisOrder.price)
                                                        .arg(hisOrder.count);
    qDebug() << hisOrder.name << hisOrder.articul << hisOrder.price << hisOrder.count;
    if(!query_history.exec(db_prod_history_input))
    {
        qDebug() << "Unable to insert products in history_table " << query_history.lastError() << " : " << query_history.lastQuery();
    }
    }
    }
}

void MainWindow::all_products_ordered()//заказ продуктов у кладовщика
{

    QSqlQuery query_ordered(QSqlDatabase::database("PREF"));
    QString str_order_strkp = "UPDATE preference SET ordered = %1";//строка запроса в котором значения ячейки строки ordered становится 1
    db_order_input = str_order_strkp .arg(1);
    QMessageBox::information(this, "Заказ", "Ваш заказ направлен к кладовщику");
    if (!query_ordered.exec(db_order_input))
    {
        qDebug() << "Unable to insert data in pref " << query_ordered.lastError() << query_ordered.lastQuery();
    }
}

void MainWindow::shop_order_aproved()
{
    bool zero_one;
    int current_order;
    QString current_articul;

    QSqlQuery query_zero_one(QSqlDatabase::database("PREF"));
    QString str_zero_one = "SELECT ordered FROM preference";//запрос нахождения состояния ячейки ordered
    QSqlRecord record_ZO;

    if (!query_zero_one.exec(str_zero_one))
    {
        qDebug() << query_zero_one.lastQuery() << query_zero_one.lastError();
    }
    record_ZO = query_zero_one.record();
    query_zero_one.next();
    zero_one = query_zero_one.value(record_ZO.indexOf("ordered")).toBool();//булевая переменная zero_one принимает значение ячейки ordered


    if (zero_one == 1)//если переменная равна 1
    {
    QSqlQuery query_get_order_current(QSqlDatabase::database("ORDER"));

    QString str_get_order = "SELECT curent_order, articul FROM order_list";//запрос нахождения текущего числа запроса товаров и артикула из order_list
    if(!query_get_order_current.exec(str_get_order))
    {
       qDebug() << query_get_order_current.lastError() << query_get_order_current.lastQuery();
    }
    QSqlRecord rec_order;
    rec_order = query_get_order_current.record();
    while (query_get_order_current.next())
    {
        current_order = query_get_order_current.value(rec_order.indexOf("curent_order")).toInt();//присваиваем к переменной значение найденной ячейки curent_order
        current_articul = query_get_order_current.value(rec_order.indexOf("articul")).toString();//присваиваем к переменной значение найденной ячейки articul
        QSqlQuery query_update_shop_list(QSqlDatabase::database("SHOP"));
        QString str_upd_s_list = "UPDATE shop_list SET count = count + %1 WHERE articul = '"+current_articul+"'";//запрос на обновление таблицы покупок, где мы добавляем к текущему количеству число, которое было указано в запросе к кладовщику
        db_shop_input = str_upd_s_list .arg(current_order);
        if(!query_update_shop_list.exec(db_shop_input))
        {
            qDebug() << "Unable to add products in count list " << query_update_shop_list.lastError() << query_update_shop_list.lastQuery();
        }
}
    QSqlQuery query_transp_shop(QSqlDatabase::database("ORDER"));
    QString str_transp = "UPDATE order_list SET max_order = (max_order - curent_order) , curent_order = 0";//запрос на обновление таблицы покупок, где мы вычитаем от максимальному запросу число, которое было указано в запросе к кладовщику
    if(!query_transp_shop.exec(str_transp))
    {
        qDebug() << "Unable to insert data in transportation " << query_transp_shop.lastError() << query_transp_shop.lastQuery();
    }
    QSqlQuery query_ordered(QSqlDatabase::database("PREF"));
    QString str_order_strkp = "UPDATE preference SET ordered = %1";//выставляем значение ячейки ordered = 0
    db_order_input = str_order_strkp .arg(0);
    if (!query_ordered.exec(db_order_input))
    {
        qDebug() << query_ordered.lastError() << query_ordered.lastQuery();
    }
    QSqlQuery delete_rows(QSqlDatabase::database("ORDER"));
    delete_rows.exec("DELETE FROM order_list WHERE max_order = 0");//запрос на удаление тех строчек в order_list, где максимальный запрос = 0, то есть где запроса нет
    qDebug() << delete_rows.lastError();
    QMessageBox::information(this, "Заказ отправлен", "Заказ отправлен");
}
    else//если ordered равен 0 (кнопка на заказать товары не нажата)
    {
       QMessageBox::warning(this, "Пусто", "Заказ не поступил");
    }

}


void MainWindow::changeDayNight()//метод для смены тёмного и светлого режимов
{
    bool day_night;
    QSqlQuery query_cycle (QSqlDatabase::database("PREF"));
    QString return_cycle = "SELECT cycle FROM preference ";
    QSqlRecord rec_cycle;
    if(!query_cycle.exec(return_cycle))
    {
        qDebug() << "Cannot return value from cycle (PREF) " << query_cycle.lastError() << query_cycle.lastQuery();
    }

    rec_cycle = query_cycle.record();
    query_cycle.next();
    day_night = query_cycle.value(rec_cycle.indexOf("cycle")).toBool();

    if (day_night == 0)
    {
        day_night = 1;
    }
    else
    {
        day_night = 0;
    }

    QSqlQuery query_change_cycle(QSqlDatabase::database("PREF"));
    QString change_cycle = "UPDATE preference SET cycle = %1 ";
    QString value_DayNight = change_cycle .arg(day_night);
    if(!query_change_cycle.exec(value_DayNight))
    {
        qDebug() << "Unable to change cycle " << query_change_cycle.lastError() << query_change_cycle.lastQuery();
    }
}

void MainWindow::setDayNight()//метод для выставления цвета режима, в зависимости от выбранного режима
{
    bool valueDayNight;
    QSqlQuery query_cycle (QSqlDatabase::database("PREF"));
    QString return_cycle = "SELECT cycle FROM preference ";
    QSqlRecord rec_cycle;
    if(!query_cycle.exec(return_cycle))
    {
        qDebug() << "Cannot return value from cycle (PREF) " << query_cycle.lastError() << query_cycle.lastQuery();
    }

    rec_cycle = query_cycle.record();
    query_cycle.next();
    valueDayNight = query_cycle.value(rec_cycle.indexOf("cycle")).toBool();
    QPixmap day_cycle("./Pics/day.svg");
    QPixmap night_cycle("./Pics/night.svg");
    QPixmap apply("./Pics/apply.svg");
    QPixmap history("./Pics/history.svg");
    QPixmap viewPass("./Pics/viewPass.svg");
    QPixmap icon_exit_strkp("./Pics/exit_strkp.svg");
    ui_auth->ui->Button_ViewPass->setIcon(viewPass);
    ui_strkp->ui->tabWidget->setTabIcon(0,apply);
    ui_strkp->ui->tabWidget->setTabIcon(1,history);
    ui_strkp->ui->tabWidget->setTabIcon(2,history);
    ui_strkp->ui->exit_strkp->setIcon(icon_exit_strkp);
    if (valueDayNight == 0)
    {
      ui_auth->setStyleSheet("QDialog{background-color:rgb(170,170,170)}"
                             "QPushButton{background-color:rgb(180,180,180)}"
                             "QLineEdit{background-color:rgb(200,200,200)}"
                             "QLabel{color:black;}");
      ui_reg->setStyleSheet("QDialog{background-color:rgb(200,200,200)}"
                            "QPushButton{background-color:rgb(170,170,170)}"
                            "QLineEdit{background-color:rgb(170,170,170)}"
                            "QLabel{color:black;qproperty-alignment:AlignCenter;}");
      ui_admin->setStyleSheet("QDialog{background-color:rgb(200,200,200)}"
                              "QPushButton{background-color:rgb(170,170,170)}");
      ui_admin->ui->add_button->setStyleSheet("color:green");
      ui_admin->ui->edit_button->setStyleSheet("color:yellow");
      ui_admin->ui->del_button->setStyleSheet("color:red");


      ui_prod->setStyleSheet("QDialog{background-color:rgb(200,200,200)}"
                             "QPushButton{background-color:rgb(160,160,160);}");
      ui_prod->ui->add_prod_button->setStyleSheet("color:green;");


      ui_edit->setStyleSheet("QDialog{background-color:rgb(200,200,200)}"
                             "QPushButton{background-color:rgb(160,160,160)}");
      ui_edit->ui->edit_prod_button->setStyleSheet("color:rgb(255,140,0);");


      ui_sell->setStyleSheet("QDialog{background-color: rgb(200,200,200)}");
      ui_strkp->setStyleSheet("QWidget{background-color: rgb(200,200,200)}"
                              "QTabWidget::pane{border:1px;background-color: rgb(180, 180, 180);}"
                              "QTableView{background-color:rgb(220,220,220);color:black;gridline-color:black;}"
                              "QTabBar::tab{background: rgb(255,255,255);color: rgb(0,0,0);min-width: 30ex;min-height: 10ex;margin-left: 1px;left: -1px;}"
                              "QTabBar::tab:selected{background: rgb(55,88,88);color: rgb(255,255,255);}"
                              "QTabBar::tab:hover{background: rgb(66,66,66);color: rgb(255,255,255);}");
      ui_auth->ui->Cycle->setIcon(day_cycle);
      ui_reg->ui->cycle_reg->setIcon(day_cycle);
      ui_admin->ui->cycle_admin->setIcon(day_cycle);
      ui_sell->ui->cycle_sell->setIcon(day_cycle);
      ui_strkp->ui->cycle_strkp->setIcon(day_cycle);

    }
    else
    {
        ui_auth->setStyleSheet("QDialog{background-color:rgb(40,40,40)}"
                               "QPushButton{background-color:rgb(55,88,88);color:rgb(255,255,255)}"
                               "QLineEdit{background-color:rgb(60,60,60);color:rgb(255,255,255)}"
                               "QLabel{color:white;}");
        ui_reg->setStyleSheet("QDialog{background-color:rgb(40,40,40)}"
                              "QPushButton{background-color:rgb(55,88,88);color:rgb(255,255,255)}"
                              "QLineEdit{background-color:rgb(60,60,60);color:rgb(255,255,255)}"
                              "QLabel{color:white;qproperty-alignment:AlignCenter}"
                              "QRadioButton{color:white;}"
                              "QRadioButton::indicator:checked {background-color:white;border:1px solid white;}"
                              "QRadioButton::indicator:unchecked {background-color:black;border:1px solid white;}"
                              "QMessageBox{background-color: black;}");
        ui_admin->setStyleSheet("QDialog{background-color:rgb(40,40,40)}"
                                "QPushButton{background-color:rgb(55,88,88);color:white}"
                                "QTableView{alternate-background-color:rgb(50,60,60);background-color:rgb(60,60,60);color:white;gridline-color:white;}");
        ui_admin->ui->tableView->horizontalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_admin->ui->tableView->verticalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_admin->ui->add_button->setStyleSheet("color:green");
        ui_admin->ui->edit_button->setStyleSheet("color:yellow");
        ui_admin->ui->del_button->setStyleSheet("color:red");

        ui_prod->setStyleSheet("QDialog{background-color:rgb(40,40,40)}"
                               "QLineEdit{color:white;background-color:rgb(60,60,60);}"
                               "QLabel{color:white}");
        ui_prod->ui->add_prod_button->setStyleSheet("color:green; background-color:rgb(50,50,50)");
        ui_edit->setStyleSheet("QDialog{background-color:rgb(40,40,40)}"
                              "QLineEdit{color:white;background-color:rgb(60,60,60);}"
                              "QLabel{color:white}");
        ui_edit->ui->edit_prod_button->setStyleSheet("color:yellow; background-color:rgb(50,50,50)");
        ui_sell->setStyleSheet("QDialog{background-color: rgb(40,40,40)}"
                               "QLabel{color:white}"
                               "QPushButton{background-color:rgb(55,88,88);color:white}"
                               "QTableView{background-color:rgb(60,60,60);color:white;gridline-color:white;}");
        ui_sell->ui->shop_table->horizontalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_sell->ui->shop_table->verticalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_sell->ui->order_table->horizontalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_sell->ui->order_table->verticalHeader()->setStyleSheet("color: white; background-color:grey;");

        ui_strkp->setStyleSheet("QWidget{background-color: rgb(40,40,40)}"
                                "QPushButton{background-color:rgb(55,88,88); color: white;}"
                                "QTableView{background-color:rgb(60,60,60);color:white;gridline-color:white;}"
                                "QTabWidget::pane{border:1px;background-color: rgb(27, 38, 38);}"
                                "QTabBar::tab{background: rgb(44,44,44);color: rgb(255,255,255);min-width: 30ex;min-height: 10ex;margin-left: 1px;left: -1px;}"
                                "QTabBar::tab:selected{background: rgb(55,88,88);color: rgb(255,255,255);}"
                                "QTabBar::tab:hover{background: rgb(66,66,66);color: rgb(255,255,255);}");
        ui_strkp->ui->table_order_strkp->horizontalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_strkp->ui->table_order_strkp->verticalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_strkp->ui->table_history->horizontalHeader()->setStyleSheet("color: white; background-color:grey;");
        ui_strkp->ui->table_history->verticalHeader()->setStyleSheet("color: white; background-color:grey;");

        ui_auth->ui->Cycle->setIcon(night_cycle);
        ui_reg->ui->cycle_reg->setIcon(night_cycle);
        ui_admin->ui->cycle_admin->setIcon(night_cycle);
        ui_sell->ui->cycle_sell->setIcon(night_cycle);
        ui_strkp->ui->cycle_strkp->setIcon(night_cycle);
    }
}
void MainWindow::openDoc()//метод для открытия справочного материала
{
 QUrl guide = QUrl::fromLocalFile("./Guide.docx");
 QDesktopServices::openUrl(guide);
}
MainWindow::~MainWindow()//деструктор главного окна: в случае авторизации обновляет содержимое БД, прерывает с ней связь и уничтожает все окна приложения
{
    if (m_loginSuccesfull)
    {
        QString str_t = "UPDATE userlist "
                        "SET xpos = %2, ypos = %3 "
                        "WHERE name = '%1';";
        db_input = str_t .arg(m_username)
                         .arg(this->x())
                         .arg(this->y());
        QSqlQuery query(QSqlDatabase::database("USERS"));
        if (!query.exec(db_input))
        {
            qDebug() << "Unable to insert data" << query.lastError() << " : " << query.lastQuery();
        }
    }
    mw_db.removeDatabase("USERS");
    mw_dbProd.removeDatabase("PRODUCT");
    mw_dbShop.removeDatabase("SHOP");
    mw_dbOrder.removeDatabase("ORDER");
    mw_dbPref.removeDatabase("PREF");

    //очистка памяти
   delete ui_auth;
   delete ui_reg;
   delete ui_admin;
   delete ui_sell;
   delete ui_strkp;
   delete ui_prod;
   delete ui_edit;


    qDebug() << "MainWindow Destroyed";
    delete ui_Main;
    exit(0);
}



bool MainWindow::connectDB_USERS()
{
    QSqlDatabase mw_db = QSqlDatabase::addDatabase("QSQLITE","USERS");
    mw_db.setDatabaseName("C:\\qt_proj\\auth\\Databases\\MainDB.db");
    if(!mw_db.open())
    {
        qDebug() << "Cannot open database(USERS): " << mw_db.lastError();
        return false;
    }
    return true;
}
bool MainWindow::connectDB_PROD()
{
    QSqlDatabase mw_dbProd = QSqlDatabase::addDatabase("QSQLITE", "PRODUCT");
    mw_dbProd.setDatabaseName("C:\\qt_proj\\auth\\Databases\\MainDB.db");
    if(!mw_dbProd.open())
    {
        qDebug() << "Cannot open database(PRODUCT): " << mw_dbProd.lastError();
        return false;
    }
    return true;
}
bool MainWindow::connectDB_SHOP()
{
    QSqlDatabase mw_dbShop = QSqlDatabase::addDatabase("QSQLITE", "SHOP");
    mw_dbShop.setDatabaseName("C:\\qt_proj\\auth\\Databases\\shop_list.db");
    if(!mw_dbShop.open())
    {
            qDebug() << "Cannot open database(SHOP): " << mw_dbShop.lastError();
            return false;
}
    return true;
}
bool MainWindow::connectDB_ORDER()
{
    QSqlDatabase mw_dbOrder = QSqlDatabase::addDatabase("QSQLITE", "ORDER");
    mw_dbOrder.setDatabaseName("C:\\qt_proj\\auth\\Databases\\order.db");
    if(!mw_dbOrder.open())
    {
        qDebug() << "Cannot open database(ORDER): " << mw_dbOrder.lastError();
        return false;
    }
    return true;
}
bool MainWindow::connectDB_preference()
{
    QSqlDatabase mw_dbPref = QSqlDatabase::addDatabase("QSQLITE", "PREF");
    mw_dbPref.setDatabaseName("C:\\qt_proj\\auth\\Databases\\MainDB.db");
    if(!mw_dbPref.open())
    {
        qDebug() << "Cannot open database(PREF): " << mw_dbPref.lastError();
        return false;
    }
    return true;
}
bool MainWindow::connectDB_history()
{
    QSqlDatabase mw_dbHistory = QSqlDatabase::addDatabase("QSQLITE", "HISTORY");
    mw_dbHistory.setDatabaseName("C:\\qt_proj\\auth\\Databases\\order_history.db");
    if(!mw_dbHistory.open())
    {
        qDebug() << "Cannot open database(HISTORY): " << mw_dbHistory.lastError();
        return false;
    }
    return true;
}
bool MainWindow::connectDB_history_shop()
{
    QSqlDatabase mw_dbHistoryShop = QSqlDatabase::addDatabase("QSQLITE", "HISTORY_SHOP");
    mw_dbHistoryShop.setDatabaseName("C:\\qt_proj\\auth\\Databases\\order_history_shop.db");
    if(!mw_dbHistoryShop.open())
    {
        qDebug() << "Cannot open database(HISTORY_SHOP): " << mw_dbHistoryShop.lastError();
        return false;
    }
    return true;
}
