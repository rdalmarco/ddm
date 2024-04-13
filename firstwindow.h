#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QWidget>

namespace Ui {
class firstwindow;
}

class firstwindow : public QWidget
{
    Q_OBJECT

public:
    explicit firstwindow(QWidget *parent = nullptr);
    ~firstwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::firstwindow *ui;
};

#endif // FIRSTWINDOW_H
