#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int a,b;
	printf ("enter 2 values :\n");
	scanf("%d%d",&a,&b);
	printf("before swapping\n a = %d and b = %d",a,b);


	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nafter swapping\n a = %d and b = %d",a,b);
	getch();


}