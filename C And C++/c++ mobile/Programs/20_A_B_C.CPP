#include<stdio.h>
#include<conio.h>

void main ()
{       clrscr();
	int a,b,c;
	printf("Enter three number\n");
	scanf("%d%d%d",&a,&b,&c);

		if((c<b)&&(b<a)&&(c<a))
	{

			printf("%d < %d < %d",c,b,a);

	}
		else if ((a<b)&&(b<c)&&(a<c))
	{

			printf("%d < %d < %d",a,b,c);

	}
		else if ((b<c)&&(c<a)&&(b<a))
	{

			printf("%d < %d < %d",b,c,a);

	}
		else if ((c<a)&&(a<b)&&(c<b))
	{

			printf("%d < %d < %d",c,a,b);

	}
		else if ((b<a)&&(a<c)&&(b<c))
	{

			printf("%d < %d < %d",b,a,c);

	}
		else if ((a<c)&&(c<b)&&(a<b))
	{

			printf("%d < %d < %d",a,c,b);

	}
		else if ((a==c)&&(c<b))
	{

			printf("%d = %d < %d",a,c,b);

	}

		else if ((a==b)&&(b<c))
	{

			printf("%d = %d < %d",a,b,c);

	}

		else if ((c==b)&&(b<a))
	{

			printf("%d = %d < %d",c,b,a);

	}

		else if ((a==b)&&(b==c))
	{

			printf("%d = %d = %d",a,b,c);

	}


		else if ((a==c)&&(c>b))
	{

			printf("%d = %d > %d",a,c,b);

	}

		else if ((a==b)&&(b>c))
	{

			printf("%d = %d > %d",a,b,c);

	}

		else if ((b==c)&&(c>a))
	{

			printf("%d = %d > %d",b,c,a);

	 }


	getch();

 }