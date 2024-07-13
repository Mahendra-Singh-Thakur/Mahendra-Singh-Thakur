#include<stdio.h>

int main ()
{
	int marks;
	scanf("%d",&marks);
	if(marks>80)
		printf("first grade");
	else if(marks==53)
		printf("first grade");
	else if (marks>70)
		printf("second grade");
	else if (marks>60)
		printf("third grade");
	else
		printf("third class student");
	return 0;
}