#include<stdio.h>
#include<conio.h>

int main()

{

	clrscr();

	int a=0,b=0,n=0;

	char*arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

	scanf("%d%d",&a,&b);

	for(n=a;n<=b;n++)

	{

	if(n>9)

	{

		if(n%2==0)

		{

			printf("even\n");

		}

		else
		{

			printf("odd\n");

		}

	}

	else
	{

		puts(arr[n]);

	}

	}

	getch();
	return 0;

}