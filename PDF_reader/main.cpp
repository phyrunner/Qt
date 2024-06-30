#include "pdf_reader.h"

#include <QApplication>
#include "bookmark_managetool.h"


int main(int argc, char *argv[])
{
//    Bookmark_ManageTool t;
//    QUrl u("https://a/kabikabi.pdf");
//    t.set_file(u);
//    t.bookmark_count = 2;
//    t.bmk[0] = Book_Mark(3,QString("test one"));
//    t.bmk[1] = Book_Mark(13,QString("test two!"));
//    t.save();

//    Bookmark_ManageTool q;
//    q.set_file(u);
//    for(int i= 0; i<q.bookmark_count ;++i){
//        qDebug() << q.bmk[i].page << q.bmk[i].text;
//    }


    QApplication a(argc, argv);
    PDF_reader w;
    w.show();
    return a.exec();
}
