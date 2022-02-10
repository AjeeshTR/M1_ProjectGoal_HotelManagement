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