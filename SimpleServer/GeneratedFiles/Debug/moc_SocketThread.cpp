/****************************************************************************
** Meta object code from reading C++ file 'SocketThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SocketThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocketThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SocketThread_t {
    QByteArrayData data[6];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketThread_t qt_meta_stringdata_SocketThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SocketThread"
QT_MOC_LITERAL(1, 13, 9), // "sockError"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "socketError"
QT_MOC_LITERAL(4, 36, 16), // "readSocketBuffer"
QT_MOC_LITERAL(5, 53, 10) // "disconnect"

    },
    "SocketThread\0sockError\0\0socketError\0"
    "readSocketBuffer\0disconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketThread *_t = static_cast<SocketThread *>(_o);
        switch (_id) {
        case 0: _t->sockError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->readSocketBuffer(); break;
        case 2: _t->disconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketThread::sockError)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SocketThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SocketThread.data,
      qt_meta_data_SocketThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SocketThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SocketThread.stringdata))
        return static_cast<void*>(const_cast< SocketThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SocketThread::sockError(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
