#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, a = 1, b = 0, c;
	printf("enter term number : \t");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		b = a + b;
		printf("%d\t", b);
		b = b + 1;
	}
	return 0;
}