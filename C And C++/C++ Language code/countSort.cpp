// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;
// void printArr(int arr[], int size)
// {
//     cout << "arr is : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {7, 7, 7, 3, 3, 3, 2, 3, 9, 0, 0, 6, 6, 5, 4, 1, 2, 3, 9, 9, 2, 1};
//     // int arr[] = {1, 3, 2, 3, 4, 1, 4, 3};
//     int size = sizeof(arr) / sizeof(int);
//     printArr(arr, size);
//     vector<int> count(11, 0);
//     vector<int> pos(11, 0);
//     for (int i = 0; i < size; i++)
//     {
//         count[arr[i]]++;
//     }
//     int temp = 0;
//     int i = 0;
//     for (auto i : count)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     int x = 0;
//     while (size > i)
//     {
//         if ((count[temp] == 0))
//         {
//             x += count[temp + 1];
//             pos[temp + 1 ] = x;
//             temp++;
//         }
//         else
//         {
//             count[temp]--;
//             arr[i] = temp;
//             i++;
//         }
//     }
//     printArr(arr, size);
//     for (auto i : pos)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }
#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size)
{
    cout << "arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // int arr[] = {7, 7, 7, 3, 3, 3, 2, 3, 9, 0, 0, 6, 6, 5, 4, 1, 2, 3, 9, 9, 2, 1};
    int arr[] = {1, 3, 2, 3, 4, 1, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    printArr(arr, size);
    int count[10] = {0};
    int pos[10] = {0};
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
}