#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i, j;

	printf("enter number of lines :\t ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("I loop - %d", i);

		for (j = 1; j <= i; j++)
		{
			printf("\n\tJ loop - %d", j);
		}
		printf("\n\n");
	}
}