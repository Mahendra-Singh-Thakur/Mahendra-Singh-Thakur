#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50

void main()
{
	clrscr();
	int i,j=0,a[N];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<6;i++)
	{
		if(a[i]>j)
		{
			j=a[i];
		}
		printf("%d\n",j);
	}
	printf("%d",j);

	getch();
}