#include <cmath>
#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

void prime1(int num)
{
    int flag;
    for (int i = 2; i <= num; i++)
    {
        flag = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << endl;
        }
    }
}

void prime2(int num)
{
    int arr[100] = {0};
    for (int i = 2; i <= sqrt(num); i++)
    {
        for (int j = i * i; j <= num; j++)
        {
            if ((j % i) == 0)
            {
                arr[j] = 1;
            }
        }
    }
    // for (int i = 2; i <= num; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i * i; j <= num; j += i)
    //         {
    //             arr[j] = 1;
    //         }
    //     }
    // }
    for (int i = 2; i <= num; i++)
    {
        if ((arr[i]) == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int num;
    cin >> num;
    // prime1(num);
    prime2(num);
    return 0;
}