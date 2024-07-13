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
	     //	printf("j=%d ",n[j]);
			for(j=0;j<=9;j++)
			{     //	printf("k=%d ",n[k]);
				if(n[i]<n[j])
				{
					c = n[i];
					n[i] = n[j];
					n[j] = c;

				}
			}
       //	   printf("\n");
	}
	for(k=0;k<=9;k++)
	{
		printf(" %d ",n[k]);
		if(k<9)
		{
			printf("<");
		}
	}



	getch();
}