#include <stdio.h>
#define N 50

int main()
{
	int a[N][N], b[N][N], c[N][N], i, j, k, m, n, p, q, sum;
	printf("Enter number of rows and column of first matrix :\n");
	scanf("%d%d", &m, &n);
	printf("Enter first matrix : ");

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("First matrix is :\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter number of rows and column of second matrix :\n");
	scanf("%d%d", &p, &q);

	printf("\nEnter second matrix : ");

	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("Second matrix is :\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	if (n == p)
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				sum = 0;
				for (k = 0; k < n; k++)
				{
					sum = sum + a[i][k] * b[k][j];
				}
				c[i][j] = sum;
			}
		}
		printf("\nMultiplication of first and second matrix is :\n");

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n\n");
		}
	}
	else
	{
		printf("I can't multiply those matrix");
	}
}