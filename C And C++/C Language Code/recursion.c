// #include <stdio.h>
// void add(int, int);
// void main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     add(a, b);
// }
// void add(int a, int b)
// {
//     int c;
//     c = a + b;
//     printf("%d", c);
// }

#include <stdio.h>
int fac(int);
int main()
{
    int k, n;
    scanf("%d", &n);
    k = fac(n);
    printf("n = %d // Return value from %d recursion to main function is %d\n", n, n, k);
    printf("k = %d", k);
    return 0;
}
int fac(int n)
{
    int factorial;
    if (n == 1)
    {

        printf("recursion number is = %d\n", n);
        printf("return = %d\n\n", n);
        return 1;
    }
    int i = fac(n - 1);
    factorial = n * i;
    printf("recursion number is = %d\n", n);
    printf("n = %d // Return value from %d recursion is %d\n", n, n - 1, i);
    printf("%d*%d\n", n, i);
    printf("return = %d\n\n", factorial);
    return factorial;
}

// #include <stdio.h>
// int fac(int);
// int main()
// {
//     int k, n;
//     scanf("%d", &n);
//     k = fac(n);
//     printf("%d", k);
//     return 0;
// }
// int fac(int n)
// {
//     int factorial;
//     if (n == 1)
//     {
//         return 1;
//     }
//     factorial = n * fac(n-1);
//     return factorial;
// }
