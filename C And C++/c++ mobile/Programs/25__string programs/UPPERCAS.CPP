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
		if(st[i]>='a'&&st[i]<='z')
		{
			st[i]=st[i]-32;

		}

	}
	puts(st);

	getch();


}