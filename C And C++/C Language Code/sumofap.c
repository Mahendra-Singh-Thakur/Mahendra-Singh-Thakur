// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct node *head;
//     struct node *one;
//     struct node *two;
//     head = malloc(sizeof(struct node));
//     one = malloc(sizeof(struct node));
//     two = malloc(sizeof(struct node));
//     head->data = 66;
//     head->link = one;
//     one->data = 1;
//     one->link = two;
//     two->data = 2;
//     two->link = NULL;
//     while (head != NULL)
//     {
//         printf("element = %d\n", head->data);
//         head = head->link;
//     }

//     printf("%d\n", head->data);
//     printf("%d\n", head->link);
//     printf("%u\n", head);
// }

// #include <stdio.h>
// int main()
// {
//     int a[3][4];
//     for (int i = 0; i <= 3; i++)
//     {
//         for (int j = 0; j <= 4; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int  a, b;
//     char ch;
//     printf("Enter 'a' for addition\n");
//     printf("Enter 's' for subtraction\n");
//     printf("Enter 'm' for multiplication\n");
//     printf("Enter 'd' for division\n");
//     scanf("%c", &ch);
//     switch (ch)
//     {
//     case 'a':

//         scanf("%d%d", &a, &b);
//         printf("%d", a + b);
//         break;
//     case 's':
//         scanf("%d%d", &a, &b);
//         printf("%d", a - b);
//         break;
//     case 'm':
//         scanf("%d%d", &a, &b);
//         printf("%d", a * b);
//         break;
//     case 'd':
//         scanf("%d%d", &a, &b);
//         printf("%d", a / b);
//         break;
//     }
//     return 0;
// }

#include <stdio.h>

int prime(int);
int main()
{
    int n, count;
    scanf("%d", &n);
    count = 0;
    for (int i = 2; (count < n); i++)
    {
        if (prime(i) == 1)
        {
            printf("%d", i);
            count++;
            printf("\n");
        }
    }
    return 0;
}
int prime(int n)
{
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}