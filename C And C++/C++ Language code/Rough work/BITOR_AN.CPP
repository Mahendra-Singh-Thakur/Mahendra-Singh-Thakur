#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr ();
	int a,r1,b,r2;
	scanf("%d%d",&a,&b);
	r1=a&b;
	printf("a&b = %d",r1);
	r2=a|b;
	printf("\na|b = %d",r2);
	getch();
}