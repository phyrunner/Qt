#ifndef TEST_WINDOW_1_H
#define TEST_WINDOW_1_H

#include <QMainWindow>

namespace Ui {
class Test_Window_1;
}

class Test_Window_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Test_Window_1(QWidget *parent = nullptr);
    ~Test_Window_1();

signals:
    void clicked_testButton(int x);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Test_Window_1 *ui;
};

#endif // TEST_WINDOW_1_H
