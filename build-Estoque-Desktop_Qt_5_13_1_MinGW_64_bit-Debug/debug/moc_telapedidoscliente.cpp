/****************************************************************************
** Meta object code from reading C++ file 'telapedidoscliente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Estoque/telapedidoscliente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telapedidoscliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TelaPedidosCliente_t {
    QByteArrayData data[15];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelaPedidosCliente_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelaPedidosCliente_t qt_meta_stringdata_TelaPedidosCliente = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TelaPedidosCliente"
QT_MOC_LITERAL(1, 19, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "index"
QT_MOC_LITERAL(4, 54, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(5, 81, 25), // "on_buttonAdiciona_clicked"
QT_MOC_LITERAL(6, 107, 23), // "on_buttonListar_clicked"
QT_MOC_LITERAL(7, 131, 26), // "on_buttonPesquisar_clicked"
QT_MOC_LITERAL(8, 158, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 180, 25), // "on_buttonConfirma_clicked"
QT_MOC_LITERAL(10, 206, 32), // "on_spnQuantidade_editingFinished"
QT_MOC_LITERAL(11, 239, 39), // "on_twCompraCliente_itemSelect..."
QT_MOC_LITERAL(12, 279, 37), // "on_tabPedidosDoCliente_curren..."
QT_MOC_LITERAL(13, 317, 29), // "on_btnConfirmarPedido_clicked"
QT_MOC_LITERAL(14, 347, 27) // "on_btnExcluirPedido_clicked"

    },
    "TelaPedidosCliente\0on_tabWidget_currentChanged\0"
    "\0index\0on_tabWidget_tabBarClicked\0"
    "on_buttonAdiciona_clicked\0"
    "on_buttonListar_clicked\0"
    "on_buttonPesquisar_clicked\0"
    "on_pushButton_clicked\0on_buttonConfirma_clicked\0"
    "on_spnQuantidade_editingFinished\0"
    "on_twCompraCliente_itemSelectionChanged\0"
    "on_tabPedidosDoCliente_currentChanged\0"
    "on_btnConfirmarPedido_clicked\0"
    "on_btnExcluirPedido_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaPedidosCliente[] = {

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
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    0,   80,    2, 0x08 /* Private */,
       6,    0,   81,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TelaPedidosCliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaPedidosCliente *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_buttonAdiciona_clicked(); break;
        case 3: _t->on_buttonListar_clicked(); break;
        case 4: _t->on_buttonPesquisar_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_buttonConfirma_clicked(); break;
        case 7: _t->on_spnQuantidade_editingFinished(); break;
        case 8: _t->on_twCompraCliente_itemSelectionChanged(); break;
        case 9: _t->on_tabPedidosDoCliente_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_btnConfirmarPedido_clicked(); break;
        case 11: _t->on_btnExcluirPedido_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TelaPedidosCliente::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TelaPedidosCliente.data,
    qt_meta_data_TelaPedidosCliente,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TelaPedidosCliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaPedidosCliente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TelaPedidosCliente.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TelaPedidosCliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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