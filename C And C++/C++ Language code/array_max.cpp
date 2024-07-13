#include <stdio.h>
#include <stdlib.h>

// Define a node structure for a doubly linked list
struct Node
{
    struct Node *previous;
    int data;
    struct Node *next;
};

// Define a linked list structure
struct LinkedList
{
    struct Node *start;
};

// Function to initialize a linked list
void initialize(struct LinkedList *list)
{
    list->start = NULL;
}

// Function to insert a new node at the end of the list
void insertAtEnd(struct LinkedList *list, int value)
{
    struct Node *newNode;
    if (list->start == NULL)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->previous = NULL;
        newNode->data = value;
        newNode->next = NULL;
        list->start = newNode;
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        struct Node *temp = list->start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->previous = temp;
        newNode->data = value;
        newNode->next = NULL;
    }
}

// Function to insert a new node at the start of the list
void insertAtStart(struct LinkedList *list, int value)
{
    struct Node *newNode;
    if (list->start == NULL)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->previous = NULL;
        newNode->data = value;
        newNode->next = NULL;
        list->start = newNode;
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->previous = NULL;
        newNode->data = value;
        newNode->next = list->start;
        list->start->previous = newNode;
        list->start = newNode;
    }
}

// Function to display the linked list
void display(struct LinkedList *list)
{
    struct Node *temp = list->start;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct LinkedList list1;
    initialize(&list1);

    // insertAtStart(&list1, 1);
    // insertAtStart(&list1, 2);
    // insertAtStart(&list1, 3);
    // insertAtStart(&list1, 4);
    insertAtEnd(&list1, 1);
    insertAtEnd(&list1, 2);
    insertAtEnd(&list1, 3);
    insertAtEnd(&list1, 4);
    display(&list1);

    return 0;
}

// #include <iostream>
// using namespace std;

// int max_of_subarrays(int *, int *, int, int);

// int main()
// {

//     int ar[10000];
//     int n, k;
//     cin >> n >> k;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     max_of_subarrays(ar, arr, n, k);
//     cout << endl;
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         cout << ar[i] << " ";
//     }

//     return 0;
// }
// int max_of_subarrays(int *ar, int *arr, int n, int k)
// {
//     int i, j, l, g, count;
//     for (i = 0; i < n; i++)
//     {
//         if (i <= n - k)
//         {
//             count = 1;
//             for (g = 0, j = i; g < k; j++, g++)
//             {
//                 cout << arr[j] << " ";
//                 if (count == 1)
//                 {
//                     ar[i] = arr[j];
//                 }
//                 if (ar[i] < arr[j])
//                 {
//                     ar[i] = arr[j];
//                 }
//                 count++;
//             }
//             cout << "= " << ar[i];
//             cout << endl;
//         }
//     }
//     return 0;
// }
