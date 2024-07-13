#include <stdio.h>
#include <stdlib.h>
void pattern1(int);
/*
 *                 *
 * *             * *
 * * *         * * *
 * * * *     * * * *
 * * * * * * * * * *
 * * * * * * * * * *
 * * * *     * * * *
 * * *         * * *
 * *             * *
 *                 *
 */
void pattern2(int);
/*
 ********
 *      *
 *      *
 *      *
 *      *
 *      *
 *      *
 ********
 */
void pattern3(int);
/*
 *        *
 **      **
 * *    * *
 *  *  *  *
 *   **   *
 *   **   *
 *  *  *  *
 * *    * *
 **      **
 *        *
 */
void pattern4(int);
/*
 *                 *
 * *             * *
 *   *         *   *
 *     *     *     *
 *       * *       *
 *       * *       *
 *     *     *     *
 *   *         *   *
 * *             * *
 *                 *
 */
void pattern5(int);
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
0 1 0 1 0 1 0 1
*/
void pattern6(int);
/*
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 * * * * * * *
 */
void pattern7(int);
/*
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
  6 5 4 3 2 1 2 3 4 5 6
7 6 5 4 3 2 1 2 3 4 5 6 7
*/
void pattern8(int);
/*
 *                         *
 * *                     * *
 *   *                 *   *
 *     *             *     *
 *       *         *       *
 *         *     *         *
 *           * *           *

 */
void pattern9(int);
/*
 *                     *
 * *                 * *
 * * *             * * *
 * * * *         * * * *
 * * * * *     * * * * *
 * * * * * * * * * * * *
 */
