/****************************************************************************
** Meta object code from reading C++ file 'server_con.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt1/server_con.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server_con.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_server_con_t {
    const uint offsetsAndSize[12];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_server_con_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_server_con_t qt_meta_stringdata_server_con = {
    {
QT_MOC_LITERAL(0, 10), // "server_con"
QT_MOC_LITERAL(11, 5), // "wrong"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 3), // "con"
QT_MOC_LITERAL(22, 9), // "confirmIP"
QT_MOC_LITERAL(32, 7) // "wrongIP"

    },
    "server_con\0wrong\0\0con\0confirmIP\0wrongIP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_server_con[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    0 /* Public */,
       3,    0,   39,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x0a,    2 /* Public */,
       5,    0,   41,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void server_con::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<server_con *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wrong(); break;
        case 1: _t->con(); break;
        case 2: _t->confirmIP(); break;
        case 3: _t->wrongIP(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (server_con::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_con::wrong)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (server_con::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_con::con)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject server_con::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_server_con.offsetsAndSize,
    qt_meta_data_server_con,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_server_con_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *server_con::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *server_con::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_server_con.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int server_con::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void server_con::wrong()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void server_con::con()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
