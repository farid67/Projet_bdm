/****************************************************************************
** Meta object code from reading C++ file 'imageinfowindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SQLite-test/imageinfowindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageinfowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageInfoWindow_t {
    QByteArrayData data[12];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ImageInfoWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ImageInfoWindow_t qt_meta_stringdata_ImageInfoWindow = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 11),
QT_MOC_LITERAL(4, 43, 10),
QT_MOC_LITERAL(5, 54, 31),
QT_MOC_LITERAL(6, 86, 16),
QT_MOC_LITERAL(7, 103, 4),
QT_MOC_LITERAL(8, 108, 8),
QT_MOC_LITERAL(9, 117, 3),
QT_MOC_LITERAL(10, 121, 14),
QT_MOC_LITERAL(11, 136, 16)
    },
    "ImageInfoWindow\0playerClicked\0\0"
    "player_name\0playerName\0"
    "on_PlayerList_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0urlModif\0url\0"
    "openPlayerInfo\0insertPlayerItem\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageInfoWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    1,   47,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x08,
       8,    1,   53,    2, 0x0a,
      10,    1,   56,    2, 0x0a,
      11,    1,   59,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void ImageInfoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageInfoWindow *_t = static_cast<ImageInfoWindow *>(_o);
        switch (_id) {
        case 0: _t->playerClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->playerName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_PlayerList_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->urlModif((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->openPlayerInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->insertPlayerItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageInfoWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerName)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ImageInfoWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageInfoWindow.data,
      qt_meta_data_ImageInfoWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ImageInfoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageInfoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageInfoWindow.stringdata))
        return static_cast<void*>(const_cast< ImageInfoWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageInfoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ImageInfoWindow::playerClicked(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageInfoWindow::playerName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
