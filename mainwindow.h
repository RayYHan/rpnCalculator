#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <sstream>
#include <cstdlib>
#include <QMainWindow>
#include <QtQml>
#include <qstring.h>
#include <QWidget>
#include <QMouseEvent>
#include <QPoint>

#include "mixednumber.h"
#include "myStack.h"
#include "myQueue.h"
#include "parser.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void ceButtonPressed();
    void backButtonPressed();
    void plusButtonPressed();
    void multButtonPressed();
    void slashButtonPressed();
    void minusButtonPressed();
    void spaceButtonPressed();
    void oneButtonPressed();
    void twoButtonPressed();
    void threeButtonPressed();
    void fourButtonPressed();
    void fiveButtonPressed();
    void sixButtonPressed();
    void sevenButtonPressed();
    void eightButtonPressed();
    void nineButtonPressed();
    void zeroButtonPressed();
    void equalButtonPressed();
    void leftParensButtonPressed();
    void rightParensButtonPressed();
    void dotButtonPressed();
    void powerButtonPressed();

private:
    Ui::MainWindow *ui;
    bool equalPressed;
    bool dotInputed;
    bool process(string line, mixedNumber &answer);
    void resetDisplay();
    string rpnOut(myQueue<term> x);

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;


};

#endif // MAINWINDOW_H
