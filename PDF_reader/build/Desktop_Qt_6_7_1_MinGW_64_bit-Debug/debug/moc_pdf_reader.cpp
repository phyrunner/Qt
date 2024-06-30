/****************************************************************************
** Meta object code from reading C++ file 'pdf_reader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pdf_reader.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdf_reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPDF_readerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPDF_readerENDCLASS = QtMocHelpers::stringData(
    "PDF_reader",
    "page_selected",
    "",
    "page_number",
    "menu_selected",
    "QModelIndex",
    "index",
    "bookmark_selected",
    "load_bookmark_view",
    "on_actionopen_triggered",
    "open_pdf_file",
    "file_location",
    "on_actionprevious_page_triggered",
    "on_actionnext_page_triggered",
    "on_actiontest_window_triggered",
    "test_",
    "x",
    "on_actionzoom_in_triggered",
    "on_actionzoom_out_triggered",
    "on_actionmark_this_page_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPDF_readerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x0a,    1 /* Public */,
       4,    1,   95,    2, 0x0a,    3 /* Public */,
       7,    1,   98,    2, 0x0a,    5 /* Public */,
       8,    0,  101,    2, 0x0a,    7 /* Public */,
       9,    0,  102,    2, 0x08,    8 /* Private */,
      10,    1,  103,    2, 0x08,    9 /* Private */,
      12,    0,  106,    2, 0x08,   11 /* Private */,
      13,    0,  107,    2, 0x08,   12 /* Private */,
      14,    0,  108,    2, 0x08,   13 /* Private */,
      15,    1,  109,    2, 0x08,   14 /* Private */,
      17,    0,  112,    2, 0x08,   16 /* Private */,
      18,    0,  113,    2, 0x08,   17 /* Private */,
      19,    0,  114,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PDF_reader::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSPDF_readerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPDF_readerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPDF_readerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PDF_reader, std::true_type>,
        // method 'page_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'menu_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'bookmark_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'load_bookmark_view'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionopen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open_pdf_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'on_actionprevious_page_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionnext_page_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontest_window_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionzoom_in_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionzoom_out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionmark_this_page_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PDF_reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PDF_reader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->page_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->menu_selected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->bookmark_selected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->load_bookmark_view(); break;
        case 4: _t->on_actionopen_triggered(); break;
        case 5: _t->open_pdf_file((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 6: _t->on_actionprevious_page_triggered(); break;
        case 7: _t->on_actionnext_page_triggered(); break;
        case 8: _t->on_actiontest_window_triggered(); break;
        case 9: _t->test_((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_actionzoom_in_triggered(); break;
        case 11: _t->on_actionzoom_out_triggered(); break;
        case 12: _t->on_actionmark_this_page_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *PDF_reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDF_reader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPDF_readerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PDF_reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
