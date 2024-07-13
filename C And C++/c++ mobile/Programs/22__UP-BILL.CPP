#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int b1;
	float b2,b3;
	printf("Enter units: ");
	scanf("%d",&b1);

	if (b1<=100)
	{

		b2 = b1 * 1.80;
		printf("The total bill of customer is %f", b2);

	}

	else if ((b1>100)&&(b1<=250))
	{

		b3 = b1-100;
		b2 = b3*3.40+180;
		printf("The total bill of customer is %f", b2);

	}

	else if ((b1>250)&&(b1<=400))
	{

		b3 = b1 - 250;
		b2 = b3*4.90 +180+510 ;
		printf("The total bill of customer is %f", b2);

	}

	else if (b1>400)
	{

		b3 = b1 - 400;
		b2 = b3*5.50 + 180 + 510 + 735 ;
		printf("The total bill of customer is %f", b2);

	}


	getch();

}