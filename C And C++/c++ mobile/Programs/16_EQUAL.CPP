#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	printf("enter two number for checking equality :\n");
	int a,b;
	scanf ("%d%d",&a,&b);
	if (a == b)
	{

		printf ("%d is equal to %d",a,b);


	}
	else
	{
		printf("%d is not equal to %d",a,b);



	}

	getch();

}