#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j;
	float n[10];
	long a=1;
	double b,k,c[10];
	printf("Enter 10 terms : ");

	for(i=0;i<=9;i++)
	{
		scanf("%f",&n[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
		       //	printf("i=%d   j=%d",n[i],n[j]);
			a=a*n[j];
			b=a/n[i];
		}

	     //	printf("  %lf  ",b);
		c[i]=b;
		a=1;
	}

	for(k=0;k<=9;k++)
	{
		printf(" %lf ",c[k]);

		if(k<9)
		{
			printf(">");
		}
	}
	getch();
}