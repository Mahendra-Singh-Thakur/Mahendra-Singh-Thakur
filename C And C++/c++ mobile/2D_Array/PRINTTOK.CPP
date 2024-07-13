#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	int n,i;
	char *ch;
	scanf("%[^\n]",ch);
	n=strlen(ch);
	for (i=0;i<=n;i++)
	{
		if(ch[i]==' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",ch[i]);
		}
	}
	getch();
}