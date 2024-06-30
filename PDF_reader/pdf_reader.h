#ifndef PDF_READER_H
#define PDF_READER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPdfView>
#include <QPdfPageNavigator>
#include <QPdfPageSelector>
#include <QStringListModel>
#include "test_window_1.h"
#include "zoom_selector.h"
#include "bookmark_managetool.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PDF_reader; }
class QPdfDocument;
class QFileDialog;
QT_END_NAMESPACE

class PDF_reader : public QMainWindow
{
    Q_OBJECT

public:
    PDF_reader(QWidget *parent = nullptr);

    ~PDF_reader();

public slots:
    void page_selected(int page_number);
    void menu_selected(const QModelIndex &index);
    void bookmark_selected(const QModelIndex &index);
    void load_bookmark_view();

private slots:
    void on_actionopen_triggered();
    void open_pdf_file(const QUrl & file_location);

    void on_actionprevious_page_triggered();

    void on_actionnext_page_triggered();

    void on_actiontest_window_triggered();

    void test_(int x);

    void on_actionzoom_in_triggered();

    void on_actionzoom_out_triggered();

    void on_actionmark_this_page_triggered();



private:
    Ui::PDF_reader *ui;

    QPdfDocument *document;
    QPdfPageSelector * page_selector;
    QFileDialog * file_selection = nullptr;
    zoom_selector * z_selector;
    QStringListModel bookmark_model;
    Bookmark_ManageTool bmk_tool;

    Test_Window_1 *f;
};
#endif // PDF_READER_H
