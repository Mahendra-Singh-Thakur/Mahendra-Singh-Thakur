#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b;
	int *ptr=(int *)malloc(sizeof (int));
	ptr=&a;
	*ptr=10;
	printf("%d\n",*ptr);
	free (ptr);
	printf("%u\n",ptr);
	printf("%d",*ptr);


	getch();

}