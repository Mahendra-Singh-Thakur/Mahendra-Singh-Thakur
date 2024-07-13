#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	printf("enter 5 subject marks = \n");
	float s1,s2,s3,s4,s5,per;
	scanf ("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	per= (s1+s2+s3+s4+s5)/5;
	printf("percentage of 5 subject marks is = %f\n",per) ;


	if (per>=75)
	{
		printf("\nThe student gets I division")  ;
	}
	else if ((per>=60)&&(per<75))
	{
		printf("\nThe student gets II division")  ;

	}



		else if ((per>=45)&&(per<60))
	{
		printf("\nThe student gets III division")  ;
	}



	else if ((per>=35)&&(per<45))
	{
		printf("\nThe student gets IV division")  ;

	}


	else
	{
		printf("\nYOU OUR FAIL")  ;
	}
	getch();

}




