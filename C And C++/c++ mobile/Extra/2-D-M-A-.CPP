#include<stdio.h>
#include<conio.h>

float sol=0;
void div(float a,float b)
{
	sol=a/b;
	return sol;
}
void mul(float a,float b)
{
	sol=a*b;
	return sol;
}
void add(float a,float b)
{
	sol=a+b;
	return sol;
}
void sub(float a,float b)
{
	sol=a-b;
	return sol;
}

void main()
{
	clrscr();
	float a,b;
	scanf("%d%d",&a,&b);
	sol=div(a,b);
	printf("division of %f / %f is equal to %f",a,b,sol);
	sol=mul(a,b);
	printf("multiplication of %f * %f is equal to %f",a,b,sol);
	sol=add(a,b);
	printf("addition of %f + %f is equal to %f",a,b,sol);
	sol=sub(a,b);
	printf("subtraction of %f - %f is equal to %f",a,b,sol);
	getch();

}