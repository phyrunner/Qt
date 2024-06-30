#include "test_window_1.h"
#include "ui_test_window_1.h"

Test_Window_1::Test_Window_1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Test_Window_1)
{
    ui->setupUi(this);
}

Test_Window_1::~Test_Window_1()
{
    delete ui;
}

void Test_Window_1::on_pushButton_clicked()
{
    emit clicked_testButton(4);
}

