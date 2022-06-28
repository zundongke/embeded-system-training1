#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "myqtled.h"

MyDlg::MyDlg()
{
  ui.setupUi(this);
  QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(ControlLed()));
  QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
}
void MyDlg::ControlLed()
{
  int fd; 
  fd = open("/dev/leds", 0); 
  if (fd < 0)
  {   perror("open device /dev/leds");  
      exit(1);
     } 
  if ( ui.radioButton->isChecked())	ioctl(fd,1,1);    //开LED灯1 
  else	ioctl(fd,1,0);    									//关LED灯1 
  if ( ui.radioButton_3->isChecked()) ioctl(fd,2,1);  //开LED灯2 
  else	ioctl(fd,2,0);    									//关LED灯2 
  if ( ui.radioButton_5->isChecked()) ioctl(fd,3,1);  //开LED灯2 
  else	ioctl(fd,3,0);    									//关LED灯2 
  ::close(fd);  
}
