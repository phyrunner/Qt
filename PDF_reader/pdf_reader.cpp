#include "pdf_reader.h"
#include "ui_pdf_reader.h"

#include "test_window_1.h"

#include <QPdfDocument>
#include <QStandardPaths>
#include <QMessageBox>
#include <QPdfBookmarkModel>
#include <QStringList>
#include <QInputDialog>

PDF_reader::PDF_reader(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PDF_reader)
    , document (new QPdfDocument(this))
    , page_selector(new QPdfPageSelector(this))
    , z_selector(new zoom_selector(this))
{
    ui->setupUi(this);

    //添加ui图标
    //ui->actionopen->setIcon(QIcon(":/Image/open.jpg"));
    //

    f = new Test_Window_1(this);

    ui->pdf_view->setDocument(document); // 把pdf_view显示的文件设置成document.

    ui->toolBar->insertWidget(ui->actionnext_page, page_selector); //把页码选择插入到工具栏。

    page_selector->setDocument(document); //页面选择器

    connect(page_selector, &QPdfPageSelector::currentPageChanged, this, &PDF_reader::page_selected);

    auto nav = ui->pdf_view->pageNavigator();
    connect(nav, &QPdfPageNavigator::currentPageChanged, page_selector, &QPdfPageSelector::setCurrentPage);

    //自带目录的pdf 可以读取目录显示在左栏
    QPdfBookmarkModel *menu_model = new QPdfBookmarkModel(this);
    menu_model->setDocument(document);
    ui->menu_view->setModel(menu_model);
    connect(ui->menu_view, &QAbstractItemView::activated, this, &PDF_reader::menu_selected);


    connect(f, &Test_Window_1::clicked_testButton, this, &PDF_reader::test_);

    //zoom _ selection

    ui->toolBar->insertWidget(ui->actionzoom_out, z_selector);
    connect(z_selector, &zoom_selector::zoom_modeChange, ui->pdf_view, &QPdfView::setZoomMode);
    connect(z_selector, &zoom_selector::zoom_factorChange, ui->pdf_view, &QPdfView::setZoomFactor);
    connect(ui->pdf_view, &QPdfView::zoomFactorChanged,z_selector, &zoom_selector::set_zoom);

    //bookmark
    ui->bookmark_view->setModel(&bookmark_model);
    connect(ui->bookmark_view,&QListView::clicked,this,&PDF_reader::bookmark_selected);

}

PDF_reader::~PDF_reader()
{
    delete ui;
}

void PDF_reader::test_(int x){
    page_selected(x);
    f->close();
}

void PDF_reader::page_selected(int page_number){
    auto nav = ui->pdf_view->pageNavigator();
    nav->jump(page_number, {}, nav->currentZoom());
}

void PDF_reader::menu_selected(const QModelIndex &index)
{
    if (!index.isValid())return;

    const int page_number = index.data(int(QPdfBookmarkModel::Role::Page)).toInt();
    const qreal zoom_lvl = index.data(int(QPdfBookmarkModel::Role::Level)).toReal();
    ui->pdf_view->pageNavigator()->jump(page_number, {}, zoom_lvl);
}

void PDF_reader::open_pdf_file(const QUrl & file_location){
    if (file_location.isLocalFile()) {
        document->load(file_location.toLocalFile()); //是合法的地址则让document载入该pdf文件。
        bmk_tool.set_file(file_location);
        load_bookmark_view();
        page_selected(0);
    } else {
        const QString err_message = tr("路径\"%1\"不是合法的地址！").arg(file_location.toString()); //如果不是合法的地址则报错。
        QMessageBox::critical(this, tr("错误"), err_message);
    }
}

void PDF_reader::on_actionopen_triggered()
{
    if (file_selection == nullptr) {
        file_selection = new QFileDialog(this, tr("选择pdf文件"),QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
        file_selection->setAcceptMode(QFileDialog::AcceptOpen);
        file_selection->setMimeTypeFilters({"application/pdf"}); //只允许选择pdf类型的文件
    }

    if (file_selection->exec() == QDialog::Accepted) { //选中之后
        const QUrl location_of_file = file_selection->selectedUrls().constFirst();
        if (location_of_file.isValid())
            open_pdf_file(location_of_file);
    }
}


void PDF_reader::on_actionprevious_page_triggered()
{
    if(document->pageCount() == 0 ) return;
    auto nav = ui->pdf_view->pageNavigator();
    if(nav->currentPage() == 0) return;
    nav->jump(nav->currentPage() - 1, {}, nav->currentZoom()); //第一页不允许前翻
}



void PDF_reader::on_actionnext_page_triggered()
{
    if(document->pageCount()==0) return;
    auto nav = ui->pdf_view->pageNavigator();
    if(nav->currentPage() == document->pageCount() - 1) return; //最后一页不允许后翻
    nav->jump(nav->currentPage() + 1, {}, nav->currentZoom());
}


void PDF_reader::on_actiontest_window_triggered()
{
    f->show();
}


void PDF_reader::on_actionzoom_in_triggered()
{
    ui->pdf_view->setZoomFactor(ui->pdf_view->zoomFactor() * qreal(1.1));
}


void PDF_reader::on_actionzoom_out_triggered()
{
    ui->pdf_view->setZoomFactor(ui->pdf_view->zoomFactor() / qreal(1.1));
}


void PDF_reader::on_actionmark_this_page_triggered()
{
    if(document->pageCount() == 0) return;
    auto nav = ui->pdf_view->pageNavigator();
    int current_page = nav->currentPage();
    if(bmk_tool.page_marked(current_page)){ //如果已经有书签过，就取消书签。
        bmk_tool.remove_mark(current_page);
    }else{
    QString bookmark_text = QInputDialog::getText(this,"添加书签","请输入书签名");
    bmk_tool.add_bookmark(Book_Mark(current_page,bookmark_text));
    }
    load_bookmark_view();
    bmk_tool.save();
}

void PDF_reader::bookmark_selected(const QModelIndex &index){
    page_selected(bmk_tool.bmk[index.row()].page);
}

void PDF_reader::load_bookmark_view(){
    QStringList book_mark_text;
    for(int i = 0 ;i< bmk_tool.bookmark_count; ++i){
        book_mark_text << bmk_tool.bmk[i].text;
    }
    bookmark_model.setStringList(book_mark_text);
}
