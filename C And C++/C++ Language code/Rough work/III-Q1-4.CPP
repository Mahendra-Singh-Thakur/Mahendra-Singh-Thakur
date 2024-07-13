#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,k,n,a,b=1,c;
	float e,d=0;
	printf("Enter number : ");
	scanf("%d",&n);
	a=n;
		n=a*2;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			c=i;
			printf("%d\t",c);
		}
	}

	for(j=1;j<=c;j++)
	{
		b=b*j;
		e=1/b;
		d=d+e;
		printf("%f\t",e);

	}

//		for(k=1;k<=c;k++)
  //		{
    //			e=1/b;
      //			d=d+e;
	//	}

	printf("\nThe sum of all terms is %f",d);


	getch();

}