#include <stdio.h>

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p, **q, ***r, ****s;
	p = &a[0];
	q = &p;
	r = &q;
	s = &r;
	r++;

	printf("\na = %d\n", a[0]);
	printf("&a = %u\n", &a);
	printf("p = %u\n", p);
	printf("&p = %u\n", &p);
	printf("q = %u\n", q);
	printf("&q = %u\n", &q);
	printf("r = %u\n", r);
	printf("&r = %u\n", &r);
	printf("s = %u\n", s);
	printf("&s = %u\n", &s);

	printf("\n\n*p = %d\n", *p);
	printf("**q = %d\n", **q);
	printf("***r = %d\n", ***r);
	printf("****s = %d\n", ****s);
	return 0;
}