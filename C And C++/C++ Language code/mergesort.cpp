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
// void Merge(int arr[], int start, int mid, int end)
// {
//     int size1 = mid - start + 1;
//     int size2 = end - mid;
//     int arr1[size1];
//     int arr2[size2];
//     for (int i = 0; i <= size1; i++)
//     {
//         arr1[i] = arr[start + i];
//     }
//     printArr(arr1, size1);
//     for (int i = 0; i <= size1; i++)
//     {
//         arr2[i] = arr[(mid + 1) + i];
//     }
//     printArr(arr2, size2);
//     int i = 0;
//     int j = 0;
//     int k = start;
//     while (size1 > i && size2 > j)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr[k] = arr1[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }
//     while (size1 > i)
//     {

//         arr[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (size2 > j)
//     {
//         arr[k] = arr2[j];
//         j++;
//         k++;
//     }
//     cout << "sorted array is : ";
//     for (int i = start; i <= end; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void mergeSort(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         // int mid = start * ((end - start) / 2);
//         int mid = ((start + end) / 2);
//         cout << "mergeSort1(arr," << start << "," << mid << ");" << endl;
//         mergeSort(arr, start, mid);
//         cout << "mergeSort2(arr," << mid + 1 << "," << end << ");" << endl;
//         mergeSort(arr, mid + 1, end);
//         cout << start << " " << mid << " " << end << endl;
//         Merge(arr, start, mid, end);
//     }
// }
// int main()
// {
//     int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
//     int size = (sizeof(arr) / sizeof(int));

//     cout << "INDEX :  ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     printArr(arr, size);
//     int start = 0, end = size - 1;
//     mergeSort(arr, start, end);
//     printArr(arr, size);
//     return 0;
// }
#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
void printArr(int arr[], int size)
{
    // cout << "arr is : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}
void Merge(int arr[], int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;
    int arr1[size1];
    int arr2[size2];
    for (int i = 0; i <= size1; i++)
    {
        arr1[i] = arr[start + i];
    }
    for (int i = 0; i <= size1; i++)
    {
        arr2[i] = arr[(mid + 1) + i];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (size1 > i && size2 > j)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (size1 > i)
    {

        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (size2 > j)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        // int mid = start * ((end - start) / 2);
        int mid = ((start + end) / 2);
        cout << "mergeSort1(arr," << start << "," << mid << ");" << endl;
        mergeSort(arr, start, mid);
        cout << "mergeSort2(arr," << mid + 1 << "," << end << ");" << endl;
        mergeSort(arr, mid + 1, end);
        cout << start << " " << mid << " " << end << endl;
        Merge(arr, start, mid, end);
    }
}
int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
    int size = (sizeof(arr) / sizeof(int));

    cout << "INDEX :  ";
    for (int i = 0; i < size; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    printArr(arr, size);
    int start = 0, end = size - 1;
    mergeSort(arr, start, end);
    printArr(arr, size);
    return 0;
}