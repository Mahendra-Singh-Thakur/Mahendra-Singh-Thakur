#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(b<c)
		{
			printf("%d is Greater",c);
		}
		else
		{
			printf("%d is Greater",b);
		}
	}
	else
	{
		printf("%d is Greater",a);
	}

	getch();
}