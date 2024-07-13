// // #include <iostream>
// // #include <climits>
// // #include <string>
// // #include <algorithm>
// // using namespace std;

// // int main()
// // {
// //     cout << (1 << 4) << endl;
// //     return 0;
// // }
// #include <iostream>
// #include <climits>
// #include <string>
// #include <algorithm>
// using namespace std;

// int checkPowerOf2(int num)
// {
//     return (num && !(num & (num - 1)));
// }
// int countOnes(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         count++;
//         n = (n & (n - 1));
//     }

//     return count;
// }
// int main()
// {
//     // cout << updateBit(7, 1, 1) << endl;
//     int num;
//     cin >> num;
//     // cout << checkPowerOf2(num);
//     cout << countOnes(num) << endl;

//     // if ((num & (num - 1)) == 0)
//     // {
//     //     cout << "yes" << endl;
//     // }

//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <string>
// #include <algorithm>
// using namespace std;
// int subSet(char arr[], int n)
// {
//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 cout << arr[j] << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     char arr[n];
//     cin >> arr;
//     // cout << arr << endl;
//     subSet(arr, n);
//     return 0;
// }

#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int uniqueNo(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            if ((arr[i] ^ arr[j]) == 0)
            {
                cout << i << " " << j << endl;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "arr=" << arr[i] << endl;
        }
    }
    return 0;
}
int uniqueN(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    return xorSum;
}
int unique(int arr[], int n)
{
    int ans;
    ans = uniqueN(arr, n);
    int pos = 0;
    while (ans = (ans >> 1))
    {
        pos++;
    }
    // cout << pos << endl;
    int firstValue = 0;
    for (int i = 0; i < n; i++)
    {
        firstValue = 0;
        if ((arr[i] & (1 << pos)) != 0)
        {
            firstValue = firstValue ^ arr[i];
        }
    }
    cout << firstValue << endl;
    cout << (firstValue ^ (uniqueN(arr, n)));
    return 0;
}
int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}
int uniquethree(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {

        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if ((sum % 3) != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
int main()
{
    int n;
    int arr[n = 10] = {2, 2, 4, 4, 3, 4, 2, 3, 3, 5};
    cout << uniquethree(arr, n);
    return 0;
}