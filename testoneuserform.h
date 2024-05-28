#ifndef TESTONEUSERFORM_H
#define TESTONEUSERFORM_H

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class TestOneUserForm;
}

class TestOneUserForm : public QWidget {
    Q_OBJECT

public:
    explicit TestOneUserForm(QWidget *parent = nullptr);
    ~TestOneUserForm();

private:
    Ui::TestOneUserForm *ui;
};

#endif // TESTONEUSERFORM_H
