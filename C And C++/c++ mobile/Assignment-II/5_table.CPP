#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

	clrscr();

	printf("enter a number =\t");

	int n1,s,i;

	scanf ("%d",&n1);

	for(i=1;i<=20;i++)
	{


	s  = n1 * i ;

	printf("%d * %d = %d\n",n1,i,s);

	}
	getch();

}
