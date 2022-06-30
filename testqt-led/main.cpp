#include <QApplication>
<<<<<<< HEAD
#include "myqtled.h"
=======
#include "qtled.h"
>>>>>>> c9c7abe (first commit)
int main(int argc, char **argv)
{        QApplication app(argc, argv);
        MyDlg *mydlg = new MyDlg;
		  mydlg->setFont(QFont("unifont",16,QFont::Normal));
        return mydlg->exec();
}
