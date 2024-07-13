#include<stdio.h>

int main()
{
    int a,b,ans;
    a=10;
    b=2;

    ans = a+b;
    printf("if we %d addition %d   = %d\n\n",a,b,ans);

    ans = a-b;
    printf("if we %d subtract %d   = %d\n\n",a,b,ans);

    ans = a*b;
    printf("if we %d multiplay %d  = %d\n\n",a,b,ans);

    ans = a/b;
    printf("if we %d divide %d     = %d\n\n",a,b,ans);

    ans = a%b;
    printf("if we %d modulo %d     = %d\n\n",a,b,ans);
    return 0;
}