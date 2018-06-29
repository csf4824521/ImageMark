/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *srcPathEdit;
    QPushButton *srcBrowsBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *markPathEdit;
    QPushButton *markBrowsBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *savePathEdit;
    QPushButton *savePathBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *posComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *createBtn;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(446, 351);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        srcPathEdit = new QLineEdit(centralWidget);
        srcPathEdit->setObjectName(QStringLiteral("srcPathEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(true);
        font1.setWeight(75);
        srcPathEdit->setFont(font1);

        horizontalLayout->addWidget(srcPathEdit);

        srcBrowsBtn = new QPushButton(centralWidget);
        srcBrowsBtn->setObjectName(QStringLiteral("srcBrowsBtn"));
        srcBrowsBtn->setFont(font);

        horizontalLayout->addWidget(srcBrowsBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        markPathEdit = new QLineEdit(centralWidget);
        markPathEdit->setObjectName(QStringLiteral("markPathEdit"));
        markPathEdit->setFont(font1);

        horizontalLayout_2->addWidget(markPathEdit);

        markBrowsBtn = new QPushButton(centralWidget);
        markBrowsBtn->setObjectName(QStringLiteral("markBrowsBtn"));
        markBrowsBtn->setFont(font);

        horizontalLayout_2->addWidget(markBrowsBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        savePathEdit = new QLineEdit(centralWidget);
        savePathEdit->setObjectName(QStringLiteral("savePathEdit"));
        savePathEdit->setFont(font1);

        horizontalLayout_3->addWidget(savePathEdit);

        savePathBtn = new QPushButton(centralWidget);
        savePathBtn->setObjectName(QStringLiteral("savePathBtn"));
        savePathBtn->setFont(font);

        horizontalLayout_3->addWidget(savePathBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        posComboBox = new QComboBox(centralWidget);
        posComboBox->setObjectName(QStringLiteral("posComboBox"));
        posComboBox->setMinimumSize(QSize(0, 0));
        posComboBox->setMaximumSize(QSize(16777215, 16777215));
        posComboBox->setFont(font1);

        horizontalLayout_4->addWidget(posComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        createBtn = new QPushButton(centralWidget);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setFont(font);

        horizontalLayout_4->addWidget(createBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\216\237\345\233\276\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        srcBrowsBtn->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\260\264\345\215\260\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        markBrowsBtn->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        savePathBtn->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\260\264\345\215\260\344\275\215\347\275\256\357\274\232", Q_NULLPTR));
        posComboBox->clear();
        posComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\267\246\344\270\212\350\247\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\267\246\344\270\213\350\247\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\261\205\344\270\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\217\263\344\270\212\350\247\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\217\263\344\270\213\350\247\222", Q_NULLPTR)
        );
        createBtn->setText(QApplication::translate("MainWindow", "\346\211\223\346\260\264\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
