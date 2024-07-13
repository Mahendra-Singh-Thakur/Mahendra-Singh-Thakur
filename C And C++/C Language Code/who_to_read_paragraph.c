#include <stdio.h>
#define N 1000

int main()
{
    FILE *fptr;
    fptr = fopen("input.txt", "r");
    int row, col;
    char ch;
    fscanf(fptr, "%d", &row);
    fscanf(fptr, "%d", &col);
    fclose(fptr);

    /****************************************/

    fopen("output.txt", "w");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                // ch = '*';
                // fprintf(fptr, "%c", ch);

                fputs("* ", fptr);
            }
            if (j == 1 || j == col)
            {
                fputs("* ", fptr);
                // ch = '*';
                // fprintf(fptr, "%c", ch);
            }
        }
        ch = '\n';
        fprintf(fptr, "%c", ch);
    }

    // fprintf(fptr, "%d", n);
    fclose(fptr);
}

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("input.txt", "r");
//     char ch[N];
//     int j = 0;
//     while (1)
//     {
//         fscanf(fptr, "%c", &ch[j]);
//         if (feof(fptr))
//         {
//             break;
//         }
//         j++;
//     }
//     ch[j] = '\0';
//     fprintf(fptr,"\n,j = %d", j);
//     // fprintf(fptr,"\n,i = %d", i);
//     fc(lose(fptr);

//     fptr = fopen("output.txt", "w");
//     int i = 0;
//     while (1)
//     {
//         if (ch[i] == '\0')
//         {
//             break;
//         }
//         fputc(ch[i], fptr);
//         i++;
//     }
//     fclose(fptr);

//     return 0;
// }
