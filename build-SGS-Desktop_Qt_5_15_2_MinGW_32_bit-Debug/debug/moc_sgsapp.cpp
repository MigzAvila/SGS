/****************************************************************************
** Meta object code from reading C++ file 'sgsapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SGS-FINAL-PROJECT/sgsapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sgsapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sgsApp_t {
    QByteArrayData data[18];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sgsApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sgsApp_t qt_meta_stringdata_sgsApp = {
    {
QT_MOC_LITERAL(0, 0, 6), // "sgsApp"
QT_MOC_LITERAL(1, 7, 12), // "sendQuestion"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "QSqlQuery"
QT_MOC_LITERAL(4, 31, 23), // "on_signUpButton_clicked"
QT_MOC_LITERAL(5, 55, 23), // "on_signInButton_clicked"
QT_MOC_LITERAL(6, 79, 6), // "logout"
QT_MOC_LITERAL(7, 86, 31), // "on_forgotPasswordButton_clicked"
QT_MOC_LITERAL(8, 118, 29), // "on_passwordShowButton_clicked"
QT_MOC_LITERAL(9, 148, 29), // "on_logoutTopBarButton_clicked"
QT_MOC_LITERAL(10, 178, 33), // "on_new_Account_pushButton_cli..."
QT_MOC_LITERAL(11, 212, 33), // "on_resetPasswd_pushButton_cli..."
QT_MOC_LITERAL(12, 246, 36), // "on_suspendSetting_pushButton_..."
QT_MOC_LITERAL(13, 283, 31), // "on_dashboard_pushButton_clicked"
QT_MOC_LITERAL(14, 315, 23), // "on_logoutButton_clicked"
QT_MOC_LITERAL(15, 339, 32), // "on_changePassword_Button_clicked"
QT_MOC_LITERAL(16, 372, 25), // "on_addUser_Button_clicked"
QT_MOC_LITERAL(17, 398, 37) // "on_viewProgramSequence_Button..."

    },
    "sgsApp\0sendQuestion\0\0QSqlQuery\0"
    "on_signUpButton_clicked\0on_signInButton_clicked\0"
    "logout\0on_forgotPasswordButton_clicked\0"
    "on_passwordShowButton_clicked\0"
    "on_logoutTopBarButton_clicked\0"
    "on_new_Account_pushButton_clicked\0"
    "on_resetPasswd_pushButton_clicked\0"
    "on_suspendSetting_pushButton_clicked\0"
    "on_dashboard_pushButton_clicked\0"
    "on_logoutButton_clicked\0"
    "on_changePassword_Button_clicked\0"
    "on_addUser_Button_clicked\0"
    "on_viewProgramSequence_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sgsApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sgsApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sgsApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendQuestion((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 1: _t->on_signUpButton_clicked(); break;
        case 2: _t->on_signInButton_clicked(); break;
        case 3: _t->logout(); break;
        case 4: _t->on_forgotPasswordButton_clicked(); break;
        case 5: _t->on_passwordShowButton_clicked(); break;
        case 6: _t->on_logoutTopBarButton_clicked(); break;
        case 7: _t->on_new_Account_pushButton_clicked(); break;
        case 8: _t->on_resetPasswd_pushButton_clicked(); break;
        case 9: _t->on_suspendSetting_pushButton_clicked(); break;
        case 10: _t->on_dashboard_pushButton_clicked(); break;
        case 11: _t->on_logoutButton_clicked(); break;
        case 12: _t->on_changePassword_Button_clicked(); break;
        case 13: _t->on_addUser_Button_clicked(); break;
        case 14: _t->on_viewProgramSequence_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sgsApp::*)(QSqlQuery );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sgsApp::sendQuestion)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sgsApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_sgsApp.data,
    qt_meta_data_sgsApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sgsApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sgsApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sgsApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int sgsApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void sgsApp::sendQuestion(QSqlQuery _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
