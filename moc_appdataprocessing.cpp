/****************************************************************************
** Meta object code from reading C++ file 'appdataprocessing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "appdataprocessing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appdataprocessing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppDataProcessing_t {
    QByteArrayData data[20];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppDataProcessing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppDataProcessing_t qt_meta_stringdata_AppDataProcessing = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AppDataProcessing"
QT_MOC_LITERAL(1, 18, 14), // "onCpuDataReady"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "cpuUsage"
QT_MOC_LITERAL(4, 43, 7), // "cpuTemp"
QT_MOC_LITERAL(5, 51, 14), // "onGpuDataReady"
QT_MOC_LITERAL(6, 66, 7), // "gpuTemp"
QT_MOC_LITERAL(7, 74, 14), // "onRamDataReady"
QT_MOC_LITERAL(8, 89, 8), // "ramUsage"
QT_MOC_LITERAL(9, 98, 10), // "ramTotalMB"
QT_MOC_LITERAL(10, 109, 14), // "ramAvailableMB"
QT_MOC_LITERAL(11, 124, 14), // "onSsdDataReady"
QT_MOC_LITERAL(12, 139, 7), // "ssdTemp"
QT_MOC_LITERAL(13, 147, 8), // "ssdUsage"
QT_MOC_LITERAL(14, 156, 18), // "onNetworkDataReady"
QT_MOC_LITERAL(15, 175, 4), // "myIP"
QT_MOC_LITERAL(16, 180, 11), // "uploadSpeed"
QT_MOC_LITERAL(17, 192, 13), // "downloadSpeed"
QT_MOC_LITERAL(18, 206, 19), // "startDataProcessing"
QT_MOC_LITERAL(19, 226, 13) // "onTimerExceed"

    },
    "AppDataProcessing\0onCpuDataReady\0\0"
    "cpuUsage\0cpuTemp\0onGpuDataReady\0gpuTemp\0"
    "onRamDataReady\0ramUsage\0ramTotalMB\0"
    "ramAvailableMB\0onSsdDataReady\0ssdTemp\0"
    "ssdUsage\0onNetworkDataReady\0myIP\0"
    "uploadSpeed\0downloadSpeed\0startDataProcessing\0"
    "onTimerExceed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppDataProcessing[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,
       7,    3,   57,    2, 0x06 /* Public */,
      11,    2,   64,    2, 0x06 /* Public */,
      14,    3,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,   76,    2, 0x0a /* Public */,
      19,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    8,    9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double,   15,   16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppDataProcessing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppDataProcessing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCpuDataReady((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->onGpuDataReady((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onRamDataReady((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->onSsdDataReady((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->onNetworkDataReady((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->startDataProcessing(); break;
        case 6: _t->onTimerExceed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppDataProcessing::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDataProcessing::onCpuDataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppDataProcessing::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDataProcessing::onGpuDataReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppDataProcessing::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDataProcessing::onRamDataReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppDataProcessing::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDataProcessing::onSsdDataReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppDataProcessing::*)(QString , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppDataProcessing::onNetworkDataReady)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppDataProcessing::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AppDataProcessing.data,
    qt_meta_data_AppDataProcessing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppDataProcessing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppDataProcessing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppDataProcessing.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppDataProcessing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AppDataProcessing::onCpuDataReady(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppDataProcessing::onGpuDataReady(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppDataProcessing::onRamDataReady(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AppDataProcessing::onSsdDataReady(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AppDataProcessing::onNetworkDataReady(QString _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
