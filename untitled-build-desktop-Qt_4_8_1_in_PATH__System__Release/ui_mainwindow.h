/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 10 22:10:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQitter;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *template_buttom;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLineEdit *imageboxname;
    QLabel *label_11;
    QSpinBox *Delais;
    QWidget *tab_2;
    QPushButton *compareButtom;
    QLabel *nombrecont;
    QLabel *label_2;
    QLabel *matchresultlabel;
    QLabel *label_3;
    QLabel *signname;
    QLabel *label_12;
    QSpinBox *tolerance_lvl;
    QWidget *tab_3;
    QSpinBox *minH;
    QSpinBox *minS;
    QSpinBox *minV;
    QSpinBox *maxH;
    QSpinBox *maxS;
    QSpinBox *maxV;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSlider *kernelsize;
    QLabel *label_10;
    QSpinBox *smoothlvl;
    QMenuBar *menuBar;
    QMenu *menuIceman;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(479, 461);
        actionQitter = new QAction(MainWindow);
        actionQitter->setObjectName(QString::fromUtf8("actionQitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 0, 441, 401));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 121, 31));
        template_buttom = new QPushButton(tab);
        template_buttom->setObjectName(QString::fromUtf8("template_buttom"));
        template_buttom->setEnabled(false);
        template_buttom->setGeometry(QRect(20, 70, 111, 27));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 169, 301, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        horizontalLayout->addWidget(pushButton_2);

        imageboxname = new QLineEdit(horizontalLayoutWidget);
        imageboxname->setObjectName(QString::fromUtf8("imageboxname"));
        imageboxname->setEnabled(false);

        horizontalLayout->addWidget(imageboxname);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 130, 66, 17));
        Delais = new QSpinBox(tab);
        Delais->setObjectName(QString::fromUtf8("Delais"));
        Delais->setGeometry(QRect(80, 120, 121, 29));
        Delais->setMaximum(10000);
        Delais->setValue(40);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        compareButtom = new QPushButton(tab_2);
        compareButtom->setObjectName(QString::fromUtf8("compareButtom"));
        compareButtom->setEnabled(false);
        compareButtom->setGeometry(QRect(20, 30, 111, 27));
        nombrecont = new QLabel(tab_2);
        nombrecont->setObjectName(QString::fromUtf8("nombrecont"));
        nombrecont->setGeometry(QRect(240, 110, 66, 17));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 91, 17));
        matchresultlabel = new QLabel(tab_2);
        matchresultlabel->setObjectName(QString::fromUtf8("matchresultlabel"));
        matchresultlabel->setGeometry(QRect(120, 90, 66, 17));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 170, 91, 17));
        signname = new QLabel(tab_2);
        signname->setObjectName(QString::fromUtf8("signname"));
        signname->setGeometry(QRect(120, 140, 101, 61));
        QFont font;
        font.setPointSize(24);
        font.setItalic(true);
        signname->setFont(font);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 260, 111, 17));
        tolerance_lvl = new QSpinBox(tab_2);
        tolerance_lvl->setObjectName(QString::fromUtf8("tolerance_lvl"));
        tolerance_lvl->setGeometry(QRect(130, 250, 60, 27));
        tolerance_lvl->setValue(9);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        minH = new QSpinBox(tab_3);
        minH->setObjectName(QString::fromUtf8("minH"));
        minH->setGeometry(QRect(90, 50, 71, 27));
        minH->setMaximum(255);
        minH->setValue(91);
        minS = new QSpinBox(tab_3);
        minS->setObjectName(QString::fromUtf8("minS"));
        minS->setGeometry(QRect(90, 100, 71, 27));
        minS->setMaximum(255);
        minS->setValue(74);
        minV = new QSpinBox(tab_3);
        minV->setObjectName(QString::fromUtf8("minV"));
        minV->setGeometry(QRect(90, 150, 71, 27));
        minV->setMaximum(255);
        minV->setValue(21);
        maxH = new QSpinBox(tab_3);
        maxH->setObjectName(QString::fromUtf8("maxH"));
        maxH->setGeometry(QRect(240, 50, 71, 27));
        maxH->setMaximum(255);
        maxH->setValue(255);
        maxS = new QSpinBox(tab_3);
        maxS->setObjectName(QString::fromUtf8("maxS"));
        maxS->setGeometry(QRect(240, 100, 71, 27));
        maxS->setMaximum(255);
        maxS->setValue(184);
        maxV = new QSpinBox(tab_3);
        maxV->setObjectName(QString::fromUtf8("maxV"));
        maxV->setGeometry(QRect(240, 150, 71, 27));
        maxV->setMaximum(255);
        maxV->setValue(139);
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 66, 17));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 66, 17));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 160, 66, 17));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 60, 66, 17));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 110, 66, 17));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 160, 66, 17));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 220, 91, 17));
        kernelsize = new QSlider(tab_3);
        kernelsize->setObjectName(QString::fromUtf8("kernelsize"));
        kernelsize->setGeometry(QRect(110, 210, 160, 29));
        kernelsize->setMinimum(1);
        kernelsize->setMaximum(10);
        kernelsize->setSingleStep(3);
        kernelsize->setValue(1);
        kernelsize->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 280, 91, 17));
        smoothlvl = new QSpinBox(tab_3);
        smoothlvl->setObjectName(QString::fromUtf8("smoothlvl"));
        smoothlvl->setGeometry(QRect(100, 270, 60, 27));
        smoothlvl->setMinimum(1);
        smoothlvl->setSingleStep(2);
        smoothlvl->setValue(15);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 479, 25));
        menuIceman = new QMenu(menuBar);
        menuIceman->setObjectName(QString::fromUtf8("menuIceman"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuIceman->menuAction());
        menuIceman->addAction(actionQitter);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Start capture", 0, QApplication::UnicodeUTF8));
        template_buttom->setText(QApplication::translate("MainWindow", "Affichez ROI", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Enregistrez Frame", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Delais", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Capture Cam", 0, QApplication::UnicodeUTF8));
        compareButtom->setText(QApplication::translate("MainWindow", "Start Matching", 0, QApplication::UnicodeUTF8));
        nombrecont->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Match Result:", 0, QApplication::UnicodeUTF8));
        matchresultlabel->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>La lettre est :</p></body></html>", 0, QApplication::UnicodeUTF8));
        signname->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Tolerance LVL:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Mode Alphabet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "minH :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "minS :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "minV :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", " MaxH :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "MaxS :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "MaxV :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Kernel size:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Smooth lvl :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "detecteur", 0, QApplication::UnicodeUTF8));
        menuIceman->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
