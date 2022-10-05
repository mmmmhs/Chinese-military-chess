/****************************************************************************
** Meta object code from reading C++ file 'chess_piece.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt1/chess_piece.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chess_piece.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chess_piece_t {
    const uint offsetsAndSize[26];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_chess_piece_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_chess_piece_t qt_meta_stringdata_chess_piece = {
    {
QT_MOC_LITERAL(0, 11), // "chess_piece"
QT_MOC_LITERAL(12, 7), // "clicked"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 11), // "is_selected"
QT_MOC_LITERAL(33, 6), // "is_aim"
QT_MOC_LITERAL(40, 7), // "suc_ofo"
QT_MOC_LITERAL(48, 7), // "suc_cap"
QT_MOC_LITERAL(56, 7), // "suc_mov"
QT_MOC_LITERAL(64, 7), // "getflag"
QT_MOC_LITERAL(72, 6), // "select"
QT_MOC_LITERAL(79, 3), // "aim"
QT_MOC_LITERAL(83, 7), // "set_aim"
QT_MOC_LITERAL(91, 7) // "prepare"

    },
    "chess_piece\0clicked\0\0is_selected\0"
    "is_aim\0suc_ofo\0suc_cap\0suc_mov\0getflag\0"
    "select\0aim\0set_aim\0prepare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chess_piece[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    0 /* Public */,
       3,    0,   81,    2, 0x06,    1 /* Public */,
       4,    0,   82,    2, 0x06,    2 /* Public */,
       5,    0,   83,    2, 0x06,    3 /* Public */,
       6,    0,   84,    2, 0x06,    4 /* Public */,
       7,    0,   85,    2, 0x06,    5 /* Public */,
       8,    0,   86,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   87,    2, 0x0a,    7 /* Public */,
      10,    0,   88,    2, 0x0a,    8 /* Public */,
      11,    0,   89,    2, 0x0a,    9 /* Public */,
      12,    0,   90,    2, 0x0a,   10 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chess_piece::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chess_piece *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->is_selected(); break;
        case 2: _t->is_aim(); break;
        case 3: _t->suc_ofo(); break;
        case 4: _t->suc_cap(); break;
        case 5: _t->suc_mov(); break;
        case 6: _t->getflag(); break;
        case 7: _t->select(); break;
        case 8: _t->aim(); break;
        case 9: _t->set_aim(); break;
        case 10: _t->prepare(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::is_selected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::is_aim)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::suc_ofo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::suc_cap)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::suc_mov)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (chess_piece::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chess_piece::getflag)) {
                *result = 6;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject chess_piece::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_chess_piece.offsetsAndSize,
    qt_meta_data_chess_piece,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_chess_piece_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *chess_piece::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chess_piece::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chess_piece.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int chess_piece::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void chess_piece::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void chess_piece::is_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void chess_piece::is_aim()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void chess_piece::suc_ofo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void chess_piece::suc_cap()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void chess_piece::suc_mov()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void chess_piece::getflag()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
