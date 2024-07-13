#include<stdio.h>
int main()
{
    int n ;
    
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct triangle
// {
//     int a;
//     int b;
//     int c;
// };

// typedef struct triangle triangle;
// void sort_by_area(triangle *tr, int n)
// {
//     int p, area[100], l;
//     for (int i = 0; i < n; i++)
//     {
//         p = (tr[i].a + tr[i].b + tr[i].c) / 2;
//         area[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
//         // printf("area[%d] = %d\n", i, area[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (area[i] > area[j])
//             {
//                 // int j = area[i];
//                 // area[i] = area[j];
//                 // area[j] = j;
//                 l = (tr[i].a);
//                 (tr[i].a) = (tr[j].a);
//                 (tr[j].a) = l;
//                 l = (tr[i].b);
//                 (tr[i].b) = (tr[j].b);
//                 (tr[j].b) = l;
//                 l = (tr[i].c);
//                 (tr[i].c) = (tr[j].c);
//                 (tr[j].c) = l;
//                 // l = j;
//                 // printf("j = %d\n", l);
//             }
//         }
//         printf("area[%d] = %d\n", i, area[i]);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     triangle *tr = malloc(n * sizeof(triangle));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
//     }
//     sort_by_area(tr, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// int i = 10, b;
// int *p;
// p = &b;
// *p = 20;
// printf("%d\n", i);
// printf("%d\n", p);
// printf("%d\n", *p);
// printf("%d\n", b);

// struct box
// {
//     int length;
//     int width;
//     int height;
//     /**
//      * Define three fields of type int: length, width and height
//      */
// } typedef box;
// // struct box *boxes;
// int n;
// scanf("%d", &n);
// box *boxes = malloc(n * sizeof(box));
// printf("%d\n", sizeof(box));
// printf("%d", sizeof(*boxes));

//     int arr[1000];
//     int n, temp;
//     int b;

//     printf("# of elements");
//     scanf("%d", &b);

//     for (int a = 0; a <= b; a++)
//     {
//         scanf("%d", &arr[a]);
//     }
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 1; j <= b; j++)
//         {
//             arr[b] = temp;
//             arr[0] = arr[b];
//             arr[b - j] = temp;
//         }
//     }
// }