#include "testoneuserform.h"
#include "ui_testoneuserform.h"

TestOneUserForm::TestOneUserForm(QWidget *parent) :
    QWidget(parent), ui(new Ui::TestOneUserForm) {
    ui->setupUi(this);

    // Move and resize the window
    QDesktopWidget widget;
    QRect screenGeometry = widget.screenGeometry(0);
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    this->move((width - this->width()) / 2 - 1920,
               (height - this->height()) / 2 - 1080 - 30);

}

TestOneUserForm::~TestOneUserForm() {
    delete ui;
}
