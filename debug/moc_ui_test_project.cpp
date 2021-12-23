/****************************************************************************
** Meta object code from reading C++ file 'ui_test_project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_test_project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_test_project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UI_Test_Project_t {
    QByteArrayData data[17];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UI_Test_Project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UI_Test_Project_t qt_meta_stringdata_UI_Test_Project = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UI_Test_Project"
QT_MOC_LITERAL(1, 16, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(4, 62, 15), // "on_back_clicked"
QT_MOC_LITERAL(5, 78, 25), // "on_close_backpack_clicked"
QT_MOC_LITERAL(6, 104, 21), // "on_shopButton_clicked"
QT_MOC_LITERAL(7, 126, 24), // "on_settingButton_clicked"
QT_MOC_LITERAL(8, 151, 21), // "on_backtogame_clicked"
QT_MOC_LITERAL(9, 173, 27), // "on_shop_close_panel_clicked"
QT_MOC_LITERAL(10, 201, 18), // "on_endgame_clicked"
QT_MOC_LITERAL(11, 220, 24), // "on_select_item_activated"
QT_MOC_LITERAL(12, 245, 4), // "arg1"
QT_MOC_LITERAL(13, 250, 15), // "on_equi_clicked"
QT_MOC_LITERAL(14, 266, 10), // "timerEvent"
QT_MOC_LITERAL(15, 277, 12), // "QTimerEvent*"
QT_MOC_LITERAL(16, 290, 5) // "event"

    },
    "UI_Test_Project\0on_startButton_clicked\0"
    "\0on_stopButton_clicked\0on_back_clicked\0"
    "on_close_backpack_clicked\0"
    "on_shopButton_clicked\0on_settingButton_clicked\0"
    "on_backtogame_clicked\0on_shop_close_panel_clicked\0"
    "on_endgame_clicked\0on_select_item_activated\0"
    "arg1\0on_equi_clicked\0timerEvent\0"
    "QTimerEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UI_Test_Project[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void UI_Test_Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UI_Test_Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_back_clicked(); break;
        case 3: _t->on_close_backpack_clicked(); break;
        case 4: _t->on_shopButton_clicked(); break;
        case 5: _t->on_settingButton_clicked(); break;
        case 6: _t->on_backtogame_clicked(); break;
        case 7: _t->on_shop_close_panel_clicked(); break;
        case 8: _t->on_endgame_clicked(); break;
        case 9: _t->on_select_item_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_equi_clicked(); break;
        case 11: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UI_Test_Project::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_UI_Test_Project.data,
    qt_meta_data_UI_Test_Project,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UI_Test_Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UI_Test_Project::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UI_Test_Project.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UI_Test_Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
