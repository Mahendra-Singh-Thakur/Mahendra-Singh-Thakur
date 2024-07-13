#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,f,n;
	float s=0;
	printf("enter terms number : ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		f=1;
		for (j=1;j<=((2*i)-1);j++)
		{
			f=f*j;
		}
		s=s+(1/f);
	}
	printf("the sum of all terms is %f",s);
	getch();
}
