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
