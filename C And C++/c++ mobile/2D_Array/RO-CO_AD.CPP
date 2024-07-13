#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int a[3][3],i,j,sumrow,sumcol;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n\n");

	}

	for(i=0;i<3;i++)
	{
		sumcol=sumrow=0;
		for(j=0;j<3;j++)
		{
			sumrow=sumrow+a[i][j];
			sumcol=sumcol+a[j][i];

		}
		printf("sum of %d row = %d , sum of %d column = %d\n\n",i+1,sumrow,i+1,sumcol);


	}
	getch();

}