#ifndef __DLG_H__
#define __DLG_H__
#include <QDialog>
#include <ui_testx11.h>
class MyDlg : public QDialog
{
     Q_OBJECT
     public:
         MyDlg();
			void init_led();
			void Delay(int);
			void motor_control(int);
         void mod_control(int);
	  public slots:
			void stop();
         void slow();
			void pid_control();
			void high();
			void shift();
			void open1();
			void open2();
			void open3();
			void close1();
			void close2();
			void close3();
      private:
         Ui::Form ui;
};
#endif