/****************************************************************************
** Meta object code from reading C++ file 'winadmin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../winadmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winadmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_winadmin_t {
    const uint offsetsAndSize[30];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_winadmin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_winadmin_t qt_meta_stringdata_winadmin = {
    {
QT_MOC_LITERAL(0, 8), // "winadmin"
QT_MOC_LITERAL(9, 16), // "w_product_opened"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 17), // "w_product_deleted"
QT_MOC_LITERAL(45, 16), // "w_product_edited"
QT_MOC_LITERAL(62, 13), // "admin_to_auth"
QT_MOC_LITERAL(76, 18), // "signal_cycle_admin"
QT_MOC_LITERAL(95, 21), // "on_add_button_clicked"
QT_MOC_LITERAL(117, 21), // "on_del_button_clicked"
QT_MOC_LITERAL(139, 22), // "on_edit_button_clicked"
QT_MOC_LITERAL(162, 27), // "on_main_prod_button_clicked"
QT_MOC_LITERAL(190, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(211, 11), // "QModelIndex"
QT_MOC_LITERAL(223, 5), // "index"
QT_MOC_LITERAL(229, 22) // "on_cycle_admin_clicked"

    },
    "winadmin\0w_product_opened\0\0w_product_deleted\0"
    "w_product_edited\0admin_to_auth\0"
    "signal_cycle_admin\0on_add_button_clicked\0"
    "on_del_button_clicked\0on_edit_button_clicked\0"
    "on_main_prod_button_clicked\0"
    "on_tableView_clicked\0QModelIndex\0index\0"
    "on_cycle_admin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_winadmin[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    0 /* Public */,
       3,    0,   81,    2, 0x06,    1 /* Public */,
       4,    0,   82,    2, 0x06,    2 /* Public */,
       5,    0,   83,    2, 0x06,    3 /* Public */,
       6,    0,   84,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   85,    2, 0x08,    5 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    0,   88,    2, 0x08,    8 /* Private */,
      11,    1,   89,    2, 0x08,    9 /* Private */,
      14,    0,   92,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void winadmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<winadmin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->w_product_opened(); break;
        case 1: _t->w_product_deleted(); break;
        case 2: _t->w_product_edited(); break;
        case 3: _t->admin_to_auth(); break;
        case 4: _t->signal_cycle_admin(); break;
        case 5: _t->on_add_button_clicked(); break;
        case 6: _t->on_del_button_clicked(); break;
        case 7: _t->on_edit_button_clicked(); break;
        case 8: _t->on_main_prod_button_clicked(); break;
        case 9: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_cycle_admin_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (winadmin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winadmin::w_product_opened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (winadmin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winadmin::w_product_deleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (winadmin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winadmin::w_product_edited)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (winadmin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winadmin::admin_to_auth)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (winadmin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winadmin::signal_cycle_admin)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject winadmin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_winadmin.offsetsAndSize,
    qt_meta_data_winadmin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_winadmin_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *winadmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *winadmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_winadmin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int winadmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void winadmin::w_product_opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void winadmin::w_product_deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void winadmin::w_product_edited()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void winadmin::admin_to_auth()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void winadmin::signal_cycle_admin()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
