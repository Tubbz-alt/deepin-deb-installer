/****************************************************************************
** Meta object code from reading C++ file 'deblistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deblistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deblistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebListModel_t {
    QByteArrayData data[32];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebListModel_t qt_meta_stringdata_DebListModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DebListModel"
QT_MOC_LITERAL(1, 13, 11), // "lockForAuth"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "lock"
QT_MOC_LITERAL(4, 31, 14), // "workerFinished"
QT_MOC_LITERAL(5, 46, 21), // "workerProgressChanged"
QT_MOC_LITERAL(6, 68, 8), // "progress"
QT_MOC_LITERAL(7, 77, 26), // "transactionProgressChanged"
QT_MOC_LITERAL(8, 104, 16), // "appendOutputInfo"
QT_MOC_LITERAL(9, 121, 4), // "info"
QT_MOC_LITERAL(10, 126, 23), // "packageOperationChanged"
QT_MOC_LITERAL(11, 150, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 162, 5), // "index"
QT_MOC_LITERAL(13, 168, 6), // "status"
QT_MOC_LITERAL(14, 175, 21), // "packageDependsChanged"
QT_MOC_LITERAL(15, 197, 20), // "onChangeOperateIndex"
QT_MOC_LITERAL(16, 218, 7), // "opIndex"
QT_MOC_LITERAL(17, 226, 10), // "AuthCancel"
QT_MOC_LITERAL(18, 237, 14), // "onStartInstall"
QT_MOC_LITERAL(19, 252, 15), // "setCurrentIndex"
QT_MOC_LITERAL(20, 268, 3), // "idx"
QT_MOC_LITERAL(21, 272, 10), // "installAll"
QT_MOC_LITERAL(22, 283, 16), // "uninstallPackage"
QT_MOC_LITERAL(23, 300, 13), // "removePackage"
QT_MOC_LITERAL(24, 314, 13), // "appendPackage"
QT_MOC_LITERAL(25, 328, 14), // "QApt::DebFile*"
QT_MOC_LITERAL(26, 343, 7), // "package"
QT_MOC_LITERAL(27, 351, 26), // "onTransactionErrorOccurred"
QT_MOC_LITERAL(28, 378, 26), // "onTransactionStatusChanged"
QT_MOC_LITERAL(29, 405, 23), // "QApt::TransactionStatus"
QT_MOC_LITERAL(30, 429, 4), // "stat"
QT_MOC_LITERAL(31, 434, 16) // "upWrongStatusRow"

    },
    "DebListModel\0lockForAuth\0\0lock\0"
    "workerFinished\0workerProgressChanged\0"
    "progress\0transactionProgressChanged\0"
    "appendOutputInfo\0info\0packageOperationChanged\0"
    "QModelIndex\0index\0status\0packageDependsChanged\0"
    "onChangeOperateIndex\0opIndex\0AuthCancel\0"
    "onStartInstall\0setCurrentIndex\0idx\0"
    "installAll\0uninstallPackage\0removePackage\0"
    "appendPackage\0QApt::DebFile*\0package\0"
    "onTransactionErrorOccurred\0"
    "onTransactionStatusChanged\0"
    "QApt::TransactionStatus\0stat\0"
    "upWrongStatusRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    0,  107,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       8,    1,  114,    2, 0x06 /* Public */,
      10,    2,  117,    2, 0x06 /* Public */,
      14,    2,  122,    2, 0x06 /* Public */,
      15,    1,  127,    2, 0x06 /* Public */,
      17,    0,  130,    2, 0x06 /* Public */,
      18,    0,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  132,    2, 0x0a /* Public */,
      21,    0,  135,    2, 0x0a /* Public */,
      22,    1,  136,    2, 0x0a /* Public */,
      23,    1,  139,    2, 0x0a /* Public */,
      24,    1,  142,    2, 0x0a /* Public */,
      27,    0,  145,    2, 0x0a /* Public */,
      28,    1,  146,    2, 0x0a /* Public */,
      31,    0,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Bool, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,

       0        // eod
};

void DebListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebListModel *_t = static_cast<DebListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lockForAuth((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->workerFinished(); break;
        case 2: _t->workerProgressChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->transactionProgressChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->appendOutputInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->packageOperationChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->packageDependsChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->onChangeOperateIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->AuthCancel(); break;
        case 9: _t->onStartInstall(); break;
        case 10: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->installAll(); break;
        case 12: _t->uninstallPackage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 13: _t->removePackage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: { bool _r = _t->appendPackage((*reinterpret_cast< QApt::DebFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->onTransactionErrorOccurred(); break;
        case 16: _t->onTransactionStatusChanged((*reinterpret_cast< QApt::TransactionStatus(*)>(_a[1]))); break;
        case 17: _t->upWrongStatusRow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebListModel::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::lockForAuth)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::workerFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::workerProgressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::transactionProgressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::appendOutputInfo)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(const QModelIndex & , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::packageOperationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(const QModelIndex & , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::packageDependsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::onChangeOperateIndex)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::AuthCancel)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DebListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebListModel::onStartInstall)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_DebListModel.data,
      qt_meta_data_DebListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DebListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void DebListModel::lockForAuth(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebListModel::workerFinished()const
{
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DebListModel::workerProgressChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebListModel::transactionProgressChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebListModel::appendOutputInfo(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DebListModel::packageOperationChanged(const QModelIndex & _t1, int _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DebListModel::packageDependsChanged(const QModelIndex & _t1, int _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< DebListModel *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DebListModel::onChangeOperateIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DebListModel::AuthCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DebListModel::onStartInstall()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE