#include<stdio.h>

int main ()
{

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
	for (i=n-2;i>=0;i--)
	{
		if(i%2==0)
		{
			printf("\n");
			printf("+");
			for(j=i;j>=1;j--)
			{
				printf("+");
			}
		}
	}
	return 0;

}