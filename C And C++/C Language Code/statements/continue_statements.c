#include<stdio.h>

int main()
{
    int i,n,ans;
    ans = 0;
    printf("Enter 5 number for addition one by one = ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n<=0)
        {
            continue;
        }
        ans = ans + n;
    }
    printf("Answer is %d",ans);
    return 0;

}