#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,j,f,p,ap,af;
	float s=0;
	printf("Enter number terms : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	printf("\n\ni=%d  ",i);
		ap=1;
		for(p=1;p<=i+1;p++)
		{
			printf("  p=%d  ",p);
			ap=ap*i;
			printf("  ap=%d  ",ap);
		}
		af=1;
		for(f=1;f<=i+2;f++)
		{
			printf("  f=%d  ",f);
			af=af*f;
			printf("  af=%d  ",af);
		}
		s=s+(ap/af);
		printf("  s=%f  ",s);

	}
	printf("The sum of all terms is %f",s);
	getch();
}