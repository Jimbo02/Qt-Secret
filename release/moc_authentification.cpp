/****************************************************************************
** Meta object code from reading C++ file 'authentification.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../authentification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authentification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_authentification_t {
    const uint offsetsAndSize[30];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_authentification_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_authentification_t qt_meta_stringdata_authentification = {
    {
QT_MOC_LITERAL(0, 16), // "authentification"
QT_MOC_LITERAL(17, 20), // "login_button_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 23), // "register_button_clicked"
QT_MOC_LITERAL(63, 19), // "signal_change_cycle"
QT_MOC_LITERAL(83, 15), // "signal_question"
QT_MOC_LITERAL(99, 23), // "on_Line_Name_textEdited"
QT_MOC_LITERAL(123, 4), // "arg1"
QT_MOC_LITERAL(128, 27), // "on_Line_Password_textEdited"
QT_MOC_LITERAL(156, 23), // "on_Button_Login_clicked"
QT_MOC_LITERAL(180, 26), // "on_Button_Register_clicked"
QT_MOC_LITERAL(207, 16), // "on_Cycle_clicked"
QT_MOC_LITERAL(224, 19), // "on_Question_clicked"
QT_MOC_LITERAL(244, 26), // "on_Button_ViewPass_toggled"
QT_MOC_LITERAL(271, 7) // "checked"

    },
    "authentification\0login_button_clicked\0"
    "\0register_button_clicked\0signal_change_cycle\0"
    "signal_question\0on_Line_Name_textEdited\0"
    "arg1\0on_Line_Password_textEdited\0"
    "on_Button_Login_clicked\0"
    "on_Button_Register_clicked\0on_Cycle_clicked\0"
    "on_Question_clicked\0on_Button_ViewPass_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_authentification[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    0 /* Public */,
       3,    0,   81,    2, 0x06,    1 /* Public */,
       4,    0,   82,    2, 0x06,    2 /* Public */,
       5,    0,   83,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   84,    2, 0x08,    4 /* Private */,
       8,    1,   87,    2, 0x08,    6 /* Private */,
       9,    0,   90,    2, 0x08,    8 /* Private */,
      10,    0,   91,    2, 0x08,    9 /* Private */,
      11,    0,   92,    2, 0x08,   10 /* Private */,
      12,    0,   93,    2, 0x08,   11 /* Private */,
      13,    1,   94,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void authentification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<authentification *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->login_button_clicked(); break;
        case 1: _t->register_button_clicked(); break;
        case 2: _t->signal_change_cycle(); break;
        case 3: _t->signal_question(); break;
        case 4: _t->on_Line_Name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Line_Password_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Button_Login_clicked(); break;
        case 7: _t->on_Button_Register_clicked(); break;
        case 8: _t->on_Cycle_clicked(); break;
        case 9: _t->on_Question_clicked(); break;
        case 10: _t->on_Button_ViewPass_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (authentification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&authentification::login_button_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (authentification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&authentification::register_button_clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (authentification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&authentification::signal_change_cycle)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (authentification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&authentification::signal_question)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject authentification::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_authentification.offsetsAndSize,
    qt_meta_data_authentification,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_authentification_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *authentification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *authentification::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_authentification.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int authentification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void authentification::login_button_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void authentification::register_button_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void authentification::signal_change_cycle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void authentification::signal_question()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
