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
    QByteArrayData data[25];
    char stringdata[345];
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
QT_MOC_LITERAL(5, 54, 12),
QT_MOC_LITERAL(6, 67, 15),
QT_MOC_LITERAL(7, 83, 17),
QT_MOC_LITERAL(8, 101, 19),
QT_MOC_LITERAL(9, 121, 14),
QT_MOC_LITERAL(10, 136, 12),
QT_MOC_LITERAL(11, 149, 11),
QT_MOC_LITERAL(12, 161, 8),
QT_MOC_LITERAL(13, 170, 10),
QT_MOC_LITERAL(14, 181, 3),
QT_MOC_LITERAL(15, 185, 31),
QT_MOC_LITERAL(16, 217, 16),
QT_MOC_LITERAL(17, 234, 4),
QT_MOC_LITERAL(18, 239, 27),
QT_MOC_LITERAL(19, 267, 8),
QT_MOC_LITERAL(20, 276, 14),
QT_MOC_LITERAL(21, 291, 16),
QT_MOC_LITERAL(22, 308, 13),
QT_MOC_LITERAL(23, 322, 13),
QT_MOC_LITERAL(24, 336, 7)
    },
    "ImageInfoWindow\0playerClicked\0\0"
    "player_name\0playerName\0playerNumero\0"
    "playerFirstName\0playerDateOfBirth\0"
    "playerYearOfArrival\0playerPosition\0"
    "playerMatchs\0playerGoals\0playerId\0"
    "currentUrl\0url\0on_PlayerList_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_add_player_image_clicked\0"
    "urlModif\0openPlayerInfo\0insertPlayerItem\0"
    "openAddPlayer\0updatePlayers\0players\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageInfoWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06,
       4,    1,  107,    2, 0x06,
       5,    1,  110,    2, 0x06,
       6,    1,  113,    2, 0x06,
       7,    1,  116,    2, 0x06,
       8,    1,  119,    2, 0x06,
       9,    1,  122,    2, 0x06,
      10,    1,  125,    2, 0x06,
      11,    1,  128,    2, 0x06,
      12,    1,  131,    2, 0x06,
      13,    1,  134,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      15,    1,  137,    2, 0x08,
      18,    0,  140,    2, 0x08,
      19,    1,  141,    2, 0x0a,
      20,    1,  144,    2, 0x0a,
      21,    1,  147,    2, 0x0a,
      22,    0,  150,    2, 0x0a,
      23,    1,  151,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   24,

       0        // eod
};

void ImageInfoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageInfoWindow *_t = static_cast<ImageInfoWindow *>(_o);
        switch (_id) {
        case 0: _t->playerClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->playerName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->playerNumero((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->playerFirstName((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->playerDateOfBirth((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->playerYearOfArrival((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->playerPosition((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->playerMatchs((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 8: _t->playerGoals((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 9: _t->playerId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->currentUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_PlayerList_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->on_add_player_image_clicked(); break;
        case 13: _t->urlModif((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->openPlayerInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->insertPlayerItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->openAddPlayer(); break;
        case 17: _t->updatePlayers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
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
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerNumero)) {
                *result = 2;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerFirstName)) {
                *result = 3;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerDateOfBirth)) {
                *result = 4;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerYearOfArrival)) {
                *result = 5;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerPosition)) {
                *result = 6;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerMatchs)) {
                *result = 7;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerGoals)) {
                *result = 8;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::playerId)) {
                *result = 9;
            }
        }
        {
            typedef void (ImageInfoWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageInfoWindow::currentUrl)) {
                *result = 10;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
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

// SIGNAL 2
void ImageInfoWindow::playerNumero(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ImageInfoWindow::playerFirstName(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ImageInfoWindow::playerDateOfBirth(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ImageInfoWindow::playerYearOfArrival(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ImageInfoWindow::playerPosition(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ImageInfoWindow::playerMatchs(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ImageInfoWindow::playerGoals(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ImageInfoWindow::playerId(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ImageInfoWindow::currentUrl(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
