#ifndef TESTTWOUSERFORM_H
#define TESTTWOUSERFORM_H

#include <QWidget>
#include <QDesktopWidget>

// Qt headers for 3D rendering
#include <Qt3DCore>
#include <Qt3DRender>
#include <Qt3DExtras>

#include "scenemodifier.h"

namespace Ui {
class TestTwoUserForm;
}

class TestTwoUserForm : public QWidget {
    Q_OBJECT

public:
    explicit TestTwoUserForm(QWidget *parent = nullptr);
    ~TestTwoUserForm();

    void Initialize_3DRendering();
    SceneModifier* get_Model();

private:
    Ui::TestTwoUserForm *ui;

    // Variables for hand-rendering Qwidget
    int h_hand;
    int w_hand;
    QWidget* Container_hand;
    SceneModifier *modifier;
};

#endif // TESTTWOUSERFORM_H
