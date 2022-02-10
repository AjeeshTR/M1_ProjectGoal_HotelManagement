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
{
	system("cls");

    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &amp;uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i&lt;10)
	{
	    pword&#91;i]=getch();
	    c=pword&#91;i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword&#91;i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&amp;pword);
		if(strcmp(uname,user)==0 &amp;&amp; strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a&lt;=2);
	if (a&gt;2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}
struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber&#91;10];
	char name&#91;20];
	char address&#91;25];
	char phonenumber&#91;15];
	char nationality&#91;15];
	char email&#91;20];
	char period&#91;10];
	char arrivaldate&#91;10];
}s;
int main(){     // MAIN FUNCTION
	int i=0;

	time_t t;
	time(&amp;t);
	char customername;
	char choice;
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		 for(i=0;i&lt;80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i&lt;80;i++)
		printf("-");
		printf("\n");
		setcolor(10);
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -&gt; Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -&gt; View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -&gt; Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -&gt; Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -&gt; Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -&gt; Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i&lt;80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&amp;t));
	    for(i=0;i&lt;80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}
void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&amp;s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&amp;s.arrivaldate);
		fwrite(&amp;s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}
void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");

	for(i=0;i&lt;118;i++)
		printf("-");
	while(fread(&amp;s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i&lt;118;i++)
		printf("-");

	fclose(f);
	getch();
}
void edit()
{
	FILE *f;
	int k=1;
	char roomnumber&#91;20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%&#91;^\n]",roomnumber);
	fflush(stdin);
	while(fread(&amp;s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&amp;s.name);
			printf("\nEnter Address        :");
			scanf("%s",&amp;s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&amp;s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&amp;s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&amp;s.email);
			printf("\nEnter Period :");
			scanf("%s",&amp;s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&amp;s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&amp;s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
}

