#include <stdio.h>

int main()
{
	int a, n, k, l, r, j, n1, r1, n_r, M;
	long fn, fr, fn_r;
	printf("Enter number of values : ");
	scanf("%d", &a);

	for (n = 1; n <= a; n++)
	{
		for (j = 1; j <= (a - n); j++)
		{
			printf("  ");
		}

		/*
		 */
		if (n == 1)
		{
			//	printf(" 1 ");
			fn = 1;
		}
		else
		{
			fn = 1;
			for (n1 = 1; n1 <= n - 1; n1++)
			{
				fn = fn * n1;
			}
			//	printf(" %ld ",fn);
		}

		for (k = 1, l = n; k <= (n); k++, l--)
		{
			if (k == 1)
			{
				//	printf(" 1 ");
				fr = 1;
			}
			else
			{
				fr = 1;
				for (r1 = 1; r1 <= k - 1; r1++)
				{
					fr = fr * r1;
				}

				//	printf(" %ld ",fr);
			}
			//	printf("*   ");
			if (l == 1)
			{
				//	printf(" 1 ");
				fn_r = 1;
			}
			else
			{
				fn_r = 1;
				for (n_r = 1; n_r <= l - 1; n_r++)
				{
					fn_r = fn_r * n_r;
				}

				//	printf(" (%ld) ",fn_r);
			}
			M = (fn / (fn_r * fr));
			printf("%d   ", M);
		}

		printf("\n");
	}
}