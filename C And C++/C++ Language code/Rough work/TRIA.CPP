#include <stdio.h>

int main()
{
	int i, j, n;
	printf("how many rows you have ?\nEnter rows in odd number :");
	scanf("%d", &n);
	if (n % 2 != 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= (2 * n - 1); j++)
			{
				if (j >= n - (i - 1) && j <= n + (i - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Enter rows in odd number.");
	}
	return 0;
}