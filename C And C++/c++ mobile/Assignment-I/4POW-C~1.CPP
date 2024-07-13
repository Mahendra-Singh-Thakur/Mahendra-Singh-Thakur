#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	clrscr();
	long unsigned a,b,c;
	printf("enter the value of a=");
	scanf("%lu",&a);
	printf("\nenter the value of b=");
	scanf ("%lu",&b);
	c= (pow(a,3) - pow(b,4));
	printf("\nThe value of c is = %lu", c);
	getch();


}