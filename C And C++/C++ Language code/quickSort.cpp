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
    cout << "arr is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int start, int end)
{
    int i = start - 1;
    int pivot = arr[end];
    int k = start;
    for (k = start; k < end; k++)
    {
        if (pivot > arr[k])
        {
            i++;
            swap(arr[i], arr[k]);
        }
    }
    i++;
    swap(arr[i], arr[k]);
    return i;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIdx = partition(arr, start, end);
        cout<< "quickSort1(arr,"<< start<<","<< pIdx - 1<<");" <<endl;
        quickSort(arr, start, pIdx - 1);
        cout<< "quickSort2(arr, "<<pIdx + 1<<","<< end<<");" <<endl;
        quickSort(arr, pIdx + 1, end);
    }
}
int main()
{
    int arr[] = {6, 3, 9, 5, 4, 2, 8, 7, 1};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;
    printArr(arr, size);
    quickSort(arr, start, end);
    printArr(arr, size);
    return 0;
}