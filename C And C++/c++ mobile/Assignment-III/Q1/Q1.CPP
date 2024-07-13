#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int i,j,n,a,b=1,c,d=0;
	printf("enter number of terms :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		a=i*2;
		b=b+a;
		c=b-a;
   //		printf("\na=%d\t",a);
     //		printf("\nb=%d\t",b);
       //		printf("\nc=%d\t",c);
			if(i<2)
			{
			printf("\n( 1");
			}
		if(i>1)
		{
		printf(" + %d",c);
		}
		d=d+c;

	}
	printf(" )");
	printf("\n\nThe sum of all terms is %d.",d);
       getch();
}
