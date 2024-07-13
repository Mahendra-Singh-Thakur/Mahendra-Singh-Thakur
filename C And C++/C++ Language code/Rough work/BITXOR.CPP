#include <stdio.h>

int main()
{
	int a, r1, b;
	scanf("%d%d", &a, &b);
	r1 = a ^ b;
	printf("a^b = %d", r1);
}