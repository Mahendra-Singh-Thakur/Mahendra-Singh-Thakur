#include<stdio.h>
#include<conio.h>
#include<math.h>

 void main()
 {
	clrscr();
	int num1,num2,p;
	printf("Enter a number = \t");

	scanf("%d",&num1);
	printf("\nEnter power of a number = \t");
	scanf("%d",&num2);
	p=pow(num1, num2);
	printf("\n%d raised to the power %d is %d",num1,num2,p);
	getch ();

 }