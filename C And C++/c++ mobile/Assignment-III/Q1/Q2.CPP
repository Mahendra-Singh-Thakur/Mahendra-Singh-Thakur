#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,n,a=0,b=0;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("\n");
	printf("(");
	for(i=1;i<=n;i++)
	{
		a=a+i;
		b=b+a;
		printf(" %d ",a);
		if(i<n)
		{
		printf("+");
		}
	}
	printf(")");
	printf("\n\nThe sum of all number is %d.",b);
	getch();

}