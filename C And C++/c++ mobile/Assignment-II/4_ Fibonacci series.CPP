#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a=0,b=1,c,i,num;
	printf("enter the number of elements");
	scanf("%d",&num) ;
	printf("%d\t",a);
	printf("\t%d\t",b);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf("\t%d\t",c);
		a=b;
		b=c;

	}

	getch();
}