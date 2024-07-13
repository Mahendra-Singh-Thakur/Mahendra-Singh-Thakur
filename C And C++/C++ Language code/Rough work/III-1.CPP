#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int i,j,k,n,a,b=1,c,d=0;
	printf("enter number of terms :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		a=i*2;
		b=b+a;
		c=b-a;
		d=c;

		for(j=1;j<=1;j++)
		{
			c=c+d;
			printf("%d\t",c);
		}
	}
       getch();
}
