#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 13;
    int arr[n] = {4, -4, 6, -6, 10, -11, 12};
    int currentSum, arrsum, minsum = INT_MAX;
    currentSum = 0;
    arrsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum > 0)
        {
            currentSum = 0;
        }
        if (minsum > currentSum)
        {
            minsum = currentSum;
        }
        arrsum = arrsum + arr[i];
    }
    cout << minsum << endl;
    cout << arrsum - minsum;
}