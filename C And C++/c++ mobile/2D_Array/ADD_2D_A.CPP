#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int i,j,a[2][3],b[2][3],c[2][3];
	printf("Enter element of first matrix ; ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			 printf("%d\t",a[i][j]);

		}
		printf("\n");

	}
	printf("Enter element of second matrix : ");

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);

		}

	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			 printf("%d\t",b[i][j]);

		}
		printf("\n");

	}
	printf("Addition of first and second matrix is :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			 c[i][j]=a[i][j] + b[i][j];
			 printf("%d\t",c[i][j]);

		}
		printf("\n");

	}

	getch();

}