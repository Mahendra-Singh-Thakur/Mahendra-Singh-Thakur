#include<stdio.h>
#include<conio.h>
#define N 50

/*void main()
{
	clrscr();
	int n,i,j,a[N],b=0;
	printf("Enter number of elements in array is ");
	scanf("%d",&n);
	printf("Enter elements of array\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}

		}
	}

	printf("The second largest element of array is %d",a[n-2]);

	getch();
} */

void main ()
{
	clrscr();
	int a[50],n,i,max1,max2;
	printf("Enter number of elements in array is ");
	scanf("%d",&n);
	printf("Enter elements of array\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		max1=a[0] ;
		max2=a[1];
	}
	else
	{
		max1=a[1];
		max2=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}
//	printf("The second largest element of array is %d\n",max1);
	printf("The second largest element of array is %d",max2);

	getch();
}