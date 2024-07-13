#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int j;
	long double p,r,t,i,p2;
	printf("Enter principal amount = ");
	scanf("%Lf",&p);
	printf("Enter rate of interest = ");
	scanf("%Lf",&r);
	printf("Enter time in year = ");
	scanf("%Lf",&t);
	for(j=1;j<=t;j++)
	{
		p2=p;
		p=p/100;
		i=p*r*12;
		printf("interest of %d year = %Lf\n",j,i);
		p=p2+i;
	}

	printf("total amount is %Lf",p);
	getch();
}
