/****************************************************************************
** Meta object code from reading C++ file 'edit_prod.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../edit_prod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_prod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edit_prod_t {
    const uint offsetsAndSize[18];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_edit_prod_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_edit_prod_t qt_meta_stringdata_edit_prod = {
    {
QT_MOC_LITERAL(0, 9), // "edit_prod"
QT_MOC_LITERAL(10, 17), // "edit_prod_clicked"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 28), // "on_Name_edit_prod_textEdited"
QT_MOC_LITERAL(58, 4), // "arg1"
QT_MOC_LITERAL(63, 27), // "on_Art_edit_prod_textEdited"
QT_MOC_LITERAL(91, 29), // "on_price_edit_prod_textEdited"
QT_MOC_LITERAL(121, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(144, 27) // "on_edit_prod_button_clicked"

    },
    "edit_prod\0edit_prod_clicked\0\0"
    "on_Name_edit_prod_textEdited\0arg1\0"
    "on_Art_edit_prod_textEdited\0"
    "on_price_edit_prod_textEdited\0"
    "on_lineEdit_textEdited\0"
    "on_edit_prod_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edit_prod[] = {

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

void edit_prod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<edit_prod *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->edit_prod_clicked(); break;
        case 1: _t->on_Name_edit_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Art_edit_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_price_edit_prod_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_edit_prod_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (edit_prod::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&edit_prod::edit_prod_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject edit_prod::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_edit_prod.offsetsAndSize,
    qt_meta_data_edit_prod,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_edit_prod_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *edit_prod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edit_prod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edit_prod.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edit_prod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void edit_prod::edit_prod_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
