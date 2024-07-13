#include <stdio.h>

int main()
{
	int a, b = 0;
	printf("Enter numbers of addition One By One AND Enter 0 to get ANSWER\n");
	do
	{
		scanf("%d", &a);
		b = a + b;

	} while (a != 0);
	printf("SUM = %d", b);
	return 0;
}
