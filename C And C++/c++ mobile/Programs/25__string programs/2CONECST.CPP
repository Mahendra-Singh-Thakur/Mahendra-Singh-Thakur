#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
	clrscr();
	int i,s11,s22;
	char s1[30],s2[30] ;
	gets(s1);
	gets(s2);
	s11=strlen(s1);
	s22=strlen(s2);
       //	printf("\n%d\n",s11);
      //	printf("\n%d\n",s22);
	for(i=0;i<=s22;i++)
	{
		s1[s11+i]=s2[i];

	}
	puts(s1);

	getch();


}