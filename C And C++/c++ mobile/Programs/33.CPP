#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,a,b;
	printf("Enter number for cheaking either its prime or composite : ");
	scanf("%d",&n);
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				a=i;
				printf("value of a is %d\n",a);
			}

		}
			b=n%a;
			printf("\nthe value of b is %d\n",b);

			if(n%a!=0)
			{
				printf("\n%d is prime number",n);
			}

			else
			{
				printf("\n%d is composite number",n);

			}
	getch();
}












      //	printf("%d is composite number",a);
       //	printf("%d is prime number",a) ;




