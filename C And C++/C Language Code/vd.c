// #include <stdio.h>

// void main()
// {
//     char ch;
//     scanf("%d", &ch);

//     switch (ch)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         printf("%c is vowel", ch);
//         break;

//     default:
//     {
//         printf("%c is consonant", ch);
//     }
//     break;
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define MAX_RANDOM_NUMBERS 10
// #define MIN_VALUE 1
// #define MAX_VALUE 1000

// int main()
// {
//     int i;
//     int randomNumber;

//     // Set the seed for the random number generator
//     srand(time(NULL));

//     printf("Random Numbers:\n");

//     // Generate and print random numbers
//     for (i = 0; i < MAX_RANDOM_NUMBERS; i++)
//     {
//         randomNumber = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
//         printf("%d ", randomNumber);
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// #define MAX_SIZE 100

// void matrixMultiplication(int matrixA[][MAX_SIZE], int matrixB[][MAX_SIZE], int resultMatrix[][MAX_SIZE], int n) {
//     int i, j, k;

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             resultMatrix[i][j] = 0;
//             for (k = 0; k < n; k++) {
//                 resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }
// }

// void displayMatrix(int matrix[][MAX_SIZE], int n) {
//     int i, j;
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrixA[MAX_SIZE][MAX_SIZE];
//     int matrixB[MAX_SIZE][MAX_SIZE];
//     int resultMatrix[MAX_SIZE][MAX_SIZE];
//     int n, i, j;

//     printf("Enter the order of the matrices: ");
//     scanf("%d", &n);

//     printf("Enter the elements of Matrix A:\n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &matrixA[i][j]);
//         }
//     }

//     printf("Enter the elements of Matrix B:\n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &matrixB[i][j]);
//         }
//     }

//     matrixMultiplication(matrixA, matrixB, resultMatrix, n);

//     printf("Resultant Matrix:\n");
//     displayMatrix(resultMatrix, n);

//     return 0;
// }

// #include <stdio.h>

// #define MAX_ROWS_A 100
// #define MAX_COLS_A 100
// #define MAX_ROWS_B 100
// #define MAX_COLS_B 100
// #define MAX_ROWS_RESULT MAX_ROWS_A
// #define MAX_COLS_RESULT MAX_COLS_B

// void matrixMultiplication(int matrixA[][MAX_COLS_A], int rowsA, int colsA,
//                           int matrixB[][MAX_COLS_B], int rowsB, int colsB,
//                           int resultMatrix[][MAX_COLS_RESULT])
// {
//     int i, j, k;

//     for (i = 0; i < rowsA; i++)
//     {
//         for (j = 0; j < colsB; j++)
//         {
//             resultMatrix[i][j] = 0;
//             for (k = 0; k < colsA; k++)
//             {
//                 resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }
// }

// void displayMatrix(int matrix[][MAX_COLS_RESULT], int rows, int cols)
// {
//     int i, j;
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < cols; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int matrixA[MAX_ROWS_A][MAX_COLS_A];
//     int matrixB[MAX_ROWS_B][MAX_COLS_B];
//     int resultMatrix[MAX_ROWS_RESULT][MAX_COLS_RESULT];
//     int rowsA, colsA, rowsB, colsB;
//     int i, j;

//     printf("Enter the number of rows and columns of Matrix A: ");
//     scanf("%d %d", &rowsA, &colsA);

//     printf("Enter the elements of Matrix A:\n");
//     for (i = 0; i < rowsA; i++)
//     {
//         for (j = 0; j < colsA; j++)
//         {
//             scanf("%d", &matrixA[i][j]);
//         }
//     }

//     printf("Enter the number of rows and columns of Matrix B: ");
//     scanf("%d %d", &rowsB, &colsB);

//     printf("Enter the elements of Matrix B:\n");
//     for (i = 0; i < rowsB; i++)
//     {
//         for (j = 0; j < colsB; j++)
//         {
//             scanf("%d", &matrixB[i][j]);
//         }
//     }

//     if (colsA != rowsB)
//     {
//         printf("Matrix multiplication not possible.\n");
//         return 1;
//     }

//     matrixMultiplication(matrixA, rowsA, colsA, matrixB, rowsB, colsB, resultMatrix);

//     printf("Resultant Matrix:\n");
//     displayMatrix(resultMatrix, rowsA, colsB);

//     return 0;
// }

#include <stdio.h>

#define MAX_ROWS_A 100
#define MAX_COLS_A 100
#define MAX_ROWS_B 100
#define MAX_COLS_B 100
#define MAX_ROWS_C 100
#define MAX_COLS_C 100
#define MAX_ROWS_RESULT MAX_ROWS_A
#define MAX_COLS_RESULT MAX_COLS_C

void matrixMultiplication(int matrixA[][MAX_COLS_A], int rowsA, int colsA,
                          int matrixB[][MAX_COLS_B], int rowsB, int colsB,
                          int matrixC[][MAX_COLS_C], int rowsC, int colsC,
                          int resultMatrix[][MAX_COLS_RESULT])
{
    int i, j, k;

    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsC; j++)
        {
            resultMatrix[i][j] = 0;
            for (k = 0; k < colsA; k++)
            {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j] * matrixC[i][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_COLS_RESULT], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrixA[MAX_ROWS_A][MAX_COLS_A];
    int matrixB[MAX_ROWS_B][MAX_COLS_B];
    int matrixC[MAX_ROWS_C][MAX_COLS_C];
    int resultMatrix[MAX_ROWS_RESULT][MAX_COLS_RESULT];
    int rowsA, colsA, rowsB, colsB, rowsC, colsC;
    int i, j;

    printf("Enter the number of rows and columns of Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the elements of Matrix A:\n");
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsA; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the number of rows and columns of Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    printf("Enter the elements of Matrix B:\n");
    for (i = 0; i < rowsB; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("Enter the number of rows and columns of Matrix C: ");
    scanf("%d %d", &rowsC, &colsC);

    printf("Enter the elements of Matrix C:\n");
    for (i = 0; i < rowsC; i++)
    {
        for (j = 0; j < colsC; j++)
        {
            scanf("%d", &matrixC[i][j]);
        }
    }

    if (colsA != rowsB || colsB != rowsC)
    {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    matrixMultiplication(matrixA, rowsA, colsA, matrixB, rowsB, colsB, matrixC, rowsC, colsC, resultMatrix);

    printf("Resultant Matrix:\n");
    displayMatrix(resultMatrix, rowsA, colsC);

    return 0;
}
