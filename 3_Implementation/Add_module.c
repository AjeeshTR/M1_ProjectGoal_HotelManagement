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