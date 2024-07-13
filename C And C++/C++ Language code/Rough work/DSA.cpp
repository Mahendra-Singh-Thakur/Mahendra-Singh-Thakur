// // C++ program for Merge Sort

// #include <iostream>
// using namespace std;

// // Merges two subarrays of array[].
// // First subarray is arr[start..mid]
// // Second subarray is arr[mid+1..end]
// void mergefff(int array[], int l, int mid, int r)
// {
//     int leftSize = (mid - l) + 1;
//     cout << leftSize << endl;
//     int rightSize = r - mid;
//     cout << rightSize << endl;
//     // Create temp arrays
//     auto *leftA = new int[leftSize],
//          *rightA = new int[rightSize];

//     // Copy data to temp arrays leftA[] and rightA[]
//     for (auto i = 0; i < leftSize; i++)
//     {
//         leftA[i] = array[l + i];
//     }

//     for (int i = 0; i < leftSize; i++)
//     {
//         cout << leftA[i] << " ";
//     }
//     cout << endl;
//     for (auto j = 0; j < rightSize; j++)
//     {
//         rightA[j] = array[mid + 1 + j];
//     }

//     for (int i = 0; i < rightSize; i++)
//     {
//         cout << rightA[i] << " ";
//     }
//     auto i = 0, j = 0;
//     int mainarr = l;

//     // Merge the temp arrays back into array[l..r]
//     while (i < leftSize && j < rightSize)
//     {
//         if (leftA[i] <= rightA[j])
//         {
//             array[mainarr] = leftA[i];
//             i++;
//         }
//         else
//         {
//             array[mainarr] = rightA[j];
//             j++;
//         }
//         mainarr++;
//     }

//     // Copy the remaining elements of
//     // l[], if there are any
//     while (i < leftSize)
//     {
//         array[mainarr] = leftA[i];
//         i++;
//         mainarr++;
//     }

//     // Copy the remaining elements of
//     // r[], if there are any
//     while (j < rightSize)
//     {
//         array[mainarr] = rightA[j];
//         j++;
//         mainarr++;
//     }
//     delete[] leftA;
//     delete[] rightA;
// }

// // start is for l index and end is r index
// // of the sub-array of arr to be sorted
// void mergeSort(int array[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int mid = start + (end - start) / 2;
//     mergeSort(array, start, mid);
//     mergeSort(array, mid + 1, end);
//     cout << "merge(array ," << start << "," << mid << "," << end << ")" << endl;
//     // merge(array, start, mid, end);
// }

// // UTILITY FUNCTIONS
// // Function to print an array
// void printArray(int A[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << A[i] << " ";
//     cout << endl;
// }

// // Driver code
// int main()
// {
//     int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Given array is \n";
//     printArray(arr, arr_size);

//     // mergeSort(arr, 0, arr_size - 1);
//     mergefff(arr, 0, 3, 7);

//     cout << "\nSorted array is \n";
//     printArray(arr, arr_size);
//     return 0;
// }

// // This code is contributed by Mayank Tyagi
// // This code was revised by Joshua Estes
