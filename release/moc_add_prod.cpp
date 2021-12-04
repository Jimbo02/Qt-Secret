/****************************************************************************
** Meta object code from reading C++ file 'add_prod.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../add_prod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_prod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_add_prod_t {
    const uint offsetsAndSize[18];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_add_prod_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_add_prod_t qt_meta_stringdata_add_prod = {
    {
QT_MOC_LITERAL(0, 8), // "add_prod"
QT_MOC_LITERAL(9, 19), // "add_product_clicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 23), // "on_Name_prod_textEdited"
QT_MOC_LITERAL(54, 4), // "arg1"
QT_MOC_LITERAL(59, 22), // "on_Art_prod_textEdited"
QT_MOC_LITERAL(82, 24), // "on_price_prod_textEdited"
QT_MOC_LITERAL(107, 24), // "on_Count_prod_textEdited"
QT_MOC_LITERAL(132, 26) // "on_add_prod_button_clicked"

    },
    "add_prod\0add_product_clicked\0\0"
    "on_Name_prod_textEdited\0arg1\0"
    "on_Art_prod_textEdited\0on_price_prod_textEdited\0"
    "on_Count_prod_textEdited\0"
    "on_add_prod_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add_prod[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x08,    1 /* Private */,
       5,    1,   54,    2, 0x08,    3 /* Private */,
       6,    1,   57,    2, 0x08,    5 /* Private */,
       7,    1,   60,    2, 0x08,    7 /* Private */,
       8,    0,   63,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void add_prod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<add_prod *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add_product_clicked(); break;
        case 1: _t->on_Name_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Art_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_price_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_Count_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_add_prod_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (add_prod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add_prod::add_product_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject add_prod::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_add_prod.offsetsAndSize,
    qt_meta_data_add_prod,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_add_prod_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *add_prod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_prod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_add_prod.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int add_prod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void add_prod::add_product_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
