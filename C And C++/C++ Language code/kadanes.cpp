#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int maxSum = INT_MIN, i, sum = 0, n = 5, arr[n] = {-1, 4, 7, -1, 2};
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    cout << maxSum;
}