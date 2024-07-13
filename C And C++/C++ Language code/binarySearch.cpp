#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[7] = {8, 10, 12, 21, 27, 34, 42};
    cout << binarySearch(arr, 7, 27);
    return 0;
}
// // // #include <iostream>

// // // using namespace std;

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     int key;
// // //     cin >> key;
// // //     int arr[n];
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //     }

// // //     int start = 0;
// // //     int end = n - 1;
// // //     while (start <= end)
// // //     {
// // //         int mid = start + (end - start) / 2;
// // //         if (arr[mid] == key)
// // //         {
// // //             cout << "Key found at index: " << mid << endl;
// // //             break;
// // //         }
// // //         else if (arr[mid] > key)
// // //         {
// // //             end = mid - 1;
// // //         }
// // //         else
// // //         {
// // //             start = mid + 1;
// // //         }
// // //     }

// // //     if (start > end)
// // //     {
// // //         cout << "Key not found" << endl;
// // //     }

// // //     return 0;
// // // }

// // // #include <iostream>
// // // #include <algorithm>

// // // using namespace std;

// // // int main()
// // // {
// // //     int n;
// // //     cout << "Enter the size of the array: ";
// // //     cin >> n;

// // //     int key;
// // //     cout << "Enter the key to search for: ";
// // //     cin >> key;

// // //     int arr[n];
// // //     cout << "Enter the elements of the array: ";
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //     }

// // //     // Check if the array is sorted
// // //     if (!is_sorted(arr, arr + n))
// // //     {
// // //         cout << "Error: The input array must be sorted in ascending order" << endl;
// // //         return 1;
// // //     }

// // //     // Check if the array contains duplicate values
// // //     if (adjacent_find(arr, arr + n) != arr + n)
// // //     {
// // //         cout << "Warning: The input array contains duplicate values" << endl;
// // //     }

// // //     int start = 0;
// // //     int end = n - 1;
// // //     while (start <= end)
// // //     {
// // //         int mid = (end + start) / 2;
// // //         // int mid = start + (end - start) / 2;
// // //         if (arr[mid] == key)
// // //         {
// // //             cout << "Key found at index: " << mid << endl;
// // //             break;
// // //         }
// // //         else if (arr[mid] > key)
// // //         {
// // //             end = mid - 1;
// // //         }
// // //         else
// // //         {
// // //             start = mid + 1;
// // //         }
// // //     }

// // //     if (start > end)
// // //     {
// // //         cout << "Key not found" << endl;
// // //     }

// // //     return 0;
// // // }
// #include <iostream>

// class DynamicQueue {
// private:
//     int* queueArray;
//     int front;
//     int rear;
//     int capacity;

// public:
//     DynamicQueue(int size) {
//         capacity = size;
//         queueArray = new int[capacity];
//         front = -1;
//         rear = -1;
//     }

//     ~DynamicQueue() {
//         delete[] queueArray;
//     }

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return (rear + 1) % capacity == front;
//     }

//     void enqueue(int item) {
//         if (isFull()) {
//             cout<< "Queue is full, so we need to dynamically resize it"<<endl;
//             int newCapacity = capacity * 2;
//             int* newQueueArray = new int[newCapacity];

//             int j = 0;
//             for (int i = front; i <= rear; i = (i + 1) % capacity) {
//                 newQueueArray[j] = queueArray[i];
//                 j++;
//             }

//             delete[] queueArray;
//             queueArray = newQueueArray;
//             capacity = newCapacity;
//             front = 0;
//             rear = j - 1;
//         }

//         if (isEmpty()) {
//             front = 0;
//             rear = 0;
//         } else {
//             rear = (rear + 1) % capacity;
//         }

//         queueArray[rear] = item;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
//             return -1;
//         }

//         int item = queueArray[front];
//         if (front == rear) {
//             // If there is only one element in the queue, reset the front and rear
//             front = -1;
//             rear = -1;
//         } else {
//             front = (front + 1) % capacity;
//         }
//         return item;
//     }
// };

// int main() {
//     DynamicQueue queue(5);

//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);

//     std::cout << "Dequeued: " << queue.dequeue() << std::endl;
//     std::cout << "Dequeued: " << queue.dequeue() << std::endl;

//     queue.enqueue(4);
//     queue.enqueue(5);
//     queue.enqueue(6);

//     while (!queue.isEmpty()) {
//         std::cout << "Dequeued: " << queue.dequeue() << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//         back = NULL;
//     }

//     void enqueue(int data)
//     {
//         node *newnode = new node();

//         if (newnode == NULL)
//         {
//             cout << "No space in memory. Cannot enqueue." << endl;
//             return;
//         }

//         newnode->data = data;
//         newnode->next = NULL;

//         if (front == NULL)
//         {
//             front = newnode;
//         }
//         else
//         {
//             back->next = newnode;
//         }

//         back = newnode;
//     }

//     void dequeue()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return;
//         }

//         node *temp = front;
//         front = front->next;
//         delete temp;

//         if (front == NULL)
//         {
//             back = NULL; // Update back when the queue becomes empty
//         }
//     }

