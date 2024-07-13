#include <stdio.h>
#include <conio.h>

int main()
{
	int trc, r, sp, st, a = 1, x = 1, y = 1, z;
	printf("Enter number of lines : ");
	scanf("%d", &trc);

	for (r = 1; r <= trc; r++)
	{
		for (sp = 1; sp <= trc - r; sp++)
		{
			printf(" ");
		}
		for (st = 1; st <= r; st++)
		{

			if ((st > (1)) && (st < (r)))
			{
				z = x + y;
				printf("%d ", z);
			}
			else
			{
				printf("%d ", a);
			}
		}
		printf("\n");
	}
}