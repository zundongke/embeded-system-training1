/********************************************************************************
** Form generated from reading ui file 'testx11.ui'
**
** Created: Tue Jun 28 14:30:21 2022
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TESTX11_H
#define UI_TESTX11_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(400, 300);
    pushButton = new QPushButton(Form);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(150, 150, 80, 27));
    pushButton_2 = new QPushButton(Form);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(70, 190, 80, 27));
    pushButton_3 = new QPushButton(Form);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(220, 190, 80, 27));
    pushButton_4 = new QPushButton(Form);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(70, 240, 80, 27));
    pushButton_5 = new QPushButton(Form);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(220, 240, 80, 27));
    groupBox = new QGroupBox(Form);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(0, 60, 120, 80));
    radioButton = new QRadioButton(groupBox);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(20, 20, 88, 23));
    radioButton_2 = new QRadioButton(groupBox);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(20, 50, 88, 23));
    groupBox_2 = new QGroupBox(Form);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(130, 60, 120, 80));
    radioButton_3 = new QRadioButton(groupBox_2);
    radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
    radioButton_3->setGeometry(QRect(10, 20, 88, 23));
    radioButton_4 = new QRadioButton(groupBox_2);
    radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
    radioButton_4->setGeometry(QRect(10, 50, 88, 23));
    groupBox_3 = new QGroupBox(Form);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(270, 60, 120, 80));
    radioButton_5 = new QRadioButton(groupBox_3);
    radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
    radioButton_5->setGeometry(QRect(20, 20, 88, 23));
    radioButton_6 = new QRadioButton(groupBox_3);
    radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
    radioButton_6->setGeometry(QRect(20, 50, 88, 23));
    pushButton_6 = new QPushButton(Form);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(20, 30, 80, 27));
    pushButton_7 = new QPushButton(Form);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(290, 30, 80, 27));
    label = new QLabel(Form);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(9, 10, 351, 20));

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Form", "stop", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("Form", "low", 0, QApplication::UnicodeUTF8));
    pushButton_3->setText(QApplication::translate("Form", "intermediate", 0, QApplication::UnicodeUTF8));
    pushButton_4->setText(QApplication::translate("Form", "high", 0, QApplication::UnicodeUTF8));
    pushButton_5->setText(QApplication::translate("Form", "shift", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Form", "LED1 Control", 0, QApplication::UnicodeUTF8));
    radioButton->setText(QApplication::translate("Form", "open", 0, QApplication::UnicodeUTF8));
    radioButton_2->setText(QApplication::translate("Form", "close", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Form", "LED2 Control", 0, QApplication::UnicodeUTF8));
    radioButton_3->setText(QApplication::translate("Form", "open", 0, QApplication::UnicodeUTF8));
    radioButton_4->setText(QApplication::translate("Form", "close", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("Form", "LED3 Control", 0, QApplication::UnicodeUTF8));
    radioButton_5->setText(QApplication::translate("Form", "open", 0, QApplication::UnicodeUTF8));
    radioButton_6->setText(QApplication::translate("Form", "close", 0, QApplication::UnicodeUTF8));
    pushButton_6->setText(QApplication::translate("Form", "execute", 0, QApplication::UnicodeUTF8));
    pushButton_7->setText(QApplication::translate("Form", "exit", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "2191320510\347\204\246\346\265\251\350\277\220                                            2190790605\346\237\257\345\260\212\346\240\213", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTX11_H
