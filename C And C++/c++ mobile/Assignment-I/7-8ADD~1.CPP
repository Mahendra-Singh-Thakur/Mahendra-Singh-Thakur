#include <stdio.h>
#include <conio.h>

int main()
{
	int num, n1, n2, n3, reverse, sum;
	printf("Enter 3 digit number for reversing = \t");
	scanf("%d", &num);

	printf("\nThe three digit number before reversing is = %d", num);

	n1 = num % 10;
	num /= 10;
	n2 = num % 10;
	n3 = num / 10;

	printf("\n%d  %d  %d", n1, n2, n3);
	sum = n1 + n2 + n3;
	printf("\n\nThe sum of three digit number is = %d", sum);

	n1 *= 100;
	n2 *= 10;

	reverse = n1 + n2 + n3;

	printf("\n\nThe three digit number after revesing is = %d", reverse);

	return 0;
}