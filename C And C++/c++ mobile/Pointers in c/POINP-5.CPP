#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();

	int a=10,b=8;

	int *p=&a,*q=&b;
	*p=456;
	*q=0;

	printf("a=%d\n",a) ;

	printf("b=%d\n",b) ;

	printf("*p=%d\n",*p) ;

	printf("*q=%d\n",*q) ;

	printf("&a=%u\n",&a) ;

	printf("&b=%u\n",&b) ;

	printf("p=%u\n",p) ;

	printf("q=%u\n",q) ;

	printf("&p=%u\n",&p) ;

	printf("&q=%u\n",&q) ;
	getch();


}