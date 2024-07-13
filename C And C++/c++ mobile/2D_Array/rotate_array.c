#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
char *ltrim(char *);
char *rtrim(char *);
char **split_string(char *);

int parse_int(char *);

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(int c_count, int *c)
{

    int num_jump = 0, i = 0;
    while (i < c_count - 1)
    {
        if (c[i + 2] == 0)
        {
            num_jump++;
            i = i + 2;
        }
        else
        {
            num_jump++;
            i++;
        }
    }
    return num_jump;
}

int main()
{
    FILE *fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int n = parse_int(ltrim(rtrim(readline())));

    char **c_temp = split_string(rtrim(readline()));

    int *c = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int c_item = parse_int(*(c_temp + i));

        *(c + i) = c_item;
    }

    int result = jumpingOnClouds(n, c);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char *data = malloc(alloc_length);

    while (true)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data)
        {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data)
        {
            data = '\0';
        }
    }
    else
    {
        data = realloc(data, data_length + 1);

        if (!data)
        {
            data = '\0';
        }
        else
        {
            data[data_length] = '\0';
        }
    }

    return data;
}

char *ltrim(char *str)
{
    if (!str)
    {
        return '\0';
    }

    if (!*str)
    {
        return str;
    }

    while (*str != '\0' && isspace(*str))
    {
        str++;
    }

    return str;
}

char *rtrim(char *str)
{
    if (!str)
    {
        return '\0';
    }

    if (!*str)
    {
        return str;
    }

    char *end = str + strlen(str) - 1;

    while (end >= str && isspace(*end))
    {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char **split_string(char *str)
{
    char **splits = NULL;
    char *token = strtok(str, " ");

    int spaces = 0;

    while (token)
    {
        splits = realloc(splits, sizeof(char *) * ++spaces);

        if (!splits)
        {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char *str)
{
    char *endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0')
    {
        exit(EXIT_FAILURE);
    }

    return value;
}

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_HEIGHT 41

// struct box
// {
//     int length;
//     int width;
//     int height;
//     /**
//      * Define three fields of type int: length, width and height
//      */
// };
// typedef struct box box;

// int get_volume(box b)
// {
//     return b.length * b.width * b.height;
// }

// int is_lower_than_max_height(box b)
// {
//     // printf("%d\n", b.length);
//     // printf("%d\n", b.width);
//     // printf("%d\n", b.height);
//     if (b.height < MAX_HEIGHT)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     box *boxes = malloc(n * sizeof(box));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (is_lower_than_max_height(boxes[i]))
//         {
//             printf("%d\n", get_volume(boxes[i]));
//         }
//     }
//     return 0;
// }
// // //#include <stdio.h>
// // // int main()
// // // {
// // //     int age;
// // //     scanf("%d", &age);
// // //     (age > 18) ? printf("can vote") : (age == 18) ? printf("eligibal")
// // //                                                   : printf("can not vote");
// // //     return 0;
// // // }
// // #include <stdio.h>

// // int main()
// // {
// //     int arr[100000], arr1[100000], n, d, flag = 10;
// //     scanf("%d", &n);
// //     scanf("%d", &d);
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     for (int i = 0; i < d; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             if (i % 2 == 0)
// //             {
// //                 if (j == (n - 1))
// //                 {
// //                     arr1[j] = arr[0];
// //                     flag = 1;
// //                     // printf("arr1=%d\n", arr1[j]);
// //                 }
// //                 else
// //                 {
// //                     arr1[j] = arr[j + 1];
// //                     // printf("arr1=%d\n", arr1[j]);
// //                 }
// //             }
// //             else
// //             {
// //                 if (j == (n - 1))
// //                 {
// //                     flag = 0;
// //                     arr[j] = arr1[0];
// //                     // printf("arr1=%d\n", arr1[j]);
// //                 }
// //                 else
// //                 {
// //                     arr[j] = arr1[j + 1];
// //                     // printf("arr1=%d\n", arr1[j]);
// //                 }
// //             }
// //         }
// //         // printf("\n");
// //     }
// //     if (flag == 1)
// //     {
// //         for (int i = 0; i < n; i++)
// //         {
// //             printf("%d", arr1[i]);
// //         }
// //     }
// //     // printf("\n\n");
// //     if (flag == 0)
// //     {
// //         for (int i = 0; i < n; i++)
// //         {
// //             printf("%d", arr[i]);
// //         }
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     char a[1000];
// //     scanf("%[^\n]%c", &a);
// //     printf("%s", a);
// //     return 0;
// // }