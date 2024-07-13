#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();
	printf("enter boy name;\t");
	char a[10];
	scanf("%s",&a);
	if(strcmp(a,"mayur") )
	{

	printf("%s is bad boy",a) ;

	}

	else
	{
	printf("%s is good boy",a)   ;
	}
	getch();
}

