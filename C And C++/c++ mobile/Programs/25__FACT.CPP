#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,f=1,n;
	printf("enter factorial number : \t");
	scanf("%d",&n) ;
	for(i=1;i<=n;i++)
	{

		f=f*i;
	}
	printf("%d",f) ;
	getch();

}