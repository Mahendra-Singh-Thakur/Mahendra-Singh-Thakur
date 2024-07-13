#include <stdio.h>

void main()
{
	int j;
	long double p, r, t, i, p2;
	char c;
	printf("Enter (m) for finding interest in month = \nEnter (y) for finding interest in year = ");
	scanf("%c", &c);
	if (c == 'y')
	{
		printf("Enter principal amount = ");
		scanf("%Lf", &p);
		printf("Enter rate of interest = ");
		scanf("%Lf", &r);
		printf("Enter time in year = ");
		scanf("%Lf", &t);

		for (j = 1; j <= t; j++)
		{
			p2 = p;
			p = p / 100;
			i = p * r * 12;
			printf("interest of %d year = %Lf\n", j, i);
			p = p2 + i;
		}
	}
	else if (c == 'm')
	{
		printf("Enter principal amount = ");
		scanf("%Lf", &p);
		printf("Enter rate of interest = ");
		scanf("%Lf", &r);
		printf("Enter time in month = ");
		scanf("%Lf", &t);

		p2 = p;
		p = p / 100;
		i = p * r;
		i = i * t;
		p = p2 + i;

		printf("interest of %Lf month = %Lf\n", t, i);
	}

	printf("total amount is %Lf", p);
}
