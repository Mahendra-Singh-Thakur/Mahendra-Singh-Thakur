#include<stdio.h>
#include<conio.h>

void main ()
{
	clrscr();
	int age,salary;
	scanf("%d%d",&age ,&salary);
	if(age>40 && salary<5000)
	{
		salary=salary+1000 ;
	}
	else
	{
		salary=salary+500 ;
	}
//	else
  //	{
    //		salary=salary+100;
      //	}
	printf("salary = %d",salary);
	getch();
}