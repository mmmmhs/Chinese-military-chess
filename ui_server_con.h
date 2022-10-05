/********************************************************************************
** Form generated from reading UI file 'server_con.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_CON_H
#define UI_SERVER_CON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server_con
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *btnOK;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *num1;
    QSpacerItem *verticalSpacer_3;
    QPushButton *num4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *num7;
    QSpacerItem *verticalSpacer_5;
    QPushButton *del;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *num2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *num5;
    QSpacerItem *verticalSpacer_7;
    QPushButton *num8;
    QSpacerItem *verticalSpacer_8;
    QPushButton *num0;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *num3;
    QSpacerItem *verticalSpacer_9;
    QPushButton *num6;
    QSpacerItem *verticalSpacer_10;
    QPushButton *num9;
    QSpacerItem *verticalSpacer_11;
    QPushButton *dot;

    void setupUi(QDialog *server_con)
    {
        if (server_con->objectName().isEmpty())
            server_con->setObjectName(QString::fromUtf8("server_con"));
        server_con->resize(786, 571);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(server_con->sizePolicy().hasHeightForWidth());
        server_con->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        server_con->setFont(font);
        label = new QLabel(server_con);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 131, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(15);
        font1.setBold(true);
        label->setFont(font1);
        lineEdit = new QLineEdit(server_con);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 40, 381, 51));
        pushButton = new QPushButton(server_con);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 130, 111, 31));
        pushButton->setFont(font);
        btnOK = new QPushButton(server_con);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(480, 130, 111, 31));
        btnOK->setFont(font);
        horizontalLayoutWidget = new QWidget(server_con);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 180, 641, 361));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        num1 = new QPushButton(horizontalLayoutWidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(num1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        num4 = new QPushButton(horizontalLayoutWidget);
        num4->setObjectName(QString::fromUtf8("num4"));
        sizePolicy1.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(num4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        num7 = new QPushButton(horizontalLayoutWidget);
        num7->setObjectName(QString::fromUtf8("num7"));
        sizePolicy1.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(num7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        del = new QPushButton(horizontalLayoutWidget);
        del->setObjectName(QString::fromUtf8("del"));
        sizePolicy1.setHeightForWidth(del->sizePolicy().hasHeightForWidth());
        del->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(del);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        num2 = new QPushButton(horizontalLayoutWidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        sizePolicy1.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(num2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_6);

        num5 = new QPushButton(horizontalLayoutWidget);
        num5->setObjectName(QString::fromUtf8("num5"));
        sizePolicy1.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(num5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_7);

        num8 = new QPushButton(horizontalLayoutWidget);
        num8->setObjectName(QString::fromUtf8("num8"));
        sizePolicy1.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(num8);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_8);

        num0 = new QPushButton(horizontalLayoutWidget);
        num0->setObjectName(QString::fromUtf8("num0"));
        sizePolicy1.setHeightForWidth(num0->sizePolicy().hasHeightForWidth());
        num0->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(num0);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        num3 = new QPushButton(horizontalLayoutWidget);
        num3->setObjectName(QString::fromUtf8("num3"));
        sizePolicy1.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(num3);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_9);

        num6 = new QPushButton(horizontalLayoutWidget);
        num6->setObjectName(QString::fromUtf8("num6"));
        sizePolicy1.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(num6);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_10);

        num9 = new QPushButton(horizontalLayoutWidget);
        num9->setObjectName(QString::fromUtf8("num9"));
        sizePolicy1.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(num9);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_11);

        dot = new QPushButton(horizontalLayoutWidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(dot);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(server_con);

        QMetaObject::connectSlotsByName(server_con);
    } // setupUi

    void retranslateUi(QDialog *server_con)
    {
        server_con->setWindowTitle(QCoreApplication::translate("server_con", "Connect to server", nullptr));
        label->setText(QCoreApplication::translate("server_con", "Enter IP :", nullptr));
        pushButton->setText(QCoreApplication::translate("server_con", "Cancel", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("server_con", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        btnOK->setText(QCoreApplication::translate("server_con", "OK", nullptr));
#if QT_CONFIG(shortcut)
        btnOK->setShortcut(QCoreApplication::translate("server_con", "O", nullptr));
#endif // QT_CONFIG(shortcut)
        num1->setText(QCoreApplication::translate("server_con", "1", nullptr));
        num4->setText(QCoreApplication::translate("server_con", "4", nullptr));
        num7->setText(QCoreApplication::translate("server_con", "7", nullptr));
        del->setText(QCoreApplication::translate("server_con", "Delete", nullptr));
        num2->setText(QCoreApplication::translate("server_con", "2", nullptr));
        num5->setText(QCoreApplication::translate("server_con", "5", nullptr));
        num8->setText(QCoreApplication::translate("server_con", "8", nullptr));
        num0->setText(QCoreApplication::translate("server_con", "0", nullptr));
        num3->setText(QCoreApplication::translate("server_con", "3", nullptr));
        num6->setText(QCoreApplication::translate("server_con", "6", nullptr));
        num9->setText(QCoreApplication::translate("server_con", "9", nullptr));
        dot->setText(QCoreApplication::translate("server_con", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class server_con: public Ui_server_con {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_CON_H
