#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    // n=6;
    // int arr[6][2] = {{35, 40}, {10, 20}, {12, 15}, {38, 50}, {25, 35}, {20, 30}};
    n = 3;
    int arr[3][2] = {{12, 15}, {10, 20}, {20, 30}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][1] >= arr[j + 1][1])
            {
                int temp1 = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = temp1;

                int temp2 = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = temp2;
            }
        }
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i][1] <= arr[j][0])
            {
                count++;
                i = j - 1;
                break;
            }
        }
    }
    cout << endl;
    cout << "Maximum number of activities = " << count << endl;
    cout << endl;
    return 0;
}
