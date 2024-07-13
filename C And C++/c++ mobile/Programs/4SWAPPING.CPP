#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int a,b,c;
	printf ("enter 2 values :\n");
	scanf("%d%d",&a,&b);
	printf("before swapping\n a = %d and b = %d",a,b);


	c = a;
	a = b;
	b = c;

	printf("\nafter swapping\n a = %d and b = %d",a,b);
	getch();


}