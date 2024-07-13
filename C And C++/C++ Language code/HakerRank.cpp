#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(vector<int> &arr, int target)
{
    int left = 0, i;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target)
        {
            i = mid - 1;
            while (i >= 0)
            {
                if (arr[mid] == arr[i])
                {
                    mid = i;
                }
                else
                {

                    break;
                }
                i--;
            }
            return mid; // Target found, return its index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Adjust the left boundary
        }
        else
        {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Target not found in the array
}

int main()
{
    vector<int> n, q;
    int size_n, size_q, x, index;
    cin >> size_n;
    for (int i = 0; i < size_n; i++)
    {
        cin >> x;
        n.push_back(x);
    }
    cin >> size_q;
    for (int i = 0; i < size_q; i++)
    {
        cin >> x;
        q.push_back(x);
    }
    for (int i = 0; i < size_q; i++)
    {
        if (((index = (binary_search(n, q[i]))) > -1))
        {
            cout << "Yes ";
            cout << index + 1;
        }
        else
        {
            cout << "No ";
            for (int j = 0; j < size_n; j++)
            {
                if (q[i] < n[j])
                {
                    cout << j + 1;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
