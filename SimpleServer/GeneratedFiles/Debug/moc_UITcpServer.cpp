/****************************************************************************
** Meta object code from reading C++ file 'UITcpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UITcpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UITcpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UITcpServer_t {
    QByteArrayData data[8];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UITcpServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UITcpServer_t qt_meta_stringdata_UITcpServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UITcpServer"
QT_MOC_LITERAL(1, 12, 22), // "updateConnectedClients"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "size_t"
QT_MOC_LITERAL(4, 43, 3), // "num"
QT_MOC_LITERAL(5, 47, 16), // "sockErrorHandler"
QT_MOC_LITERAL(6, 64, 11), // "socketError"
QT_MOC_LITERAL(7, 76, 18) // "clientDisconnected"

    },
    "UITcpServer\0updateConnectedClients\0\0"
    "size_t\0num\0sockErrorHandler\0socketError\0"
    "clientDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UITcpServer[] = {

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
       5,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void UITcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UITcpServer *_t = static_cast<UITcpServer *>(_o);
        switch (_id) {
        case 0: _t->updateConnectedClients((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->sockErrorHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clientDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UITcpServer::*_t)(size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UITcpServer::updateConnectedClients)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UITcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_UITcpServer.data,
      qt_meta_data_UITcpServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UITcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UITcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UITcpServer.stringdata))
        return static_cast<void*>(const_cast< UITcpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int UITcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
void UITcpServer::updateConnectedClients(size_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
