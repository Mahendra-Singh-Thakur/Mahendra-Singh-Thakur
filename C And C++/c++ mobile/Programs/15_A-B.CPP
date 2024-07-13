#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float a,b,c;
	printf("enter thre numbers :\n");
	scanf("%f%f%f",&a,&b,&c);

	if ((a<b) && (b<c))
	{

	printf("%f is greatest",c);

	}
	if ((c<b)&&(b<a))
	{
	printf("%f is greatest",a);
	 }

	if ((c<a)&&(a<b))
	{
	printf("%f is greatest",b);
	}

	if ((a<c)&&(c<b))
	{
	printf("%f is greatest",b);
	}

	if ((b<c)&&(c<a))
	{
	printf("%f is greatest",a);
	 }

	if ((b<a)&&(a<c))
	{
	printf("%f is greatest",c);
	}
	getch();


}