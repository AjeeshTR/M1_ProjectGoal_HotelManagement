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