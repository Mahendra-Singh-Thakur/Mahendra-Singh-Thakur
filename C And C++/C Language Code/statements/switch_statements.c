#include<stdio.h>

int main()
{
    int a,b,ans;
    ans=0;
    char operator;
    scanf("%c",&operator);
    switch (operator)
    {
    case '+':printf("enter a number one by one for addition OR for end a program  enter  0 = ");
            while(1)
            {
                scanf("%d",&a);
                if(a==0)
            {
                break;
            }
                ans = ans + a;
            }
            printf("your answer is = %d",ans);

            break;
    case '-':printf("enter a number one by one for addition OR for end a program  enter  0 = ");
            while(1)
            {
                scanf("%d",&a);
                if(a==0)
            {
                break;
            }
            ans = ans - a;
            }
            printf("your answer is = %d",ans);

            break;        
    
    default:
        break;
    }
    return 0;
}