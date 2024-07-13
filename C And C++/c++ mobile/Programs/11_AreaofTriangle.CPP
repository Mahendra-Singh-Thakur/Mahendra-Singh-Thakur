#include<stdio.h>
#include<conio.h>
#include<math.h>


void main ()
{
	clrscr();
	int a,b,c;
	float area,s,m;
	printf("enter three sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	m=s*(s-a)*(s-b)*(s-c);
	area=sqrt(m);
	printf("area of a triangle is = %f",area);
	getch();
}