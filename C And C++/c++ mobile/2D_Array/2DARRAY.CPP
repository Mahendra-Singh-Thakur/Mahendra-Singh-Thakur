#include<stdio.h>

int main ()
{
	int i,j,a[2][3];
	printf("Enter element of matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}
	printf("\nRepresent in matrix form\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n\n");

	}
	printf("\nMatrix after transpose\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);

		}
		printf("\n\n");

	}
	return 0;
}