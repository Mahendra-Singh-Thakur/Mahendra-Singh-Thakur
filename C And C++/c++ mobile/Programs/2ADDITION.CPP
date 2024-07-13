#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int num1,num2,sum;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum is %d",sum);
	getch();
}
