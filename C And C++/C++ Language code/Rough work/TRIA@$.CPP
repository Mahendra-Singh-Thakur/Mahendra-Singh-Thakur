#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,n,rows,space;
	printf("enter odd rows number : ");
	scanf("%d",&rows);
	rows=rows/2+1;
	for(i=1;i<=rows;i++)
	{
		for (space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for (space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}