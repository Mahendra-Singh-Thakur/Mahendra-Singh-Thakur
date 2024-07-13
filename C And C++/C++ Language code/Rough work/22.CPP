#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();

	int *ptr;
	{
		int a=10;

		ptr=&a;

		printf("%d\n",*ptr);
	}
//	int a;
	(*ptr)+=90;
	printf("%d\n",*ptr);
  //	printf("%d\n",a);
	getch();
}