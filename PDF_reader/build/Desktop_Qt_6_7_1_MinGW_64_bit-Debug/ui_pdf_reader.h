/********************************************************************************
** Form generated from reading UI file 'pdf_reader.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDF_READER_H
#define UI_PDF_READER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtPdfWidgets/QPdfView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDF_reader
{
public:
    QAction *actionopen;
    QAction *actionprevious_page;
    QAction *actionnext_page;
    QAction *actiontest_window;
    QAction *actionzoom_in;
    QAction *actionzoom_out;
    QAction *actionmark_this_page;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QHBoxLayout *horizontalLayout;
    QTreeView *menu_view;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QListView *bookmark_view;
    QPdfView *pdf_view;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuview;
    QMenu *menutest;
    QMenu *menubookmark;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PDF_reader)
    {
        if (PDF_reader->objectName().isEmpty())
            PDF_reader->setObjectName("PDF_reader");
        PDF_reader->resize(669, 572);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/pdf.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        PDF_reader->setWindowIcon(icon);
        actionopen = new QAction(PDF_reader);
        actionopen->setObjectName("actionopen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Image/open.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionprevious_page = new QAction(PDF_reader);
        actionprevious_page->setObjectName("actionprevious_page");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Image/previous.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionprevious_page->setIcon(icon2);
        actionnext_page = new QAction(PDF_reader);
        actionnext_page->setObjectName("actionnext_page");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Image/next.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionnext_page->setIcon(icon3);
        actiontest_window = new QAction(PDF_reader);
        actiontest_window->setObjectName("actiontest_window");
        actionzoom_in = new QAction(PDF_reader);
        actionzoom_in->setObjectName("actionzoom_in");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Image/bigger.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionzoom_in->setIcon(icon4);
        actionzoom_out = new QAction(PDF_reader);
        actionzoom_out->setObjectName("actionzoom_out");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Image/littler.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionzoom_out->setIcon(icon5);
        actionmark_this_page = new QAction(PDF_reader);
        actionmark_this_page->setObjectName("actionmark_this_page");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Image/bookmark.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionmark_this_page->setIcon(icon6);
        centralwidget = new QWidget(PDF_reader);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::West);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        horizontalLayout = new QHBoxLayout(tab_1);
        horizontalLayout->setObjectName("horizontalLayout");
        menu_view = new QTreeView(tab_1);
        menu_view->setObjectName("menu_view");
        menu_view->header()->setVisible(false);

        horizontalLayout->addWidget(menu_view);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        bookmark_view = new QListView(tab_2);
        bookmark_view->setObjectName("bookmark_view");
        bookmark_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(bookmark_view);

        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);
        pdf_view = new QPdfView(splitter);
        pdf_view->setObjectName("pdf_view");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pdf_view->sizePolicy().hasHeightForWidth());
        pdf_view->setSizePolicy(sizePolicy);
        splitter->addWidget(pdf_view);

        verticalLayout->addWidget(splitter);

        PDF_reader->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PDF_reader);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 669, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuview = new QMenu(menubar);
        menuview->setObjectName("menuview");
        menutest = new QMenu(menubar);
        menutest->setObjectName("menutest");
        menubookmark = new QMenu(menubar);
        menubookmark->setObjectName("menubookmark");
        PDF_reader->setMenuBar(menubar);
        statusbar = new QStatusBar(PDF_reader);
        statusbar->setObjectName("statusbar");
        PDF_reader->setStatusBar(statusbar);
        toolBar = new QToolBar(PDF_reader);
        toolBar->setObjectName("toolBar");
        PDF_reader->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuview->menuAction());
        menubar->addAction(menubookmark->menuAction());
        menubar->addAction(menutest->menuAction());
        menufile->addAction(actionopen);
        menuview->addAction(actionprevious_page);
        menuview->addAction(actionnext_page);
        menuview->addAction(actionzoom_in);
        menuview->addAction(actionzoom_out);
        menutest->addAction(actiontest_window);
        menubookmark->addAction(actionmark_this_page);
        toolBar->addAction(actionopen);
        toolBar->addAction(actionprevious_page);
        toolBar->addAction(actionnext_page);
        toolBar->addAction(actionzoom_out);
        toolBar->addAction(actionzoom_in);
        toolBar->addAction(actionmark_this_page);

        retranslateUi(PDF_reader);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PDF_reader);
    } // setupUi

    void retranslateUi(QMainWindow *PDF_reader)
    {
        PDF_reader->setWindowTitle(QCoreApplication::translate("PDF_reader", "PDF_reader", nullptr));
        actionopen->setText(QCoreApplication::translate("PDF_reader", "\346\211\223\345\274\200", nullptr));
        actionprevious_page->setText(QCoreApplication::translate("PDF_reader", "\344\270\212\344\270\200\351\241\265", nullptr));
        actionnext_page->setText(QCoreApplication::translate("PDF_reader", "\344\270\213\344\270\200\351\241\265", nullptr));
        actiontest_window->setText(QCoreApplication::translate("PDF_reader", "test_window", nullptr));
        actionzoom_in->setText(QCoreApplication::translate("PDF_reader", "\346\224\276\345\244\247", nullptr));
        actionzoom_out->setText(QCoreApplication::translate("PDF_reader", "\347\274\251\345\260\217", nullptr));
        actionmark_this_page->setText(QCoreApplication::translate("PDF_reader", "\344\271\246\347\255\276/\345\217\226\346\266\210\344\271\246\347\255\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("PDF_reader", "\347\233\256\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PDF_reader", "\344\271\246\347\255\276", nullptr));
        menufile->setTitle(QCoreApplication::translate("PDF_reader", "\346\226\207\344\273\266", nullptr));
        menuview->setTitle(QCoreApplication::translate("PDF_reader", "\351\241\265\351\235\242", nullptr));
        menutest->setTitle(QCoreApplication::translate("PDF_reader", "test", nullptr));
        menubookmark->setTitle(QCoreApplication::translate("PDF_reader", "\344\271\246\347\255\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("PDF_reader", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDF_reader: public Ui_PDF_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF_READER_H
