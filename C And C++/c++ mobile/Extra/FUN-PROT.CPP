#include<iostream>
void fun (int x,int y)
{
	printf("x=%d,y=%d\n",y,x);
} 
int main()
{
	int x=5,y=7;
	fun (x,y);
	printf("x=%d,y=%d",x,y);
}