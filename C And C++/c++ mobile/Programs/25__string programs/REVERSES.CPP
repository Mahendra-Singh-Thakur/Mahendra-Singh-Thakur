#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();

	int lenr,i,j;

	char sa[30],sb[30],sc[30];

	gets(sa);

	lenr=strlen(sa);

  //	printf("size of lenr = %d\n",lenr);

	for(i=0;i<=lenr;i++)
	{
		sb[i]=sa[i];
	}

	for(i=0,j=lenr-1;i<lenr;i++,j--)
	{
		sa[i]=sb[j];

	}

	puts(sa);

	getch();


}