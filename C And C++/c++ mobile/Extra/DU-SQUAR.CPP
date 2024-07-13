#include <iostream>
int main()
{
	int i, st1, sp, st2, n;
	printf("Enter number of terms : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("* ");
	}
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		printf("* ");
	}
	printf("\n");

	for (i = 1; i <= n - 4; i++)
	{
		for (st1 = 2; st1 <= 3; st1++)
		{
			printf("* ");
		}
		for (sp = 2; sp <= n - 3; sp++)
		{
			printf("  ");
		}
		for (st2 = 2; st2 <= 3; st2++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (i =  1; i <= n; i++)
	{
		printf("* ");
	}
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		printf("* ");
	}
}