void pattern10(int);
/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
void pattern11(int);
/*
1 2 3 4 5 6 7
2 3 4 5 6 7 1
3 4 5 6 7 1 2
4 5 6 7 1 2 3
5 6 7 1 2 3 4
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/
int main()
{
    int n;
    scanf("%d", &n);
    pattern10(n);
    return 0;
}

void pattern11(int n)
{
    int num;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        num = 1;
        for (int j = 2; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}
void pattern10(int n)
{
    for (int i = n; i >= 1; i--)
    {
        int a = n;
        for (int sp = 1; sp <= n - i; sp++)
        {
            printf("%d ", a);
            a--;
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%d ", i);
        }
        a++;
        // for (int sp = 1; sp <= n - i; sp++)
        // {
        //     printf("%d ", a);
        //     a++;
        // }
        printf("\n");
    }
    // for (int i = 2; i <= n; i++)
    // {
    //     int a = n;
    //     for (int sp = 1; sp <= n - i; sp++)
    //     {
    //         printf("%d ", a);
    //         a--;
    //     }
    //     for (int j = 1; j <= (2 * i - 1); j++)
    //     {
    //         printf("%d ", i);
    //     }
    //     a++;
    //     for (int sp = 1; sp <= n - i; sp++)
    //     {
    //         printf("%d ", a);
    //         a++;
    //     }
    //     printf("\n");
    // }
}
void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int k = i; k >= 1; k--)
        {
            printf("* ");
        }
        for (int space = 0; space <= (2 * n) - (2 * i) - 1; space++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern8(int n)
{
    // for (int i = 0; i <= n; i++)
    // {
    for (int i = 1; i <= n; i++)
    {
        for (int st1 = 1; st1 <= 1; st1++)
        {
            printf("* ");
        }
        for (int sp = 1; sp <= i - 2; sp++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st2 = 1; st2 <= 1; st2++)
            {
                printf("* ");
            }
        }
        for (int sp2 = 1; sp2 <= ((2 * n) - (2 * i)); sp2++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st3 = 1; st3 <= 1; st3++)
            {
                printf("* ");
            }
        }
        for (int sp3 = 1; sp3 <= i - 2; sp3++)
        {
            printf("  ");
        }
        for (int st3 = 1; st3 <= 1; st3++)
        {
            printf("* ");
        }

        printf("\n");
    }
    // for (size_t i = 0; i < count; i++)
    // {
    /* code */
    // }
    // }
}
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }
        for (int num1 = i; num1 >= 1; num1--)
        {
            printf("%d ", num1);
        }
        for (int num2 = 2; num2 <= i; num2++)
        {
            printf("%d ", num2);
        }

        printf("\n");
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= (n - i); sp++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // if (i % 2 == 0)
            // {
            //     if (j % 2 == 0)
            //     {
            //         printf("1 ");
            //     }
            //     else
            //     {
            //         printf("0 ");
            //     }
            // }
            // else
            // {
            //     if (j % 2 == 0)
            //     {
            //         printf("0 ");
            //     }
            //     else
            //     {
            //         printf("1 ");
            //     }
            // }

            /*********************************************************************/

            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else if ((i + j) % 2 != 0)
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int st1 = 1; st1 <= 1; st1++)
        {
            printf("* ");
        }
        for (int sp = 1; sp <= i - 2; sp++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st2 = 1; st2 <= 1; st2++)
            {
                printf("* ");
            }
        }
        for (int sp2 = 1; sp2 <= ((2 * n) - (2 * i)); sp2++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st3 = 1; st3 <= 1; st3++)
            {
                printf("* ");
            }
        }
        for (int sp3 = 1; sp3 <= i - 2; sp3++)
        {
            printf("  ");
        }
        for (int st3 = 1; st3 <= 1; st3++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int st1 = 1; st1 <= 1; st1++)
        {
            printf("* ");
        }
        for (int sp = 1; sp <= i - 2; sp++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st2 = 1; st2 <= 1; st2++)
            {
                printf("* ");
            }
        }
        for (int sp2 = 1; sp2 <= ((2 * n) - (2 * i)); sp2++)
        {
            printf("  ");
        }
        if (i >= 2)
        {
            for (int st3 = 1; st3 <= 1; st3++)
            {
                printf("* ");
            }
        }
        for (int sp3 = 1; sp3 <= i - 2; sp3++)
        {
            printf("  ");
        }
        for (int st3 = 1; st3 <= 1; st3++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int st1 = 1; st1 <= 1; st1++)
        {
            printf("*");
        }
        for (int sp = 1; sp <= i - 2; sp++)
        {
            printf(" ");
        }
        if (i >= 2)
        {
            for (int st2 = 1; st2 <= 1; st2++)
            {
                printf("*");
            }
        }
        for (int sp2 = 1; sp2 <= ((2 * n) - (2 * i)); sp2++)
        {
            printf(" ");
        }
        if (i >= 2)
        {
            for (int st3 = 1; st3 <= 1; st3++)
            {
                printf("*");
            }
        }
        for (int sp3 = 1; sp3 <= i - 2; sp3++)
        {
            printf(" ");
        }
        for (int st3 = 1; st3 <= 1; st3++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int st1 = 1; st1 <= 1; st1++)
        {
            printf("*");
        }
        for (int sp = 1; sp <= i - 2; sp++)
        {
            printf(" ");
        }
        if (i >= 2)
        {
            for (int st2 = 1; st2 <= 1; st2++)
            {
                printf("*");
            }
        }
        for (int sp2 = 1; sp2 <= ((2 * n) - (2 * i)); sp2++)
        {
            printf(" ");
        }
        if (i >= 2)
        {
            for (int st3 = 1; st3 <= 1; st3++)
            {
                printf("*");
            }
        }
        for (int sp3 = 1; sp3 <= i - 2; sp3++)
        {
            printf(" ");
        }
        for (int st3 = 1; st3 <= 1; st3++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int sp1 = 1; sp1 <= (n - i); sp1++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int st1 = 1; st1 <= i; st1++)
        {
            printf("* ");
        }
        for (int sp = 1; sp <= ((2 * n) - (2 * i)); sp++)
        {
            printf("  ");
        }
        for (int st2 = 1; st2 <= i; st2++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int st1 = 1; st1 <= i; st1++)
        {
            printf("* ");
        }
        for (int sp = 1; sp <= ((2 * n) - (2 * i)); sp++)
        {
            printf("  ");
        }
        for (int st2 = 1; st2 <= i; st2++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
