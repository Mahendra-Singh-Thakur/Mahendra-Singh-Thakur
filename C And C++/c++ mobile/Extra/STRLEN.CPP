#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	int i,l1,l2;
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	l1=strlen(s1) ;
	l2=strlen(s2);
	for(i=0;i<l2;i++)
	{
		s1[l1+i]+=s2[i];


	}
	puts(s1);
	getch();


}