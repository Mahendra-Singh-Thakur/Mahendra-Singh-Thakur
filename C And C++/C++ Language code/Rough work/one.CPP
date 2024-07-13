#include<stdio.h>

int main()
{

	int marks[100],n,i,ans1=0,ans2=0;

	char ch;

	scanf("%d",&n);

	marks[0]=marks[1]=0;


	for(i=0;i<=n;i++)
	{

		scanf("%d",&marks[i]);

	}
	for(i=0;i<=n;i++)
	{

		if(i%2==0)

		{

			ans1=ans1+marks[i];

		}

		else

		{

			ans2=ans2+marks[i];
		}

	}

	scanf("%c",&ch);

	if(ch=='b')

	{

		printf("%d",ans1);

	}

	if(ch=='g')

	{

		printf("%d",ans2);

	}

	return 0;

}