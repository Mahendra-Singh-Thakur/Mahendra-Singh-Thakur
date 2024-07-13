#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int num1;
	float per;
	printf("enter radius =\t");
	scanf("%d",&num1);
	per = 2 * 3.14 * num1;
	printf("\ncircumference of a circle is %f",per);
	getch();



}