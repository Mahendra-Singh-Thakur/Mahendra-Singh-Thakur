#include<stdio.h>

int main()
{
    int a,b,ans;
    a=10;
    b=2;

    (a<b) ? printf("Yes\n") : printf("No\n");

    (a>b) ? printf("Yes\n") : printf("No\n");

    ans = (a<b) ? a : b;
    printf("%d\n",ans);


    ans = (a>b) ? a : b;
    printf("%d\n",ans);
    return 0;
}