#include <stdio.h>
int main()
{
    int a, n, k, i = 0;
    scanf("%d", &a);
    k = a;
    while (a)
    {
        k = a % 10;
        i = i * 10 + k;
        a = a / 10;
    }
    printf("%d\n", i);

    return 0;
}