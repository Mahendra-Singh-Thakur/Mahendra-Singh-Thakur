#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();
	int i,len,k;
	char st[30];
	gets(st);
	len=strlen(st);
	for(i=0;i<=len;i++)
	{
		if(st[i]>='A'&&st[i]<='Z')
		{
			st[i]=st[i]+32;

		}

	}
	puts(st);

	getch();


}