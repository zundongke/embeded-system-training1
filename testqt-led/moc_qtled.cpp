/****************************************************************************
** Meta object code from reading C++ file 'qtled.h'
**
** Created: Tue Jun 28 14:30:23 2022
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtled.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      14,    6,    6,    6, 0x0a,
      21,    6,    6,    6, 0x0a,
      35,    6,    6,    6, 0x0a,
      42,    6,    6,    6, 0x0a,
      50,    6,    6,    6, 0x0a,
      58,    6,    6,    6, 0x0a,
      66,    6,    6,    6, 0x0a,
      74,    6,    6,    6, 0x0a,
      83,    6,    6,    6, 0x0a,
      92,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyDlg[] = {
    "MyDlg\0\0stop()\0slow()\0pid_control()\0"
    "high()\0shift()\0open1()\0open2()\0open3()\0"
    "close1()\0close2()\0close3()\0"
};

const QMetaObject MyDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MyDlg,
      qt_meta_data_MyDlg, 0 }
};

const QMetaObject *MyDlg::metaObject() const
{
    return &staticMetaObject;
}

void *MyDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyDlg))
	return static_cast<void*>(const_cast< MyDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int MyDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stop(); break;
        case 1: slow(); break;
        case 2: pid_control(); break;
        case 3: high(); break;
        case 4: shift(); break;
        case 5: open1(); break;
        case 6: open2(); break;
        case 7: open3(); break;
        case 8: close1(); break;
        case 9: close2(); break;
        case 10: close3(); break;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