//     int peek()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty. Cannot peek." << endl;
//             return -1;
//         }
//         return front->data;
//     }
// };

// int main()
// {
//     queue que;
//     que.enqueue(1);
//     que.enqueue(2);
//     que.enqueue(3);
//     que.enqueue(4);
//     que.enqueue(5);
//     que.enqueue(6);
//     printf("%d\n", que.peek());
//     que.dequeue();
//     printf("%d\n", que.peek());
//     que.dequeue();
//     printf("%d\n", que.peek());
//     que.dequeue();
//     printf("%d\n", que.peek());
//     que.dequeue();
//     printf("%d\n", que.peek());
//     que.dequeue();
//     printf("%d\n", que.peek());
//     que.dequeue();
//     que.dequeue();

//     return 0;
// }

// // #include <iostream>
// // using namespace std;
// // #define N 5
// // class node
// // {
// // public:
// //     node *pre;
// //     int data;
// //     node *next;
// // };
// // class queue
// // {
// //     node *front;
// //     node *back;

// // public:
// //     queue()
// //     {
// //         front = NULL;
// //         back = NULL;
// //     }
// //     void enqueue(int data)
// //     {
// //         node *newnode = new node();

// //         if (newnode == NULL)
// //         {
// //             cout << "no space in memory" << endl;
// //             return;
// //         }
// //         if (front == NULL)
// //         {
// //             front = newnode;
// //             newnode->data = data;
// //             back = newnode;
// //             return;
// //         }
// //         newnode->data = data;
// //         newnode->pre = back;
// //         newnode->next = NULL;
// //         back->next = newnode;
// //         back = newnode;
// //     }

// //     void dequeue()
// //     {
// //         if (front == NULL)
// //         {
// //             cout << "Queue is empty. Cannot dequeue." << endl;
// //             return;
// //         }
// //         node *temp;
// //         temp = front;
// //         front = front->next;
// //         front->pre = NULL;
// //         free(temp);
// //         // if (front > back)
// //         // {
// //         //     // Reset the queue when it becomes empty
// //         //     front = NULL;
// //         //     back = NULL;
// //         // }
// //     }
// //     int peek()
// //     {
// //         if (front == NULL)
// //         {
// //             cout << "Queue is empty. Cannot dequeue." << endl;
// //             return -1;
// //         }
// //         return front->data;
// //     }
// // };
// // int main()
// // {
// //     node no;
// //     queue que;
// //     que.enqueue(1);
// //     que.enqueue(2);
// //     que.enqueue(3);
// //     que.enqueue(4);
// //     que.enqueue(5);
// //     que.enqueue(6);
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     printf("%d\n", que.peek());
// //     que.dequeue();
// //     que.dequeue();
// //     que.dequeue();
// //     que.dequeue();
// //     // printf("empty : %d\n", que.isEmpty());

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // #define N 5
// // class node
// // {
// // public:
// //     node *pre;
// //     int data;
// //     node *next;
// // };
// // class queue
// // {
// //     node *front;
// //     node *back;

// // public:
// //     queue()
// //     {
// //         front = NULL;
// //         back = NULL;
// //     }
// //     void enqueue(int data)
// //     {
// //         node *newnode = new node();

// //         if (newnode == NULL)
// //         {
// //             cout << "no space in memory" << endl;
// //             return;
// //         }
// //         if (front == NULL)
// //         {
// //             newnode->data = data;
// //             back = newnode;
// //             return;
// //         }
// //         newnode->data = data;
// //         newnode->pre=back;
// //         back->next=newnode;
// //         back = newnode;
// //     }

// //     void dequeue()
// //     {
// //         if (front == NULL)
// //         {
// //             cout << "Queue is empty. Cannot dequeue." << endl;
// //             return;
// //         }
// //         node *temp;
// //         temp=front;
// //         front=front->next;
// //         front->pre=NULL;
// //         free(temp);
// //         // if (front > back)
// //         // {
// //         //     // Reset the queue when it becomes empty
// //         //     front = NULL;
// //         //     back = NULL;
// //         // }
// //     }

// //     int peek()
// //     {
// //         if (front == NULL)
// //         {
// //             return -1;
// //         }
// //         return arr[front];
// //     }

// //     bool isEmpty()
// //     {
// //         return (front == NULL || front > back);
// //     }
// // };
// // int main()
// // {
// //     node no;
// //     no.getnode();
// //     // no.getnode();
// //     // // queue que;
// //     // // que.enqueueNULL);
// //     // // que.enqueue(2);
// //     // // que.enqueue(3);
// //     // // que.enqueue(4);
// //     // // que.enqueue(5);
// //     // // que.enqueue(6);
// //     // // printf("%d\n", que.peek());
// //     // // que.dequeue();
// //     // // printf("%d\n", que.peek());
// //     // // que.dequeue();
// //     // // printf("%d\n", que.peek());
// //     // // que.dequeue();
// //     // // printf("%d\n", que.peek());
// //     // // que.dequeue();
// //     // // printf("%d\n", que.peek());
// //     // // que.dequeue();
// //     // // que.dequeue();
// //     // // printf("empty : %d\n", que.isEmpty());

// //     return 0;
// // }