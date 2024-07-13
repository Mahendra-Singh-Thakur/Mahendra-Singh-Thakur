#include <stdio.h>
#include <string.h>

int main()
{
	long k, i, j, n, a[10000], sum = 0, s;
	scanf("%ld", &n);
	scanf("%ld", &s);
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}

	for (k = 0; k < n; k++)
	{
		for (i = n - 1 - k; i >= 0; i--)
		{
			sum = 0;
			for (j = 0 + k; j < n - i; j++)
			{
				sum = sum + a[j];
			}

			if (sum == s)
			{
				if (k + 1 == j)
				{
					printf("%ld position\n", j);
				}
				else
				{
					printf("%ld position to %ld position\n", k + 1, j);
				}
			}
		}
	}
	return 0;
}