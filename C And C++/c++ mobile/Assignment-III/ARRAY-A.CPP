#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n[10],m,c;
	printf("Enter 10 terms : ");

	for(i=0;i<=4;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<=4;i++)
	{
			for(j=i;j<=4;j++)
			{
				if(n[i]>n[j])
				{
					c = n[i];
					n[i] = n[j];
					n[j] = c;
				}
			}
	   /*			for(k=0;k<=4;k++)
	{
		printf(" %d ",n[k]);

		if(k<4)
		{
			printf(">");
		}
	}
	printf("\n");    */

	}

	for(k=0;k<=4;k++)
	{
		printf(" %d ",n[k]);

		if(k<4)
		{
			printf(">");
		}
	}
	getch();
}









/*#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n[5],m,c;
	printf("Enter 10 terms : ");

	for(i=0;i<=5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
			for(j=i;j<5;j++)
			{
				if(n[i]<n[j])
				{
					c = n[i];
					n[i] = n[j];
					n[j] = c;
				}
			}
	}
	for(k=0;k<=5;k++)
	{
		printf(" %d ",n[k]);

		if(k<5)
		{
			printf("<");
		}
	}
	getch();
}  */