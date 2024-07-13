#include <stdio.h>

int main()
{
	int i, a, b, c, n;
	printf("Enter two number for finding HCF :\t");
	scanf("%d%d", &a, &b);
	for (c = 1; c != 0;)

	{

		c = b % a;

		printf("HCF=%d\t", c);
		b = a;
		a = c;
	}
	return 0;
}
