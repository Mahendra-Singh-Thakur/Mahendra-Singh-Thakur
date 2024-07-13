#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int n,i,j;

	printf ("enter number of lines :\t ");
	scanf("%d",&n);
	n=n-1;
	for (i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\n");
			printf("+");
			for(j=1;j<=i;j++)
			{
				printf("+");
			}
		}
	}
	getch ();
}