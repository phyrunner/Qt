#ifndef BOOKMARK_MANAGETOOL_H
#define BOOKMARK_MANAGETOOL_H
#include <QFile>
#include <QDataStream>
#include <QUrl>
#include <QResource>
#include <QDir>

class Book_Mark{
public:
    int page;
    QString text;
    Book_Mark(){};
    Book_Mark(int x, QString s):page(x),text(s){}
};

class Bookmark_ManageTool
{
private:
    QString bookmark_file_path;
    QString currentpath = QDir::currentPath();

public:
    Bookmark_ManageTool();
    void set_file(QUrl file_URL);
    void load_bookmarks();
    void save();
    void add_bookmark(Book_Mark b);
    bool page_marked(int number);
    void remove_mark(int number);
    Book_Mark * bmk;
    int bookmark_count;
};

#endif // BOOKMARK_MANAGETOOL_H
