#include <stdio.h>
#include <conio.h>
#define N 50

int main()
{
	int matrix1[N][N], matrix2[N][N], mult_of_matrix[N][N], i, j, k, row1, col1, row2, col2, sum;
	printf("Enter number of rows and column of first matrix :\n");
	scanf("%d%d", &row1, &col1);
	printf("Enter first matrix : ");

	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("First matrix is :\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("%d\t", matrix1[i][j]);
		}
		printf("\n");
	}

	printf("Enter number of rows and column of second matrix :\n");
	scanf("%d%d", &row2, &col2);

	printf("\nEnter second matrix : ");

	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	printf("Second matrix is :\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}
	if (col1 == row2)
	{
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col2; j++)
			{
				sum = 0;
				for (k = 0; k < col1; k++)
				{
					sum = sum + matrix1[i][k] * matrix2[k][j];
				}
				mult_of_matrix[i][j] = sum;
			}
		}
		printf("\nMultiplication of first and second matrix is :\n");

		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col2; j++)
			{
				printf("%d\t", mult_of_matrix[i][j]);
			}
			printf("\n\n");
		}
	}
	else
	{
		printf("I can't multiply these matrix");
	}

	return 0;
}