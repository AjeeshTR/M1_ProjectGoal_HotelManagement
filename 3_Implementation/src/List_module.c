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
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i&lt;118;i++)
		printf("-");
	fclose(f);
	getch();
}