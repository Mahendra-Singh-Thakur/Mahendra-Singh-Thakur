#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int sum,num;
	printf("Enter 3 digit number = \t");
	scanf("%d",&num);

	 sum= num%10;
	 num= num/10;
	 sum= sum+(num%10);
	 num= num/10;
	 sum= sum+num;


	  printf("\n\nThe sum of three digit number is = %d",sum);
	  getch();

}       /* f=n%10;
	 n=n/10;
	 f=f+(n%10);
	 n=n/10;
	 f=n+f; */