#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int n,i,j,k,a;

	printf ("how many rows you want : ");
	scanf("%d",&n);
	a= 2*n-1;
	for (k=1;k<=a;k++)
	{
		printf("* ");
	}
	printf("\n");
	for(i=1;i<=n;i++)
		{
				for(j=1;j<=(2*n-1);j++)
				{
					if(j>n-(i+1)&&j<n+(i+1))
					{
						printf("  ");
					}
					else
					{
						printf("* ");
					}
				}
				if (n>i)
				{
			printf("\n");
			}
		}

     for(i=n;i>=1;i--)
	{
				for(j=1;j<=(2*n-1);j++)
				{
					if(j>n-(i+1)&&j<n+(i+1))
					{
						printf("  ");
					}
					else
					{
						printf("* ");
					}

				}
				if(n>i)
				{
			printf("\n");
			}
		}
		for (k=1;k<=a;k++)
	{
		printf("* ");
	}


	getch();
}