/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionconnect;
    QAction *actionconnect_to_server;
    QAction *actionstart;
    QAction *actionadmit_defeat;
    QAction *actionDisconnect;
    QAction *actionRestart;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QFrame *game_screen;
    QVBoxLayout *info;
    QLabel *player_info;
    QSpacerItem *verticalSpacer;
    QGroupBox *p1_info;
    QLabel *label_4;
    QLabel *yourcolor;
    QLabel *label_6;
    QLabel *YourMoveState;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLabel *oppocolor;
    QLabel *label_7;
    QLabel *OppoMoveState;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLCDNumber *lcd;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuconnect;
    QMenu *menustart;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(924, 953);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(15);
        MainWindow->setFont(font);
        actionconnect = new QAction(MainWindow);
        actionconnect->setObjectName(QString::fromUtf8("actionconnect"));
        actionconnect->setCheckable(false);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        actionconnect->setFont(font1);
        actionconnect->setShortcutContext(Qt::WindowShortcut);
        actionconnect_to_server = new QAction(MainWindow);
        actionconnect_to_server->setObjectName(QString::fromUtf8("actionconnect_to_server"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(15);
        actionconnect_to_server->setFont(font2);
        actionstart = new QAction(MainWindow);
        actionstart->setObjectName(QString::fromUtf8("actionstart"));
        actionstart->setCheckable(false);
        actionstart->setFont(font2);
        actionadmit_defeat = new QAction(MainWindow);
        actionadmit_defeat->setObjectName(QString::fromUtf8("actionadmit_defeat"));
        actionadmit_defeat->setFont(font2);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionDisconnect->setFont(font2);
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        actionRestart->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SimSun")});
        font3.setPointSize(15);
        centralwidget->setFont(font3);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cambria")});
        font4.setPointSize(15);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 3, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 3, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 3, 1, 1);

        game_screen = new QFrame(centralwidget);
        game_screen->setObjectName(QString::fromUtf8("game_screen"));
        sizePolicy.setHeightForWidth(game_screen->sizePolicy().hasHeightForWidth());
        game_screen->setSizePolicy(sizePolicy);
        game_screen->setMinimumSize(QSize(621, 831));
        game_screen->setMaximumSize(QSize(621, 831));
        game_screen->setStyleSheet(QString::fromUtf8("#game_screen{border-image: url(:/bg/png/board.png);}"));
        game_screen->setFrameShape(QFrame::StyledPanel);
        game_screen->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(game_screen, 0, 0, 3, 2);

        info = new QVBoxLayout();
        info->setObjectName(QString::fromUtf8("info"));
        player_info = new QLabel(centralwidget);
        player_info->setObjectName(QString::fromUtf8("player_info"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(player_info->sizePolicy().hasHeightForWidth());
        player_info->setSizePolicy(sizePolicy2);
        player_info->setMaximumSize(QSize(16777215, 100));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Consolas")});
        font5.setPointSize(20);
        font5.setBold(true);
        player_info->setFont(font5);

        info->addWidget(player_info);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        info->addItem(verticalSpacer);

        p1_info = new QGroupBox(centralwidget);
        p1_info->setObjectName(QString::fromUtf8("p1_info"));
        sizePolicy2.setHeightForWidth(p1_info->sizePolicy().hasHeightForWidth());
        p1_info->setSizePolicy(sizePolicy2);
        p1_info->setFont(font);
        label_4 = new QLabel(p1_info);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 50, 81, 31));
        yourcolor = new QLabel(p1_info);
        yourcolor->setObjectName(QString::fromUtf8("yourcolor"));
        yourcolor->setGeometry(QRect(140, 60, 68, 15));
        yourcolor->setAutoFillBackground(false);
        yourcolor->setFrameShape(QFrame::Panel);
        label_6 = new QLabel(p1_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 130, 111, 16));
        YourMoveState = new QLabel(p1_info);
        YourMoveState->setObjectName(QString::fromUtf8("YourMoveState"));
        YourMoveState->setGeometry(QRect(140, 130, 68, 15));

        info->addWidget(p1_info);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        info->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 50, 81, 31));
        oppocolor = new QLabel(groupBox);
        oppocolor->setObjectName(QString::fromUtf8("oppocolor"));
        oppocolor->setGeometry(QRect(140, 60, 68, 15));
        oppocolor->setFrameShape(QFrame::Box);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 130, 111, 16));
        OppoMoveState = new QLabel(groupBox);
        OppoMoveState->setObjectName(QString::fromUtf8("OppoMoveState"));
        OppoMoveState->setGeometry(QRect(140, 130, 68, 15));

        info->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        info->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setFont(font);

        info->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        info->addItem(verticalSpacer_3);

        lcd = new QLCDNumber(centralwidget);
        lcd->setObjectName(QString::fromUtf8("lcd"));
        sizePolicy2.setHeightForWidth(lcd->sizePolicy().hasHeightForWidth());
        lcd->setSizePolicy(sizePolicy2);
        lcd->setMaximumSize(QSize(16777215, 100));
        lcd->setDigitCount(5);
        lcd->setSegmentStyle(QLCDNumber::Flat);
        lcd->setProperty("intValue", QVariant(20));

        info->addWidget(lcd);

        verticalSpacer_5 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Fixed);

        info->addItem(verticalSpacer_5);


        gridLayout->addLayout(info, 0, 3, 3, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 924, 29));
        menubar->setFont(font);
        menuconnect = new QMenu(menubar);
        menuconnect->setObjectName(QString::fromUtf8("menuconnect"));
        menuconnect->setFont(font);
        menustart = new QMenu(menubar);
        menustart->setObjectName(QString::fromUtf8("menustart"));
        menustart->setFont(font);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuconnect->menuAction());
        menubar->addAction(menustart->menuAction());
        menuconnect->addAction(actionconnect);
        menuconnect->addAction(actionconnect_to_server);
        menuconnect->addAction(actionDisconnect);
        menustart->addAction(actionstart);
        menustart->addAction(actionadmit_defeat);
        menustart->addAction(actionRestart);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Chess", nullptr));
        actionconnect->setText(QCoreApplication::translate("MainWindow", "Create the connection", nullptr));
        actionconnect_to_server->setText(QCoreApplication::translate("MainWindow", "Connect to server", nullptr));
        actionstart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        actionadmit_defeat->setText(QCoreApplication::translate("MainWindow", "Admit defeat", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        actionRestart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Chess Designed by MHS", nullptr));
        label_3->setText(QString());
        player_info->setText(QCoreApplication::translate("MainWindow", "Players :", nullptr));
        p1_info->setTitle(QCoreApplication::translate("MainWindow", "You : ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "color :", nullptr));
        yourcolor->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "to move :", nullptr));
        YourMoveState->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "opponent :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "color :", nullptr));
        oppocolor->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "to move :", nullptr));
        OppoMoveState->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Time left : ", nullptr));
        menuconnect->setTitle(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        menustart->setTitle(QCoreApplication::translate("MainWindow", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
