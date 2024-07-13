#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	printf("enter 5 subject marks = \n");
	float s1,s2,s3,s4,s5,percent;
	scanf ("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	percent= (s1+s2+s3+s4+s5)/5;
	printf("percentage of 5 subject marks is = %f", percent) ;
	getch();


}