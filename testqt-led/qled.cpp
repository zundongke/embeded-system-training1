#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "qtled.h"

#define DCM_IOCTRL_SETPWM 	   (0x10)
#define DCM_TCNTB0				(16384)
#define DOT_IOCTROL           (0x12)

MyDlg::MyDlg()
{
  ui.setupUi(this);
  QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(stop()));//stop
  QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(slow()));//slow
  QObject::connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(pid_control()));//intermidate
  QObject::connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(high()));//high
  QObject::connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(shift()));//shift
  QObject::connect(ui.radioButton, SIGNAL(clicked()), this, SLOT(open1()));//open1
  QObject::connect(ui.radioButton_2, SIGNAL(clicked()), this, SLOT(close1()));//close1
  QObject::connect(ui.radioButton_3, SIGNAL(clicked()), this, SLOT(open2()));//open2
  QObject::connect(ui.radioButton_4, SIGNAL(clicked()), this, SLOT(close2()));//close2
  QObject::connect(ui.radioButton_5, SIGNAL(clicked()), this, SLOT(open3()));//open3
  QObject::connect(ui.radioButton_6, SIGNAL(clicked()), this, SLOT(close3()));//close3
}

/*
void MyDlg::mod_control(int flag) {
    int fd;
    int i = flag;
    unsigned char mod_data[5][10]={
         {0,0,0x7e,0x40,0x40,0x40,0,0,0,0},//L
         {0,0x7c,0x02,0x7c,0x02,0x7c,0,0,0,0},//M
         {0,0,0x7e,0x08,0x08,0x7e,0,0,0,0},//H
         {0,0,0x3c,0x42,0x42,0x42,0,0,0,0},//C
                         {0,0,0,0,0,0,0,0,0,0}//0
     };
    fd=open("/dev/s3c2410_led0",O_RDWR);
    if (fd < 0) {
        printf("####Led device open fail####\n");
        exit(1);
    }
   int LEDWORD=0xff00;
   ioctl(fd,0x12,LEDWORD);
    if(i == 1)
{
        write(fd,mod_data[0],10);//显示L
        Delay(5000);
}
    else if(i == 2)
{
        write(fd,mod_data[1],10);//显示M 
        Delay(5000);
} 
   else if(i == 3)
        write(fd,mod_data[2],10);//显示H 
   else if(i == 4)
        write(fd,mod_data[3],10);//显示C
   else if(i == 5)
        write(fd,mod_data[4],10);//清空
}
*/
void MyDlg::motor_control(int flag)
{
	int status = flag;
	int setpwm = 0;
	int factor = DCM_TCNTB0/1024;
   int dcm_fd;
   dcm_fd=open("/dev/s3c2410-dc-motor0", 0);
	if(dcm_fd<0){
		printf("Error opening /dev/s3c2410-dc-motor0 device\n");
      exit(1);
	}
	for (int i = 0;i < 1000;i++) {
		QString PWM;
		if(status == 1)
{
			setpwm = 200;
         PWM = (QString)setpwm;
			//ui.lineEdit->insert(PWM);
}
		else if(status == 2)
{
			setpwm = 500;
         PWM = (QString)setpwm;
			//ui.lineEdit->insert(PWM);
}
		else if(status == 3)
{
			setpwm = 1000;
         PWM = (QString)setpwm;
			//ui.lineEdit->insert(PWM);
}
		else if(status == 4)
{
			setpwm = i-800;
         PWM = (QString)setpwm;
			//ui.lineEdit->insert(PWM);
			Delay(100);
}
      else
{
			setpwm = 0;
//			ui.lineEdit->insert(setpwm);
}
		ioctl(dcm_fd, DCM_IOCTRL_SETPWM, (setpwm * factor));	
		Delay(500);
//		printf("setpwm = %d \n", setpwm);		
	}
	//::close(dcm_fd);
   //exit(0)	
}

void MyDlg::init_led()
{
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  	ioctl(fd,3,0);  //关LED灯3 
	ioctl(fd,2,0);  //关LED灯2
	ioctl(fd,1,0);  //关LED灯1
  //::close(fd);  
}

void MyDlg::Delay(int t)
{
	int i;
	for(;t>0;t--)
		for(i=0;i<400;i++);
}


void MyDlg::slow()
{
  init_led();
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  	ioctl(fd,1,1);  //开LED灯1 
	ioctl(fd,2,0);  //闭LED灯2 
	ioctl(fd,3,0);  //闭LED灯3
   //mod_control(1);
   motor_control(1);
  //::close(fd);  
}

void MyDlg::stop()
{
  init_led();
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  	ioctl(fd,1,0);  //闭LED灯1 
	ioctl(fd,2,0);  //闭LED灯2 
	ioctl(fd,3,0);  //闭LED灯3
   //mod_control(5);
   motor_control(5);
  //::close(fd);  
}

void MyDlg::pid_control()
{
  init_led();
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  	ioctl(fd,1,0);  //关LED灯1 
	ioctl(fd,2,1);  //开LED灯2
  	ioctl(fd,3,0);  //关LED灯3
   //mod_control(2);   
   motor_control(2);
  //::close(fd);  
}

void MyDlg::high()
{
  init_led();
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  	ioctl(fd,3,1);  //开LED灯3 
	ioctl(fd,2,0);  //关LED灯2
	ioctl(fd,1,0);  //关LED灯1
   //mod_control(3);
   motor_control(3);
  //::close(fd);  
}

void MyDlg::shift()
{
  init_led();
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     }
	for(int num = 0;num < 10;num++)
	{
  		ioctl(fd,1,1);  //开LED灯1
		Delay(5000);
		ioctl(fd,1,0);  //关LED灯1
		Delay(5000);
  		ioctl(fd,2,1);  //开LED灯1
		Delay(5000);
		ioctl(fd,2,0);  //关LED灯1
		Delay(5000);
  		ioctl(fd,3,1);  //开LED灯1
		Delay(5000);
		ioctl(fd,3,0);  //关LED灯1
		Delay(5000);
	}
  	ioctl(fd,1,1);  //开LED灯1 
	ioctl(fd,2,1);  //开LED灯2 
	ioctl(fd,3,1);  //开LED灯3
   //mod_control(4);
	motor_control(4);
  //::close(fd);  
}

void MyDlg::open1()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,1,1);
	::close(fd);
}
void MyDlg::close1()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,1,0);
	::close(fd);
}
void MyDlg::open2()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,2,1);
	::close(fd);
}
void MyDlg::close2()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,2,0);
	::close(fd);
}
void MyDlg::open3()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,3,1);
	::close(fd);
}
void MyDlg::close3()
{
	int fd;
	fd=open("/dev/leds", 0);
	if(fd<0)
	{
		perror("open device /dev/leds");
		exit(1);
	}
	ioctl(fd,3,0);
	::close(fd);
}
