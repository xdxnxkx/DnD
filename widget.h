#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void initTable();

private:
    Ui::Widget *ui;

    enum Column {
        SURNAME, NAME, FATHERNAME, TYPE, RANK, POSITION, DATE, GUN, CALIBER, COUNT
    };

public slots:
    void setPageOne();
    void setPageTwo();
    void setPageThree();

private slots:
    void on_stackedWidget_currentChanged(int arg1);
    void on_buttonAdd_clicked();
    void on_buttonDelete_clicked();
    void on_buttonDeleteAll_clicked();
    void on_buttonEdit_clicked();
};

#endif // WIDGET_H
