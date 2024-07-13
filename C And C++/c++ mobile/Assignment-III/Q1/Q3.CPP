#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	clrscr();
	int i,n,a=0,b=2,c;
	printf("enter number of terms : ");
	scanf("%d",&n);
	printf("\n");
	printf("(");
	for(i=1;i<=n;i++)
	{
		c=pow(i,b);
		a=a+c;
		printf(" %d ",c);
		if(i<n)
		{
			printf("+");
		}

	}
	printf(")");
	printf("\n\nThe sum of all terms is %d.",a);
	getch();


}