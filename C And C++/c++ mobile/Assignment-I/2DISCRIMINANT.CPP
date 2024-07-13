#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	printf("Write the value of a =");
	printf("\nWrite the value of b =");
	printf("\nWrite the value of c =");

	int a,b,c,discri;

	scanf("%d%d%d",&a,&b,&c);
	discri = b*b*4*a*c;
	printf("\nThe discriminant is = %d",discri);
	getch();

}
