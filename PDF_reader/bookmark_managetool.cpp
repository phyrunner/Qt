#include "bookmark_managetool.h"

const int MAX_BOOKMARK_NUMBERS = 101;
const int MAX_BOOKMARK_TEXT = 505;

Bookmark_ManageTool::Bookmark_ManageTool()
{
    bmk = new Book_Mark[MAX_BOOKMARK_NUMBERS];
}

void Bookmark_ManageTool::set_file(QUrl file_URL){
    QString file_name = file_URL.fileName();
    bookmark_file_path = currentpath + "/" + file_name + ".bkm";
    load_bookmarks();
}

void Bookmark_ManageTool::add_bookmark(Book_Mark b){
    if(bookmark_count >= MAX_BOOKMARK_NUMBERS - 1){
        //TODO: 不允许再添加新的bookmark了
        return;
    }
    bmk[bookmark_count] = b;
    bookmark_count ++;
};

void Bookmark_ManageTool::load_bookmarks(){
    QFile file(bookmark_file_path);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text) || !file.exists()){
        //TODO : 打开失败报错(或文件本身就不存在）
        bookmark_count = 0;
        return;
    }
    QTextStream fs(&file);
    fs >> bookmark_count;
    for(int i = 0; i<bookmark_count; ++i){
        fs >> bmk[i].page;
        fs.readLine(MAX_BOOKMARK_TEXT); //读掉末尾的换行符
        fs.readLineInto(&bmk[i].text,MAX_BOOKMARK_TEXT);
    }

}

void Bookmark_ManageTool::save(){
    QFile file(bookmark_file_path);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
        // TODO: 打开失败,报错
        return;
    }
    QTextStream fs(&file);
    fs << bookmark_count << Qt::endl;
    for(int i = 0; i<bookmark_count; ++i){
        fs << bmk[i].page << Qt::endl << bmk[i].text << Qt::endl;
    }
}

bool Bookmark_ManageTool:: page_marked(int number){
    for(int i = 0; i< bookmark_count;++i){
        if(bmk[i].page == number) return true;
    }
    return false;
}

void Bookmark_ManageTool:: remove_mark(int number){
    for(int i = 0; i< bookmark_count;++i){
        if(bmk[i].page == number){
            for(int j = i; j<bookmark_count -1; ++j){
                bmk[j] = bmk[j+1];
            }
            bookmark_count --;
            return;
        }
    }
}
