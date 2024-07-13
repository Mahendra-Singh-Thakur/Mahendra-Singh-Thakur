#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n[10],m,c;
	printf("Enter 10 terms : ");

	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Before changing the values  ");
	for(k=0;k<=9;k++)
	{
		printf(" %d ",n[k]);

		if(k<9)
		{
			printf(",");
		}
	}

	for(i=0,j=9;i<=9/2;i++,j--)
	{
	      //	printf("i[%d]=%d     j[%d]=%d\n",i,n[i],j,n[j]);
			c = n[j];
			n[j] = n[i];
			n[i] = c;
	}
	printf("\n");
	printf("After changing the values  ");
	for(k=0;k<=9;k++)
	{
		printf(" %d ",n[k]);

		if(k<9)
		{
			printf(",");
		}
	}
	getch();
}