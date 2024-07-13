#include<stdio.h>
#include<conio.h>

int main()

{

	clrscr();

	int a,i,b,n[9],n1=9;

	scanf("%d%d",&a,&b);

	if(a>=1)

	{

		if(b<=9)

	{

		n1=b;

	}

	for(i=a;i<=n1;i++)

	{

		n[i]=i;

	}



	for(i=a;i<=n1;i++)

	{

		switch(n[i])

		{

			case 1:printf("one\n");

			break;

			case 2:printf("two\n");

			break;

			case 3:printf("three\n");

			break;

			case 4:printf("four\n");

			break;

			case 5:printf("five\n");

			break;

			case 6:printf("six\n");

			break;

			case 7:printf("seven\n");

			break;

			case 8:printf("eight\n");

			break;

			case 9:printf("nine\n");

			break;

			}

		}

	}

	if(a%2==0)

	{

		printf("even\n");

	}

	else {

		printf("odd\n");

	}

	if(b%2==0)

	{

		printf("even");

	}

	else

	{

		printf("odd");

	}

	getch();

	return 0;
}