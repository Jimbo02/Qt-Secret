/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[44];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "authorizeUser"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 18), // "registerWindowShow"
QT_MOC_LITERAL(45, 12), // "registerUser"
QT_MOC_LITERAL(58, 13), // "addProduction"
QT_MOC_LITERAL(72, 11), // "delete_prod"
QT_MOC_LITERAL(84, 14), // "open_edit_prod"
QT_MOC_LITERAL(99, 11), // "edit_prod_M"
QT_MOC_LITERAL(111, 12), // "update_table"
QT_MOC_LITERAL(124, 16), // "update_tableShop"
QT_MOC_LITERAL(141, 17), // "update_tableOrder"
QT_MOC_LITERAL(159, 12), // "sell_product"
QT_MOC_LITERAL(172, 24), // "update_table_order_strkp"
QT_MOC_LITERAL(197, 20), // "all_products_ordered"
QT_MOC_LITERAL(218, 18), // "shop_order_aproved"
QT_MOC_LITERAL(237, 20), // "insert_history_table"
QT_MOC_LITERAL(258, 20), // "update_history_table"
QT_MOC_LITERAL(279, 19), // "update_history_shop"
QT_MOC_LITERAL(299, 14), // "changeDayNight"
QT_MOC_LITERAL(314, 11), // "setDayNight"
QT_MOC_LITERAL(326, 7) // "openDoc"

    },
    "MainWindow\0authorizeUser\0\0registerWindowShow\0"
    "registerUser\0addProduction\0delete_prod\0"
    "open_edit_prod\0edit_prod_M\0update_table\0"
    "update_tableShop\0update_tableOrder\0"
    "sell_product\0update_table_order_strkp\0"
    "all_products_ordered\0shop_order_aproved\0"
    "insert_history_table\0update_history_table\0"
    "update_history_shop\0changeDayNight\0"
    "setDayNight\0openDoc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x08,    0 /* Private */,
       3,    0,  135,    2, 0x08,    1 /* Private */,
       4,    0,  136,    2, 0x08,    2 /* Private */,
       5,    0,  137,    2, 0x08,    3 /* Private */,
       6,    0,  138,    2, 0x08,    4 /* Private */,
       7,    0,  139,    2, 0x08,    5 /* Private */,
       8,    0,  140,    2, 0x08,    6 /* Private */,
       9,    0,  141,    2, 0x08,    7 /* Private */,
      10,    0,  142,    2, 0x08,    8 /* Private */,
      11,    0,  143,    2, 0x08,    9 /* Private */,
      12,    0,  144,    2, 0x08,   10 /* Private */,
      13,    0,  145,    2, 0x08,   11 /* Private */,
      14,    0,  146,    2, 0x08,   12 /* Private */,
      15,    0,  147,    2, 0x08,   13 /* Private */,
      16,    0,  148,    2, 0x08,   14 /* Private */,
      17,    0,  149,    2, 0x08,   15 /* Private */,
      18,    0,  150,    2, 0x08,   16 /* Private */,
      19,    0,  151,    2, 0x08,   17 /* Private */,
      20,    0,  152,    2, 0x08,   18 /* Private */,
      21,    0,  153,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authorizeUser(); break;
        case 1: _t->registerWindowShow(); break;
        case 2: _t->registerUser(); break;
        case 3: _t->addProduction(); break;
        case 4: _t->delete_prod(); break;
        case 5: _t->open_edit_prod(); break;
        case 6: _t->edit_prod_M(); break;
        case 7: _t->update_table(); break;
        case 8: _t->update_tableShop(); break;
        case 9: _t->update_tableOrder(); break;
        case 10: _t->sell_product(); break;
        case 11: _t->update_table_order_strkp(); break;
        case 12: _t->all_products_ordered(); break;
        case 13: _t->shop_order_aproved(); break;
        case 14: _t->insert_history_table(); break;
        case 15: _t->update_history_table(); break;
        case 16: _t->update_history_shop(); break;
        case 17: _t->changeDayNight(); break;
        case 18: _t->setDayNight(); break;
        case 19: _t->openDoc(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
