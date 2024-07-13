#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a ;
	printf("enter number for finding positve or negative :\n");
	scanf("%d",&a);

	if(a>=0)
	{
	printf("%d is positive ",a);
	}
	else
	{
	printf("%d is negative ", a);
	}

	getch();



}