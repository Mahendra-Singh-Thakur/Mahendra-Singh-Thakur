// #include <stdio.h>

// void main()
// {
//     int a, b, c;
//     scanf("%d,%d,%d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("%d", a);
//     }
//     else if (b > c && b < a)
//     {
//         printf("%d", b);
//     }
//     else if (c > a && c > b)
//     {
//         printf("%d", c);
//     }
//     else
//     {
//         printf("wrong input");
//     }
// }
#include <stdio.h>
int main()
{
    int n = 0;
    while (--n)
    {
        printf("%d\n", n);
    }

    return 0;
}

// int sum();

// int main()
// {
//     int i, n;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", i);
//     }
//     scanf("%d", &n);

//     return 0;
// }

// int sum()
// {
//     int sum;
//     int *ptr;
//     ptr = (int *)malloc(2 * sizeof(int));
//     scanf("%d%d", &*(ptr + 0), &*(ptr + 1));
//     sum = (*(ptr + 0) + *(ptr + 1));
//     // free(ptr);
//     // free(ptr);
//     return sum;
// }

#include <stdio.h>

struct cse
{
    char name[100];
    int rolln;
    float cgpa;
};

void printstruct(struct cse s1)
{
    printf("%s\n", s1.name);
    printf("%d\n", s1.rolln);
    printf("%f\n", s1.cgpa);
}

int main()
{
    struct cse s1;
    scanf("%s", s1.name);
    scanf("%d", &s1.rolln);
    scanf("%f", &s1.cgpa);
    printstruct(s1);
    return 0;
}

// #include <stdio.h>

// void main()
// {
//     int n;
//     register int i, sum;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         sum = sum + i;
//         printf("sum = %d", sum);
//     }
// }
