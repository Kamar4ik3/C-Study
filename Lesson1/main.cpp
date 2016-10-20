#include <QtCore/QCoreApplication>
#include <iostream>
#include <windows.h>
void gotoxy ( short x, short y )
{
COORD coord = {x, y};
SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    gotoxy(1,3);
    cout<<"*";

    gotoxy(5,6);
    cout<<"#";


    return a.exec();
}
