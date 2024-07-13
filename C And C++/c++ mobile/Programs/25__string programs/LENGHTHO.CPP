#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();

	int i,f,j;

	char sa[30];

	printf("For break the loop press 1\n") ;

	do
	{
		sa[30]=0;
		printf("Enter string");
		gets(sa);

		f=0;

		for(i=0;sa[i]!='\0';i++)
		{

			f++;

		}

		printf("The lengh of string is %d\n",f);

		scanf("%d",&j);

	}
	while(j==0);

	getch();


}
