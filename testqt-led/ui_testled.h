/********************************************************************************
** Form generated from reading ui file 'testled.ui'
**
** Created: Thu Dec 29 15:46:51 2016
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TESTLED_H
#define UI_TESTLED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(329, 237);
    pushButton = new QPushButton(Form);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(250, 60, 51, 27));
    pushButton_2 = new QPushButton(Form);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(250, 150, 51, 27));
    groupBox = new QGroupBox(Form);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(30, 20, 191, 51));
    radioButton = new QRadioButton(groupBox);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(30, 20, 61, 23));
    radioButton->setChecked(true);
    radioButton_2 = new QRadioButton(groupBox);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(110, 20, 61, 23));
    radioButton_2->setChecked(false);
    groupBox_2 = new QGroupBox(Form);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(30, 90, 191, 51));
    radioButton_3 = new QRadioButton(groupBox_2);
    radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
    radioButton_3->setGeometry(QRect(30, 20, 61, 23));
    radioButton_3->setChecked(true);
    radioButton_4 = new QRadioButton(groupBox_2);
    radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
    radioButton_4->setGeometry(QRect(110, 20, 61, 23));
    radioButton_4->setChecked(false);
    groupBox_3 = new QGroupBox(Form);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(30, 160, 191, 51));
    radioButton_5 = new QRadioButton(groupBox_3);
    radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
    radioButton_5->setGeometry(QRect(30, 20, 61, 23));
    radioButton_5->setChecked(true);
    radioButton_6 = new QRadioButton(groupBox_3);
    radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
    radioButton_6->setGeometry(QRect(110, 20, 61, 23));
    radioButton_6->setChecked(false);

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "QT-LED\346\216\247\345\210\266\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Form", "\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("Form", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Form", "LED1\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
    radioButton->setText(QApplication::translate("Form", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    radioButton_2->setText(QApplication::translate("Form", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Form", "LED2\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
    radioButton_3->setText(QApplication::translate("Form", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    radioButton_4->setText(QApplication::translate("Form", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("Form", "LED3\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
    radioButton_5->setText(QApplication::translate("Form", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    radioButton_6->setText(QApplication::translate("Form", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTLED_H
