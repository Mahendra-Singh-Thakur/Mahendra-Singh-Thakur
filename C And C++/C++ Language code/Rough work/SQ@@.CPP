#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();

	int r,c,trc,a,b,n;

	printf("Enter odd number of rows : ");

	scanf("%d",&n);

	if(n%2!=0)
	{

		trc=(n/2)+1;

		a=2*trc+1;

		b=a/2+1;

		for(r=1;r<=trc;r++)
		{
		    //	printf("r=%d",r);
			for (c=1;c<=(2*trc+1);c++)
			{
				if((c==b)&&(r==1))
				{
					printf("* ");
				}
				else
				{
					if((c>=b-(r-1))&&(c<=b+(r-1)))
					{
					//	printf("c=%d",c);
						printf("  ");
					}
					else
					{
						printf("* ");
					}
				}
			}
			printf("\n");

		}
		for(r=trc-1;r>=1;r--)
		{
		    //	printf("r=%d",r);
			for (c=1;c<=(2*trc+1);c++)
			{
				if((c==b)&&(r==1))
				{
					printf("* ");
				}
				else
				{
					if((c>=b-(r-1))&&(c<=b+(r-1)))
					{
					//	printf("c=%d",c);
						printf("  ");
					}
					else
					{
						printf("* ");
					}
				}
			}
			printf("\n");

		}
	}
	else
	{
		printf("!!Enter odd number of rows!!");
		printf("\n!!Bye-Bye!!");
	}
	getch();
}