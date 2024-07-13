#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int num,n1,n2,n3,s1,a1,a2,a3,reverse,sum;
	printf("Enter 3 digit number for reversing = \t");
	scanf("%d",&num);

	printf("\nThe three digit number before reversing is = %d",num);

	 n1=num % 10;
	 s1=num /10;
	 n2=s1 % 10;
	 n3=s1 / 10;

	  sum = n1 + n2 + n3;
	  printf("\n\nThe sum of three digit number is = %d",sum);
	  getch();


	  a1 = n1 * 100;
	  a2 = n2 * 10;
	  a3 = n3;

	  reverse = a1 + a2 + a3 ;

	  printf("\n\nThe three digit number after revesing is = %d",reverse);

	  getch();


}