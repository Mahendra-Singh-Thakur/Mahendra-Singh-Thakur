#include<stdio.h>
#include<conio.h>

	int sum(int a,int b)
	{
		int ans=a-b;
		return ans ;
	}
	int main ()
	{
		clrscr();
		int a,b,result;
		scanf("%d%d",&a,&b);
		result=sum(a,b);
		printf("result = %d",result);
		getch();
		return 0;
	}


