/****************************************************************************
** Meta object code from reading C++ file 'ui_test_project.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ui_test_project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_test_project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UI_Test_Project_t {
    const uint offsetsAndSize[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_UI_Test_Project_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_UI_Test_Project_t qt_meta_stringdata_UI_Test_Project = {
    {
QT_MOC_LITERAL(0, 15), // "UI_Test_Project"
QT_MOC_LITERAL(16, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(62, 15), // "on_back_clicked"
QT_MOC_LITERAL(78, 25), // "on_close_backpack_clicked"
QT_MOC_LITERAL(104, 21), // "on_shopButton_clicked"
QT_MOC_LITERAL(126, 24), // "on_settingButton_clicked"
QT_MOC_LITERAL(151, 21), // "on_backtogame_clicked"
QT_MOC_LITERAL(173, 27) // "on_shop_close_panel_clicked"

    },
    "UI_Test_Project\0on_startButton_clicked\0"
    "\0on_stopButton_clicked\0on_back_clicked\0"
    "on_close_backpack_clicked\0"
    "on_shopButton_clicked\0on_settingButton_clicked\0"
    "on_backtogame_clicked\0on_shop_close_panel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UI_Test_Project[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UI_Test_Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UI_Test_Project *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_back_clicked(); break;
        case 3: _t->on_close_backpack_clicked(); break;
        case 4: _t->on_shopButton_clicked(); break;
        case 5: _t->on_settingButton_clicked(); break;
        case 6: _t->on_backtogame_clicked(); break;
        case 7: _t->on_shop_close_panel_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject UI_Test_Project::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UI_Test_Project.offsetsAndSize,
    qt_meta_data_UI_Test_Project,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_UI_Test_Project_t
, QtPrivate::TypeAndForceComplete<UI_Test_Project, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
