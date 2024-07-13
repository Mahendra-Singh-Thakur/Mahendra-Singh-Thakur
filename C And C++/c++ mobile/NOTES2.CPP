#include<stdio.h>
#include<conio.h>
#define N 50
void main()
{
	clrscr();
	int n,i,j;
	int row,f_tri,rev_tri,t_tri;
	scanf("%d",&n);
	for (row=1,i=n;row<=n;row++,i--)
	{
		for(f_tri=1 , j=n ; f_tri<=(row-1);f_tri++ , j--)
		{
			printf("%d ",j);
		}
		for(rev_tri=1;rev_tri<=((2*j)-1);rev_tri++)
		{
			printf("%d ",i);
		}
		for(t_tri=(row-1) , j=n-row+2 ;t_tri>=1;t_tri-- , j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for (row=n-1,i=2;row>=1;row--,i++)
	{
		for(f_tri=1 , j=n ; f_tri<=(row-1);f_tri++ , j--)
		{
			printf("%d ",j);
		}
		for(rev_tri=1;rev_tri<=((2*j)-1);rev_tri++)
		{
			printf("%d ",i);
		}
		for(t_tri=(row-1) , j=n-row+2 ;t_tri>=1;t_tri-- , j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();

}