#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();

	int lenr,i,j;

	char sa[30],sb[30],sc;

	gets(sa);

	lenr=strlen(sa);

	for(i=0;i<lenr/2;i++)
	{
		sc=sa[i];
		sa[i]=sa[lenr-i-1];
		sa[lenr-i-1]=sc;

	}
	puts(sa);

	getch();


}
