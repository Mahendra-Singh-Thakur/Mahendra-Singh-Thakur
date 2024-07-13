#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n[10],m,a,b=1;
	printf("Enter 10 terms : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("\nEnter number for finding term : ");
	scanf("%d",&m);

	for(k=0;k<=9;k++)
	{
		if(m==n[k])
		{
			a=k;
			a=a+1;
			b=2;
			printf("\n%d is in %d term.",n[k],a);
		}

	}
	if(b==1)
	{
		printf("\n  Not found");
	}

	getch();
}
