/****************************************************************************
** Meta object code from reading C++ file 'winstorekpr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../winstorekpr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winstorekpr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_winstorekpr_t {
    const uint offsetsAndSize[22];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_winstorekpr_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_winstorekpr_t qt_meta_stringdata_winstorekpr = {
    {
QT_MOC_LITERAL(0, 11), // "winstorekpr"
QT_MOC_LITERAL(12, 20), // "signal_order_aproved"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 18), // "signal_cycle_strkp"
QT_MOC_LITERAL(53, 10), // "exit_strkp"
QT_MOC_LITERAL(64, 10), // "open_strkp"
QT_MOC_LITERAL(75, 23), // "on_order_button_clicked"
QT_MOC_LITERAL(99, 22), // "on_cycle_strkp_clicked"
QT_MOC_LITERAL(122, 21), // "on_exit_strkp_clicked"
QT_MOC_LITERAL(144, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(171, 5) // "index"

    },
    "winstorekpr\0signal_order_aproved\0\0"
    "signal_cycle_strkp\0exit_strkp\0open_strkp\0"
    "on_order_button_clicked\0on_cycle_strkp_clicked\0"
    "on_exit_strkp_clicked\0on_tabWidget_tabBarClicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_winstorekpr[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    0 /* Public */,
       3,    0,   63,    2, 0x06,    1 /* Public */,
       4,    0,   64,    2, 0x06,    2 /* Public */,
       5,    0,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    1,   69,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void winstorekpr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<winstorekpr *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_order_aproved(); break;
        case 1: _t->signal_cycle_strkp(); break;
        case 2: _t->exit_strkp(); break;
        case 3: _t->open_strkp(); break;
        case 4: _t->on_order_button_clicked(); break;
        case 5: _t->on_cycle_strkp_clicked(); break;
        case 6: _t->on_exit_strkp_clicked(); break;
        case 7: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (winstorekpr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winstorekpr::signal_order_aproved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (winstorekpr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winstorekpr::signal_cycle_strkp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (winstorekpr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winstorekpr::exit_strkp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (winstorekpr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&winstorekpr::open_strkp)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject winstorekpr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_winstorekpr.offsetsAndSize,
    qt_meta_data_winstorekpr,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_winstorekpr_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *winstorekpr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *winstorekpr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_winstorekpr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int winstorekpr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void winstorekpr::signal_order_aproved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void winstorekpr::signal_cycle_strkp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void winstorekpr::exit_strkp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void winstorekpr::open_strkp()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
