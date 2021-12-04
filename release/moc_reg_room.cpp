/****************************************************************************
** Meta object code from reading C++ file 'reg_room.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../reg_room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reg_room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_reg_room_t {
    const uint offsetsAndSize[28];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_reg_room_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_reg_room_t qt_meta_stringdata_reg_room = {
    {
QT_MOC_LITERAL(0, 8), // "reg_room"
QT_MOC_LITERAL(9, 24), // "register_button_clicked2"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 16), // "signal_cycle_reg"
QT_MOC_LITERAL(52, 27), // "on_line_Name_Reg_textEdited"
QT_MOC_LITERAL(80, 4), // "arg1"
QT_MOC_LITERAL(85, 27), // "on_line_Pass_Reg_textEdited"
QT_MOC_LITERAL(113, 27), // "on_line_Conf_Reg_textEdited"
QT_MOC_LITERAL(141, 21), // "on_Reg_Button_clicked"
QT_MOC_LITERAL(163, 20), // "on_cycle_reg_clicked"
QT_MOC_LITERAL(184, 11), // "eventFilter"
QT_MOC_LITERAL(196, 7), // "watched"
QT_MOC_LITERAL(204, 7), // "QEvent*"
QT_MOC_LITERAL(212, 5) // "event"

    },
    "reg_room\0register_button_clicked2\0\0"
    "signal_cycle_reg\0on_line_Name_Reg_textEdited\0"
    "arg1\0on_line_Pass_Reg_textEdited\0"
    "on_line_Conf_Reg_textEdited\0"
    "on_Reg_Button_clicked\0on_cycle_reg_clicked\0"
    "eventFilter\0watched\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_reg_room[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    0 /* Public */,
       3,    0,   63,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   64,    2, 0x08,    2 /* Private */,
       6,    1,   67,    2, 0x08,    4 /* Private */,
       7,    1,   70,    2, 0x08,    6 /* Private */,
       8,    0,   73,    2, 0x08,    8 /* Private */,
       9,    0,   74,    2, 0x08,    9 /* Private */,
      10,    2,   75,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 12,   11,   13,

       0        // eod
};

void reg_room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<reg_room *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->register_button_clicked2(); break;
        case 1: _t->signal_cycle_reg(); break;
        case 2: _t->on_line_Name_Reg_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_line_Pass_Reg_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_line_Conf_Reg_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Reg_Button_clicked(); break;
        case 6: _t->on_cycle_reg_clicked(); break;
        case 7: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (reg_room::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&reg_room::register_button_clicked2)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (reg_room::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&reg_room::signal_cycle_reg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject reg_room::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_reg_room.offsetsAndSize,
    qt_meta_data_reg_room,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_reg_room_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *reg_room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reg_room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_reg_room.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int reg_room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void reg_room::register_button_clicked2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void reg_room::signal_cycle_reg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
