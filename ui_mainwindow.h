/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *screens;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *ceButton;
    QPushButton *backButton;
    QPushButton *fourButton;
    QPushButton *sevenButton;
    QPushButton *oneButton;
    QPushButton *zeroButton;
    QPushButton *eightButton;
    QPushButton *fiveButton;
    QPushButton *twoButton;
    QPushButton *dotButton;
    QPushButton *nineButton;
    QPushButton *minusButton;
    QPushButton *multButton;
    QPushButton *slashButton;
    QPushButton *sixButton;
    QPushButton *plusButton;
    QPushButton *spaceButton;
    QPushButton *threeButton;
    QPushButton *equalButton;
    QPushButton *leftParensButton;
    QPushButton *rightParensButton;
    QPushButton *closeButton;
    QPushButton *powerButton;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(410, 580);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(410, 580));
        MainWindow->setMaximumSize(QSize(410, 580));
        QFont font;
        font.setFamily(QStringLiteral("Garamond"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("MainWindow { background: rgb(0, 0, 44)}\n"
""));
        MainWindow->setAnimated(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 391, 131));
        screens = new QGridLayout(gridLayoutWidget);
        screens->setSpacing(6);
        screens->setContentsMargins(11, 11, 11, 11);
        screens->setObjectName(QStringLiteral("screens"));
        screens->setContentsMargins(0, 0, 0, 0);
        lineEdit_1 = new QLineEdit(gridLayoutWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_1->sizePolicy().hasHeightForWidth());
        lineEdit_1->setSizePolicy(sizePolicy1);
        lineEdit_1->setFont(font);
        lineEdit_1->setAutoFillBackground(false);
        lineEdit_1->setStyleSheet(QLatin1String("QLineEdit { background: rgb(0, 97, 55)}\n"
"QLineEdit { color: rgb(164, 127, 34)}"));
        lineEdit_1->setFrame(false);
        lineEdit_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_1->setClearButtonEnabled(false);

        screens->addWidget(lineEdit_1, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setFont(font);
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit { background: rgb(0, 97, 55)}\n"
"QLineEdit { color: rgb(164, 127, 34)}"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2->setClearButtonEnabled(false);

        screens->addWidget(lineEdit_2, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setFont(font);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit { background: rgb(0, 97, 55)}\n"
"QLineEdit { color: rgb(164, 127, 34)}"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3->setClearButtonEnabled(false);

        screens->addWidget(lineEdit_3, 3, 0, 1, 1);

        ceButton = new QPushButton(centralWidget);
        ceButton->setObjectName(QStringLiteral("ceButton"));
        ceButton->setGeometry(QRect(10, 420, 70, 70));
        QFont font1;
        font1.setFamily(QStringLiteral("Garamond"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        ceButton->setFont(font1);
        ceButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(10, 500, 70, 70));
        backButton->setFont(font1);
        backButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        fourButton = new QPushButton(centralWidget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(90, 260, 70, 70));
        fourButton->setFont(font1);
        fourButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        sevenButton = new QPushButton(centralWidget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(90, 180, 70, 70));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy2);
        sevenButton->setFont(font1);
        sevenButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        oneButton = new QPushButton(centralWidget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(90, 340, 70, 70));
        oneButton->setFont(font1);
        oneButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        zeroButton = new QPushButton(centralWidget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(90, 420, 70, 70));
        zeroButton->setFont(font1);
        zeroButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        eightButton = new QPushButton(centralWidget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(170, 180, 70, 70));
        eightButton->setFont(font1);
        eightButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        fiveButton = new QPushButton(centralWidget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(170, 260, 70, 70));
        fiveButton->setFont(font1);
        fiveButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(170, 340, 70, 70));
        twoButton->setFont(font1);
        twoButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        dotButton = new QPushButton(centralWidget);
        dotButton->setObjectName(QStringLiteral("dotButton"));
        dotButton->setGeometry(QRect(170, 420, 70, 70));
        dotButton->setFont(font1);
        dotButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        nineButton = new QPushButton(centralWidget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(250, 180, 70, 70));
        nineButton->setFont(font1);
        nineButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        minusButton = new QPushButton(centralWidget);
        minusButton->setObjectName(QStringLiteral("minusButton"));
        minusButton->setGeometry(QRect(330, 340, 70, 70));
        minusButton->setFont(font1);
        minusButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        multButton = new QPushButton(centralWidget);
        multButton->setObjectName(QStringLiteral("multButton"));
        multButton->setGeometry(QRect(330, 260, 70, 70));
        multButton->setFont(font1);
        multButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        slashButton = new QPushButton(centralWidget);
        slashButton->setObjectName(QStringLiteral("slashButton"));
        slashButton->setGeometry(QRect(330, 180, 70, 70));
        slashButton->setFont(font1);
        slashButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        sixButton = new QPushButton(centralWidget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(250, 260, 70, 70));
        sixButton->setFont(font1);
        sixButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        plusButton = new QPushButton(centralWidget);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        plusButton->setGeometry(QRect(330, 420, 70, 150));
        plusButton->setFont(font1);
        plusButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        spaceButton = new QPushButton(centralWidget);
        spaceButton->setObjectName(QStringLiteral("spaceButton"));
        spaceButton->setGeometry(QRect(90, 500, 230, 70));
        spaceButton->setFont(font1);
        spaceButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        threeButton = new QPushButton(centralWidget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(250, 340, 70, 70));
        threeButton->setFont(font1);
        threeButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton { color: rgb(164, 127, 34)}"));
        equalButton = new QPushButton(centralWidget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        equalButton->setGeometry(QRect(250, 420, 70, 70));
        equalButton->setFont(font1);
        equalButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        leftParensButton = new QPushButton(centralWidget);
        leftParensButton->setObjectName(QStringLiteral("leftParensButton"));
        leftParensButton->setGeometry(QRect(10, 180, 70, 70));
        leftParensButton->setFont(font1);
        leftParensButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        rightParensButton = new QPushButton(centralWidget);
        rightParensButton->setObjectName(QStringLiteral("rightParensButton"));
        rightParensButton->setGeometry(QRect(10, 260, 70, 70));
        rightParensButton->setFont(font1);
        rightParensButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(380, 10, 20, 20));
        closeButton->setMinimumSize(QSize(20, 20));
        closeButton->setMaximumSize(QSize(20, 20));
        closeButton->setAutoFillBackground(false);
        closeButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(0, 97, 55)}\n"
