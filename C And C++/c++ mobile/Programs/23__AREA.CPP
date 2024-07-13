#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	printf("For finding the area of square press = 's'\nFor finding the area of rectangle press = 'r'\nFor finding the area of triangle press = 't'\nFor finding the area of circle press = 'c'\n");
	char alph;
	int a,b,c,k,a2,breadth,length,area;
	float s,m,l,r,h,a1,a5,a3,a4;
	scanf("%c",&alph);
	printf("You enter '%c'\n",alph);



	if( alph == 's' )
	{

		printf("Enter the length of one side of square = ");
		scanf("%f",&l);
		a1 = l * l ;
		printf ("Area of square is %f square units ",a1);

	}

	if (alph == 'r')
	{
	printf("Enter the length and breadth of rectangle  = ");
		scanf("%d%d",&length,&breadth);
		a2=length*breadth ;
		printf ("Area of rectangle is %d square units ",a2);

	}

	if (alph == 'c')
	{
	printf("Enter the radius of circle  = ");
		scanf("%f",&r);
		a3 = 3.1428 * r * r ;
		printf ("Area of circle is %f square units ",a3);

	}

	if (alph == 't')
	{
		printf("What you have ?\n\nIf you have breadth and height of triangle then press = '1'\nIf you have all three side of triangle then press = '2'\n");

		scanf("%d",&k);

		if (k==1)
		{
			printf("Enter the base and height of triangle  = ");
			scanf("%f%f",&b,&h);
			area = 1/2 * b * h ;
			printf ("Area of triangle is %f square units ",area);
		}

		else if (k==2)
		{
			printf("enter three sides of triangle: ");

			scanf("%d%d%d",&a,&b,&c);

			s=(a+b+c)/2;

			m=s*(s-a)*(s-b)*(s-c);

			area=sqrt(m);

			printf("Area of a triangle is = %f square units",area);
		}

	}

	getch();
}











