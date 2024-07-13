#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();

	printf("For finding the area of square press = 's'\nFor finding the area of rectangle press = 'r'\nFor finding the area of triangle press = 't'\nFor finding the area of circle press = 'c'\n");

	char alph;

	int a2,breadth,length;

	float l,r,a1,a3,b,h,a4 ;

	scanf("%c",&alph);

	switch (alph)
	{

		case 's' : printf("Enter the length of one side of square = ");
			scanf("%f",&l);
			a1 = l * l ;
			printf ("Area of square is %f square units ",a1);
		break;


		case 'r' : printf("Enter the length and breadth of rectangle  = ");
			scanf("%d%d",&length,&breadth);
			a2=length*breadth ;
			printf ("Area of rectangle is %d square units ",a2);
		 break;


		 case 'c':printf("Enter the radius of circle  = ");
			scanf("%f",&r);
			a3 = 3.1428 * r * r ;
			printf ("Area of circle is %f square units ",a3);
		 break;


		 case't' : printf("Enter the breadth and height of triangle  = ");
			scanf("%f%f",&b,&h);
			a4 = 0.5 * b * h ;
			printf ("Area of triangle is %f square units ",a4);
		 break;

		 default : printf("Enter right charactor");

		 }

		 getch();


}