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
	for(i=0;i<=s22+s11;i++)
	{
		if(i<=s11-1)
		{

			s1[i]=s1[i];

		}
		else
		{
			s1[i]=s2[i-s11];

		}

	}
	puts(s1);

	getch();


}