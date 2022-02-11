#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();
void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
if(GetConsoleScreenBufferInfo(hStdOut,&amp;csbi))
{
	wColor=(csbi.wAttributes &amp; 0xB0)+(ForgC &amp; 0x0B);
	SetConsoleTextAttribute(hStdOut,wColor);
}
}
void login()
{
	int a=0,i=0;
    char uname&#91;10],c=' ';
    char pword&#91;10],code&#91;10];
    char user&#91;10]="user";
    char pass&#91;10]="pass";
    do
}
end if
}}

