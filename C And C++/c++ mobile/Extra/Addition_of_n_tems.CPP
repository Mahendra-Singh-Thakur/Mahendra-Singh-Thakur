#include <stdio.h>
#include <conio.h>

int main()
{

	int n, i, f = 0;

	printf("enter number :\t");

	scanf("%d", &n);

	for (i = 1; i <= n; i = i + 1)
	{
		f = f + i;
	}

	printf("the answer is %d\n", f);
}