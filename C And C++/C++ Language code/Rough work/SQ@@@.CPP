#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int n,i,j;

	printf ("how many rows you want : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
				for(j=1;j<=(2*n-1);j++)
				{
					if(j>n-(i-1)&&j<n+(i-1))
					{
						printf("  ");
					}
					else
					{
						printf("* ");
					}
				}
			printf("\n");
		}
	for(i=n;i>=1;i--)
		{
				for(j=1;j<=(2*n-1);j++)
				{
					if(j>n-(i-1)&&j<n+(i-1))
					{
						printf("  ");
					}
					else
					{
						printf("* ");
					}
				}
			printf("\n");
		}
	getch();
}