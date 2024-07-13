#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element of first array :",i+1);
		scanf("%d",&a[i]);
		printf("Enter %d element of second array :",i+1);
		scanf("%d",&b[i]);

	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("\nThe sum of (%d) form first array and (%d) from second array is %d",a[i],b[i],c[i]);

	}
	getch();

}