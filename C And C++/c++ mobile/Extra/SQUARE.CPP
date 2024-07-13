#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,st1,sp,st2,n;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		printf("* ");
	}
	printf("\n");

	for(i=1;i<=n-2;i++)
	{
		for(st1=2;st1<=2;st1++)
		{
			printf("* ");
		}
		for(sp=2;sp<=n-1;sp++)
		{
			printf("  ");
		}
		for(st2=2;st2<=2;st2++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(j=1;j<=n;j++)
	{
		printf("* ");
	}
	getch();


}