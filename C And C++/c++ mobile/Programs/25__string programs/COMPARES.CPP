#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();
	int i,lenr,lent,f=0;
	char sr[30],st[30];
	gets(sr);
	gets(st);
	lenr=strlen(sr);
  //	printf("size of lenr = %d\n",lenr);
	lent=strlen(st);
	if(lenr==lent)
	{
		for(i=0;i<=lenr;i++)
		{
			if(sr[i]==st[i])
			{

				f++;

			}

		}

		if(lenr==f-1)
		{
			printf("\nSAME");
		}
		else
		{
			printf("\nNOT SAME");
		}
	}
	else
	{
		printf("\nNOT SAME");

	}
	getch();


}