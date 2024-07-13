#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	printf("enter a year for finding a leap year:\n ");
	int a;
	scanf ("%d",&a);


	if (a%4 == 0)
	{

		printf("%d is leap year",a);


	}

	else
	{


		printf("%d is not leap year",a);


	}

	getch();

}