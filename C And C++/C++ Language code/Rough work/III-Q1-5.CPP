#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	clrscr();
	int i,j,n,a=1,k,b=1;
	float c;
	printf("enter number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=0;
		j=i+1;
		a=pow(i,j);
		printf("a=%d\t",a) ;
	for(k=1;k<=i+2;k++)
	{

		{
		b=b*k;
		c=a/b;
		printf("b=%f\t",c);
		}

	}

	}
	getch();


}
























//   printf("\n\nThe sum of all terms is %d.",a);