/****************************************************************************
** Meta object code from reading C++ file 'addplayerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SQLite-test/addplayerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addplayerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddPlayerWindow_t {
    QByteArrayData data[20];
    char stringdata[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddPlayerWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddPlayerWindow_t qt_meta_stringdata_AddPlayerWindow = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 10),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 6),
QT_MOC_LITERAL(4, 35, 3),
QT_MOC_LITERAL(5, 39, 25),
QT_MOC_LITERAL(6, 65, 4),
QT_MOC_LITERAL(7, 70, 18),
QT_MOC_LITERAL(8, 89, 28),
QT_MOC_LITERAL(9, 118, 7),
QT_MOC_LITERAL(10, 126, 25),
QT_MOC_LITERAL(11, 152, 28),
QT_MOC_LITERAL(12, 181, 30),
QT_MOC_LITERAL(13, 212, 27),
QT_MOC_LITERAL(14, 240, 25),
QT_MOC_LITERAL(15, 266, 24),
QT_MOC_LITERAL(16, 291, 28),
QT_MOC_LITERAL(17, 320, 20),
QT_MOC_LITERAL(18, 341, 40),
QT_MOC_LITERAL(19, 382, 22)
    },
    "AddPlayerWindow\0setPlayers\0\0getUrl\0"
    "url\0on_PwLineEdit_textChanged\0arg1\0"
    "on_PwVerif_clicked\0on_FirstNameCheckBox_clicked\0"
    "checked\0on_NumeroCheckBox_clicked\0"
    "on_BirthDateCheckBox_clicked\0"
    "on_YearArrivalCheckBox_clicked\0"
    "on_PositionCheckBox_clicked\0"
    "on_MatchsCheckBox_clicked\0"
    "on_GoalsCheckBox_clicked\0"
    "on_PlayerNameEdit_textEdited\0"
    "on_AddButton_clicked\0"
    "on_PlayerListWidget_itemSelectionChanged\0"
    "on_AddPlayer_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddPlayerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   92,    2, 0x08,
       5,    1,   95,    2, 0x08,
       7,    0,   98,    2, 0x08,
       8,    1,   99,    2, 0x08,
      10,    1,  102,    2, 0x08,
      11,    1,  105,    2, 0x08,
      12,    1,  108,    2, 0x08,
      13,    1,  111,    2, 0x08,
      14,    1,  114,    2, 0x08,
      15,    1,  117,    2, 0x08,
      16,    1,  120,    2, 0x08,
      17,    0,  123,    2, 0x08,
      18,    0,  124,    2, 0x08,
      19,    0,  125,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddPlayerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddPlayerWindow *_t = static_cast<AddPlayerWindow *>(_o);
        switch (_id) {
        case 0: _t->setPlayers((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->getUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_PwLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_PwVerif_clicked(); break;
        case 4: _t->on_FirstNameCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_NumeroCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_BirthDateCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_YearArrivalCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_PositionCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_MatchsCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_GoalsCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_PlayerNameEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_AddButton_clicked(); break;
        case 13: _t->on_PlayerListWidget_itemSelectionChanged(); break;
        case 14: _t->on_AddPlayer_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddPlayerWindow::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddPlayerWindow::setPlayers)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AddPlayerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddPlayerWindow.data,
      qt_meta_data_AddPlayerWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddPlayerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddPlayerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddPlayerWindow.stringdata))
        return static_cast<void*>(const_cast< AddPlayerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddPlayerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AddPlayerWindow::setPlayers(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
