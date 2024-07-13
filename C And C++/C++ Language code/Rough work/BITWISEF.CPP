#include<stdio.h>
#include<conio.h>

int main ()
{
	int a,b,r1,r2;
	scanf("%d %d",&a,&b);
	r1=a>>2;
	printf("a>>2 = %d",r1);
	r2=b<<2;
	printf("\nb<<2 = %d",r2);
	return 0;
}