/****************************************************************************
** Meta object code from reading C++ file 'winseller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../winseller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winseller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_winseller_t {
    const uint offsetsAndSize[42];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_winseller_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_winseller_t qt_meta_stringdata_winseller = {
    {
QT_MOC_LITERAL(0, 9), // "winseller"
QT_MOC_LITERAL(10, 14), // "sell_product_s"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 19), // "order_all_product_s"
QT_MOC_LITERAL(46, 17), // "signal_cycle_sell"
QT_MOC_LITERAL(64, 16), // "max_Button_order"
QT_MOC_LITERAL(81, 17), // "zero_Button_order"
QT_MOC_LITERAL(99, 18), // "change_cur_order_s"
QT_MOC_LITERAL(118, 16), // "signal_exit_sell"
QT_MOC_LITERAL(135, 22), // "on_Sell_Button_clicked"
QT_MOC_LITERAL(158, 21), // "on_shop_table_clicked"
QT_MOC_LITERAL(180, 11), // "QModelIndex"
QT_MOC_LITERAL(192, 5), // "index"
QT_MOC_LITERAL(198, 22), // "on_order_table_clicked"
QT_MOC_LITERAL(221, 21), // "on_cycle_sell_clicked"
QT_MOC_LITERAL(243, 27), // "on_button_order_all_clicked"
QT_MOC_LITERAL(271, 34), // "on_Max_Order_Button_seller_cl..."
QT_MOC_LITERAL(306, 25), // "on_setZero_Button_clicked"
QT_MOC_LITERAL(332, 29), // "on_spinBox_Order_valueChanged"
QT_MOC_LITERAL(362, 4), // "arg1"
QT_MOC_LITERAL(367, 20) // "on_exit_sell_clicked"

    },
    "winseller\0sell_product_s\0\0order_all_product_s\0"
    "signal_cycle_sell\0max_Button_order\0"
    "zero_Button_order\0change_cur_order_s\0"
    "signal_exit_sell\0on_Sell_Button_clicked\0"
    "on_shop_table_clicked\0QModelIndex\0"
    "index\0on_order_table_clicked\0"
    "on_cycle_sell_clicked\0on_button_order_all_clicked\0"
    "on_Max_Order_Button_seller_clicked\0"
    "on_setZero_Button_clicked\0"
    "on_spinBox_Order_valueChanged\0arg1\0"
    "on_exit_sell_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_winseller[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    0 /* Public */,
       3,    0,  111,    2, 0x06,    1 /* Public */,
       4,    0,  112,    2, 0x06,    2 /* Public */,
       5,    0,  113,    2, 0x06,    3 /* Public */,
       6,    0,  114,    2, 0x06,    4 /* Public */,
       7,    0,  115,    2, 0x06,    5 /* Public */,
       8,    0,  116,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  117,    2, 0x08,    7 /* Private */,
      10,    1,  118,    2, 0x08,    8 /* Private */,
      13,    1,  121,    2, 0x08,   10 /* Private */,
      14,    0,  124,    2, 0x08,   12 /* Private */,
      15,    0,  125,    2, 0x08,   13 /* Private */,
      16,    0,  126,    2, 0x08,   14 /* Private */,
      17,    0,  127,    2, 0x08,   15 /* Private */,
      18,    1,  128,    2, 0x08,   16 /* Private */,
      20,    0,  131,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void winseller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<winseller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sell_product_s(); break;
        case 1: _t->order_all_product_s(); break;
        case 2: _t->signal_cycle_sell(); break;
        case 3: _t->max_Button_order(); break;
        case 4: _t->zero_Button_order(); break;
        case 5: _t->change_cur_order_s(); break;
        case 6: _t->signal_exit_sell(); break;
        case 7: _t->on_Sell_Button_clicked(); break;
        case 8: _t->on_shop_table_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_order_table_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_cycle_sell_clicked(); break;
        case 11: _t->on_button_order_all_clicked(); break;
        case 12: _t->on_Max_Order_Button_seller_clicked(); break;
        case 13: _t->on_setZero_Button_clicked(); break;
        case 14: _t->on_spinBox_Order_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_exit_sell_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::sell_product_s)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::order_all_product_s)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::signal_cycle_sell)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::max_Button_order)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::zero_Button_order)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::change_cur_order_s)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (winseller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winseller::signal_exit_sell)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject winseller::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_winseller.offsetsAndSize,
    qt_meta_data_winseller,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_winseller_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *winseller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *winseller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_winseller.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int winseller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void winseller::sell_product_s()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void winseller::order_all_product_s()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void winseller::signal_cycle_sell()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void winseller::max_Button_order()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void winseller::zero_Button_order()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void winseller::change_cur_order_s()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void winseller::signal_exit_sell()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
