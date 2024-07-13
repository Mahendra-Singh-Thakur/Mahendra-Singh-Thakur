#include<stdio.h>
#include<conio.h>
#define N 100

void main ()
{
	clrscr();
	int a[N],b=0,i,j,n;
	printf("Enter numbers of elements in array  ");
	scanf("%d",&n);
	printf("Enter elements of array  ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;

			}

		}


	}
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}