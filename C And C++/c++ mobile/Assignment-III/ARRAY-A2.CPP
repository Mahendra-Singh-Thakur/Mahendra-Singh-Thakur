#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n[10],m,c;
	printf("Enter 10 terms : ");

	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<=9;i++)
	{
			for(j=1;j<=9-i;j++)
			{
				if(n[j-1]>n[j])
				{
					c = n[j];
					n[j] = n[j-1];
					n[j-1] = c;
				}

			}
/*	for(k=0;k<=9;k++)
	{
		printf(" %d ",n[k]);

		if(k<9)
		{
			printf(">|");
		}
	}
	printf("\n");
	*/
	}
	printf("\n");

	for(k=0;k<=9;k++)
	{
		printf(" %d ",n[k]);

		if(k<9)
		{
			printf(">");
		}
	}
	getch();
}