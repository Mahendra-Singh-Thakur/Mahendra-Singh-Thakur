#include <iostream>
main()
{
	int i = 5;
	float f = 5.82;
	char c = 'A';
	void *vp;

	vp = &i;
	printf("%d\n", *(int *)vp);

	vp = &f;
	printf("%f\n", *(float *)vp);

	vp = &c;
	printf("%c\n", *(char *)vp);
}