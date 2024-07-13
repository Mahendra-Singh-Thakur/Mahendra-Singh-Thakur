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

// Function to delete the node at the start of the list
void deleteAtStart(struct LinkedList *list)
{
    if (list->start == NULL)
    {
        printf("No elements in list\n");
    }
    else
    {
        struct Node *temp = list->start;
        list->start = list->start->next;
        if (list->start != NULL)
        {
            list->start->previous = NULL;
        }
        free(temp);
    }
}

// Function to delete the last node in the list
void deleteAtEnd(struct LinkedList *list)
{
    if (list->start == NULL)
    {
        printf("No elements in list\n");
    }
    else if (list->start->next == NULL)
    {
        // Special case: only one element in the list
        free(list->start);
        list->start = NULL;
    }
    else
    {
        struct Node *temp = list->start;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        struct Node *temp2 = temp->next;
        temp->next = NULL;
        free(temp2);
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

    insertAtEnd(&list1, 1);
    insertAtEnd(&list1, 2);
    insertAtEnd(&list1, 3);
    insertAtEnd(&list1, 4);
    insertAtEnd(&list1, 5);
    insertAtEnd(&list1, 6);
    display(&list1); // Output: 1 2 3 4 5 6
    // Delete operations
    printf("After performing deletion operations\n");
    deleteAtStart(&list1);
    deleteAtEnd(&list1);
    display(&list1); // Output: 2 3 4 5

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// // Define a node structure for a doubly linked list
// struct Node
// {
//     struct Node *previous;
//     int data;
//     struct Node *next;
// };

// // Define a linked list structure
// struct LinkedList
// {
//     struct Node *start;
// };

// // Function to initialize a linked list
// void initialize(struct LinkedList *list)
// {
//     list->start = NULL;
// }

// // Function to insert a new node at the end of the list
// void insertAtEnd(struct LinkedList *list, int value)
// {
//     struct Node *newNode;
//     if (list->start == NULL)
//     {
//         newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->previous = NULL;
//         newNode->data = value;
//         newNode->next = NULL;
//         list->start = newNode;
//     }
//     else
//     {
//         newNode = (struct Node *)malloc(sizeof(struct Node));
//         struct Node *temp = list->start;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->previous = temp;
//         newNode->data = value;
//         newNode->next = NULL;
//     }
// }

// // Function to insert a new node at the start of the list
// void insertAtStart(struct LinkedList *list, int value)
// {
//     struct Node *newNode;
//     if (list->start == NULL)
//     {
//         newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->previous = NULL;
//         newNode->data = value;
//         newNode->next = NULL;
//         list->start = newNode;
//     }
//     else
//     {
//         newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->previous = NULL;
//         newNode->data = value;
//         newNode->next = list->start;
//         list->start->previous = newNode;
//         list->start = newNode;
//     }
// }

// // Function to display the linked list
// void display(struct LinkedList *list)
// {
//     struct Node *temp = list->start;

//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     struct LinkedList list1;
//     initialize(&list1);

//     // insertAtStart(&list1, 1);
//     // insertAtStart(&list1, 2);
//     // insertAtStart(&list1, 3);
//     // insertAtStart(&list1, 4);
//     insertAtEnd(&list1, 1);
//     insertAtEnd(&list1, 2);
//     insertAtEnd(&list1, 3);
//     insertAtEnd(&list1, 4);
//     display(&list1);

//     return 0;
// }

// // #include <iostream>
// // #include <climits>
// // using namespace std;

// // int main()
// // {
// //     int num1 = 111;
// //     int num2 = 101;
// //     int dig1, dig2, a, carry, ans, count, arr[12];
// //     ans = 0;
// //     carry = 0;
// //     count = 0;
// //     while (num1 > 0 || num2 > 0)
// //     {
// //         dig1 = num1 % 10;
// //         dig2 = num2 % 10;
// //         if (dig1 == 0 && dig2 == 0)
// //         {

// //             if (carry == 1)
// //             {
// //                 arr[count] = 1;
// //                 carry = 0;
// //             }
// //             else
// //             {
// //                 arr[count] = 0;
// //                 carry = 0;
// //             }
// //         }

// //         if (dig1 == 1 && dig2 == 1)
// //         {

// //             if (carry == 1)
// //             {
// //                 arr[count] = 1;
// //                 carry = 1;
// //             }
// //             else
// //             {
// //                 arr[count] = 0;
// //                 carry = 1;
// //             }
// //         }
// //         if ((dig1 == 1 && dig2 == 0) || (dig1 == 0 && dig2 == 1))
// //         {
// //             if (carry == 1)
// //             {
// //                 arr[count] = 0;
// //                 carry = 1;
// //             }
// //             else
// //             {
// //                 arr[count] = 1;
// //                 carry = 0;
// //             }
// //         }
// //         count++;
// //         // cout << "dig1 = " << dig1 << endl;
// //         // cout << "dig2 = " << dig2 << endl;
// //         num1 = num1 / 10;
// //         num2 = num2 / 10;
// //     }
// //     if (carry == 1)
// //     {
// //         arr[count] = 1;
// //     }
// //     while (count >= 0)
// //     {
// //         ans = (ans * 10) + arr[count];
// //         count--;
// //     }
// //     cout << ans;
// // }