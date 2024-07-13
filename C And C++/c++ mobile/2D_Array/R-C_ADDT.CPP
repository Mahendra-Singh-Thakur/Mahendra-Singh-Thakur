#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[3][3],i,j,sum=0,su=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);

		}
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];

		}
		printf("=   %d\n\n",sum);
		sum=0;

	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("||\t");

	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			su=su+a[j][i];

		}
		printf("%d\t",su);
		su=0;
	}


	getch();

}