#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QWidget>

namespace Ui {
class thirdwindow;
}

class thirdwindow : public QWidget
{
    Q_OBJECT

public:
    explicit thirdwindow(QWidget *parent = nullptr);
    ~thirdwindow();

private:
    Ui::thirdwindow *ui;
};

#endif // THIRDWINDOW_H
