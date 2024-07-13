#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 50

void main ()
{
	clrscr();
	int n,i,j,max1,max2,l1,l2=0,f=1;
	char a[N][N]={"Mahendra","Singh","Thakur"};
	printf("Enter number of elements in array is ");
      //	scanf("%d",&n);
	printf("Enter elements of array\n");

	for(i=0;i<3;i++)
	{

		l1=strlen(a[i]);
		printf("%d ",l1);
		printf("%s\n",a[i]);
		if(l1>l2)
		{
			l2=l1;
			f=0;
		}

	}
	printf("\n%d  ,  %d",l1,l2);
	getch();
}