"QPushButton {\n"
"    border: none;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        closeButton->setIconSize(QSize(16, 16));
        closeButton->setFlat(true);
        powerButton = new QPushButton(centralWidget);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setGeometry(QRect(10, 340, 70, 70));
        powerButton->setFont(font1);
        powerButton->setStyleSheet(QLatin1String("QPushButton { background: rgb(164, 127, 34)}\n"
"QPushButton { color: rgb(0, 97, 55)}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 20, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lineEdit_1->setPlaceholderText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "0", 0));
        ceButton->setText(QApplication::translate("MainWindow", "C", 0));
        backButton->setText(QApplication::translate("MainWindow", "CE", 0));
        fourButton->setText(QApplication::translate("MainWindow", "4", 0));
        sevenButton->setText(QApplication::translate("MainWindow", "7", 0));
        oneButton->setText(QApplication::translate("MainWindow", "1", 0));
        zeroButton->setText(QApplication::translate("MainWindow", "0", 0));
        eightButton->setText(QApplication::translate("MainWindow", "8", 0));
        fiveButton->setText(QApplication::translate("MainWindow", "5", 0));
        twoButton->setText(QApplication::translate("MainWindow", "2", 0));
        dotButton->setText(QApplication::translate("MainWindow", ".", 0));
        nineButton->setText(QApplication::translate("MainWindow", "9", 0));
        minusButton->setText(QApplication::translate("MainWindow", "-", 0));
        multButton->setText(QApplication::translate("MainWindow", "*", 0));
        slashButton->setText(QApplication::translate("MainWindow", "/", 0));
        sixButton->setText(QApplication::translate("MainWindow", "6", 0));
        plusButton->setText(QApplication::translate("MainWindow", "+", 0));
        spaceButton->setText(QString());
        threeButton->setText(QApplication::translate("MainWindow", "3", 0));
        equalButton->setText(QApplication::translate("MainWindow", "=", 0));
        leftParensButton->setText(QApplication::translate("MainWindow", "(", 0));
        rightParensButton->setText(QApplication::translate("MainWindow", ")", 0));
        closeButton->setText(QString());
        powerButton->setText(QApplication::translate("MainWindow", "^", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/appicon.png\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
