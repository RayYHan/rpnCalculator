#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_1->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    equalPressed = false;
    dotInputed = false;
    connect(ui->ceButton,SIGNAL(clicked()),this,SLOT(ceButtonPressed()));
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backButtonPressed()));
    connect(ui->spaceButton,SIGNAL(clicked()),this,SLOT(spaceButtonPressed()));
    connect(ui->dotButton,SIGNAL(clicked()),this,SLOT(dotButtonPressed()));
    connect(ui->leftParensButton,SIGNAL(clicked()),this,SLOT(leftParensButtonPressed()));
    connect(ui->rightParensButton,SIGNAL(clicked()),this,SLOT(rightParensButtonPressed()));
    connect(ui->plusButton,SIGNAL(clicked()),this,SLOT(plusButtonPressed()));
    connect(ui->minusButton,SIGNAL(clicked()),this,SLOT(minusButtonPressed()));
    connect(ui->multButton,SIGNAL(clicked()),this,SLOT(multButtonPressed()));
    connect(ui->slashButton,SIGNAL(clicked()),this,SLOT(slashButtonPressed()));
    connect(ui->equalButton,SIGNAL(clicked()),this,SLOT(equalButtonPressed()));
    connect(ui->oneButton,SIGNAL(clicked()),this,SLOT(oneButtonPressed()));
    connect(ui->twoButton,SIGNAL(clicked()),this,SLOT(twoButtonPressed()));
    connect(ui->threeButton,SIGNAL(clicked()),this,SLOT(threeButtonPressed()));
    connect(ui->fourButton,SIGNAL(clicked()),this,SLOT(fourButtonPressed()));
    connect(ui->fiveButton,SIGNAL(clicked()),this,SLOT(fiveButtonPressed()));
    connect(ui->sixButton,SIGNAL(clicked()),this,SLOT(sixButtonPressed()));
    connect(ui->sevenButton,SIGNAL(clicked()),this,SLOT(sevenButtonPressed()));
    connect(ui->eightButton,SIGNAL(clicked()),this,SLOT(eightButtonPressed()));
    connect(ui->nineButton,SIGNAL(clicked()),this,SLOT(nineButtonPressed()));
    connect(ui->zeroButton,SIGNAL(clicked()),this,SLOT(zeroButtonPressed()));
    connect(ui->closeButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->powerButton,SIGNAL(clicked()),this, SLOT(powerButtonPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void MainWindow::resetDisplay()
{
    if(equalPressed)
    {
        equalPressed = false;
        ui->lineEdit_1->setText("0");
        ui->lineEdit_2->setText("0");
        ui->lineEdit_3->setText("0");
    }
}

void MainWindow::zeroButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "0");
    else
        ui->lineEdit_1->setText("0");
}

void MainWindow::oneButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "1");
    else
        ui->lineEdit_1->setText("1");
}

void MainWindow::twoButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "2");
    else
        ui->lineEdit_1->setText("2");
}

void MainWindow::threeButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "3");
    else
        ui->lineEdit_1->setText("3");
}

void MainWindow::fourButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "4");
    else
        ui->lineEdit_1->setText("4");
}

void MainWindow::fiveButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "5");
    else
        ui->lineEdit_1->setText("5");
}

void MainWindow::sixButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "6");
    else
        ui->lineEdit_1->setText("6");
}

void MainWindow::sevenButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "7");
    else
        ui->lineEdit_1->setText("7");
}

void MainWindow::eightButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "8");
    else
        ui->lineEdit_1->setText("8");
}

void MainWindow::nineButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "9");
    else
        ui->lineEdit_1->setText("9");
}

void MainWindow::ceButtonPressed()
{
    ui->lineEdit_1->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    dotInputed = false;
}

void MainWindow::backButtonPressed()
{
    if(ui->lineEdit_1->text().length() == 1)
        ui->lineEdit_1->setText("0");
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->backspace();
}

void MainWindow::plusButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "+");
    dotInputed = false;
}

void MainWindow::minusButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "-");
    else
        ui->lineEdit_1->setText("-");
    dotInputed = false;
}

void MainWindow::multButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "*");
    dotInputed = false;
}

void MainWindow::slashButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "/");
    dotInputed = false;
}

void MainWindow::leftParensButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "(");
    else
        ui->lineEdit_1->setText("(");
}

void MainWindow::rightParensButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + ")");
    else
        ui->lineEdit_1->setText(")");
}

void MainWindow::spaceButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + " ");
    else
        ui->lineEdit_1->setText(" ");
}

void MainWindow::dotButtonPressed()
{
    resetDisplay();
    QString s = ui->lineEdit_1->text();
    QCharRef c = s[s.length() - 1];
    if(!dotInputed)
    {
        if(ui->lineEdit_1->text() == "0")
            ui->lineEdit_1->setText(".");
        else
        if(c != '.')
            ui->lineEdit_1->setText(ui->lineEdit_1->text() + ".");
    dotInputed = true;
    }
}

void MainWindow::powerButtonPressed()
{
    resetDisplay();
    if(ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->setText(ui->lineEdit_1->text() + "^");
    else
        ui->lineEdit_1->setText("^");
    dotInputed = false;
}

void MainWindow::equalButtonPressed()
{
    stringstream st, ss;
    string line = ui->lineEdit_1->text().toStdString();
    myQueue<term> rpnQueue, temp, x;
    term termNow;
    myStack<mixedNumber> mixedStack;
    mixedNumber one, two, answer;
    bool invalidInput = false;
    char op;
    if(parse(line, rpnQueue))
    {
        temp = rpnQueue;
        while(!temp.empty())
        {
            temp>>termNow;
            if(termNow.typeOp)
            {
                st << *static_cast<char*>(termNow.value);
            }
            else
            {
                st << *static_cast<mixedNumber*>(termNow.value) << ' ';
            }
        }
        ui->lineEdit_2->setText(QString::fromStdString(st.str()));
        x = rpnQueue;
        while(!x.empty())
        {
            x>>termNow;
            if(termNow.typeOp)
            {
                two = mixedStack.pop();
                one = mixedStack.pop();
                op = *static_cast<char*>(termNow.value);
                switch (op)
                {
                    case '+' : answer = one + two;
                               break;

                    case '-' : answer = one - two;
                               break;

                    case '*' : answer = one * two;
                               break;

                    case '/' :
                               if(two == 0)
                               {
                                   invalidInput = true;
                                   break;
                               }
                               else
                               {
                                   answer = one / two;
                               }
                               break;

                    case '^' : try
                               {
                                   answer = one ^ two;
                               }
                               catch(...)
                               {
                                   invalidInput = true;
                               }

                               break;
                }
                if(!invalidInput)
                    mixedStack.push(answer);
                else
                    break;
            }
            else
            {
                mixedStack.push(*static_cast<mixedNumber*>(termNow.value));
            }
        }
        if(invalidInput)
        {
            ui->lineEdit_3->setText("Invalid input, please try again!");
            equalPressed = true;
        }
        else
        {
            answer = mixedStack.pop();
            ss<<answer;
            line = ss.str();
            ui->lineEdit_3->setText(line.c_str());
            equalPressed = true;
        }
    }
    else
    {
        ui->lineEdit_3->setText("Invalid input, please try again!");
        equalPressed = true;
    }
    dotInputed = false;
}
