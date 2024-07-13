#include <stdio.h>
int main()
{
    int n, ans;
    ans = 0;
    printf("enter a number one by one for addition OR for end a program  enter  0 = ");
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        ans = ans + n;
    }
    printf("your answer is = %d", ans);
    return 0;
}