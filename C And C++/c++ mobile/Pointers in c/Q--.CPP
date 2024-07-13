#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[]={1,2,3};
	int *p,*q;
	p=&a[2];
	q=&a[2];
	q--;

	printf("\n&a=%u\n",&a);
	printf("p=%u\n",p);
	printf("*p=%d\n",*p);
	printf("&p is different\n");
	printf("&a=%u\n",&a);
	printf("q=%u\n",q);
	printf("*q=%d\n",*q);
	printf("&q is different");

	getch();
}