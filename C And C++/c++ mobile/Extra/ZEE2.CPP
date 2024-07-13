#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,st1,sp,st2,n;
	printf("Enter number of terms : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			printf("* ");
		}
		printf("\n");
	for(i=1;i<=n-2;i++)
	{
		for(sp=1;sp<=i;sp++)
		{
			printf("  ");
		}
		for(st1=2;st1<=2;st1++)
		{
			printf("* ");
		}

		printf("\n");
	}
	for(i=1;i<=n;i++)
		{
			printf("* ");
		}

	getch();


}