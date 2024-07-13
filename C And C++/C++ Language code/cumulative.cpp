// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[n] = {-4, -1, 4, 7, 2};
//     int cumulative[n + 1];
//     cumulative[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         cumulative[i] = cumulative[i - 1] + arr[i - 1];
//     }

//     int sum, maxsum = INT_MIN, cOfi, cOfj;
//     cout << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = cumulative[i] - cumulative[j];
//             cout << i << "," << j << " = " << sum << endl;
//             if (maxsum < sum)
//             {
//                 cOfi = j;
//                 cOfj = i;
//                 maxsum = sum;
//             }
//         }
//     }
//     cout << endl;
//     for (int i = cOfi; i < cOfj; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
//     cout << "maxsum = " << maxsum;
// }
// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n = 4       ;
//     int arr[n] = {-1, 4, 7, 2};
//     int cumulative[n];
//     int sum1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum1 = sum1 + arr[i];
//         cumulative[i] = sum1;
//     }
//     int sum, maxsum = INT_MIN, cOfi, cOfj;
//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = cumulative[i] - cumulative[j];
//             cout << i << "," << j << " = " << sum << endl;
//             if (maxsum < sum)
//             {
//                 cOfi = j + 1;
//                 cOfj = i;
//                 maxsum = sum;
//             }
//         }
//     }
//     for (int i = cOfi; i <= cOfj; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
//     cout << "maxsum = " << maxsum;
// }

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> cumSum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cumSum[i + 1] = cumSum[i] + arr[i];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sum = cumSum[j] - cumSum[i - 1];
            // maxSum = max(maxSum, sum);
            if(maxSum<sum)
            {
                maxSum=sum;
            }
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-4, 3, 4, -9, 7, -5};
    cout << "Maximum subarray sum is " << maxSubArraySum(arr) << endl;
    return 0;
}
