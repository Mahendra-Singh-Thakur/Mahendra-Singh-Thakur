#include<stdio.h>

int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("you enter %d",n);
    }
    else
    {
        printf("your number is %d except 1",n);
    }
    
    return 0;
}