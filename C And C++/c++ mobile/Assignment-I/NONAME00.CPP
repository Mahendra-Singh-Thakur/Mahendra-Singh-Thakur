#include<stdio.h>

int main()
{
	int a[]={1,2,3};
	int *p,*q;
	p=&a[0];
	q=&a[0];
	q++;

	printf("\n&a=%u\n",&a);
	printf("p=%u\n",p);
	printf("*p=%d\n",*p);
	printf("&p=%u\n",&p);
	printf("q=%u\n",q);
	printf("*q=%d\n",*q);
	printf("&q=%u\n",&q);
}