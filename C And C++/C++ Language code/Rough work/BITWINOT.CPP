#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr ();
	int a,r1;
	scanf("%d",&a);
	r1=~a;
	printf("~a = %d",r1);
	getch();
}