#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        //QFile默认支持格式是utf-8
        QString path = QFileDialog::getOpenFileName(this,"打开文件","C:\\");//调用QFileDialog下的函数，选择一个文件，返回文件的路径
        ui->lineEdit->setText(path);//lineEdit是那个行编辑的控件的指针，
        QFile file(path);//QFile创建一个打开文件的对象，传参QString就是要打开的文件的路径
        //QTextCodec* codec = QTextCodec::codecForName("gbk");
        file.open(QIODevice::ReadOnly);//以只读的方式打开文件
        QByteArray array;
        while(!file.atEnd())
        {
            array+=file.readLine();//读取一行
        }
//        QByteArray array = file.readAll();//读取文件
        ui->textEdit->setText(array);
//        ui->textEdit->setText(codec->toUnicode(array));

        file.close();

        //写文件
//        file.open(QIODevice::Append);//用追加的方式写文件
//        file.write("啊啊啊啊啊");
//        file.close();



        //QFileInfo 文件信息类
        QFileInfo info(path);
        qDebug()<<"大小："<<info.size()<<"后缀名："<<info.suffix()<<"文件名："<<info.fileName()<<"文件路径："<<info.path();

    });
}

Widget::~Widget()
{
    delete ui;
}

