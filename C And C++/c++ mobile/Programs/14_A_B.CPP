#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	printf("enter 2 number;\n");
	float a,b;
	scanf ("%f%f",&a,&b);


	if (a>b)
	{

		printf("%fis greater than %f",a,b);


	}
	else
	{

		printf("%fis smaller than %f",a,b);


	}

	getch();

}




