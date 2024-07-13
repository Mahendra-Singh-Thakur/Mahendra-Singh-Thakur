#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,n;
	printf("enter number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n+i;j++)
		{
			if(j<n-i+1)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	getch();
}