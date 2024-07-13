
// /*Prime Factorisation using Sieve*/

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int arr[n+1] = {0};
// //     for (int i = 2; i <= (n / 2); i++)
// //     {
// //         for (int j = i; j <= n; j = j + i)
// //         {
// //             if (arr[j] == 0)
// //                 arr[j] = i;
// //         }
// //     }

// //     for (int i = 1; i <= 50; i++)
// //     {
// //         cout << arr[i] << " ";
// //         if (i % 10 == 0)
// //         {
// //             cout << endl;
// //         }
// //     }
// //     cout << endl;
// //     while (n != 1)
// //     {
// //         if (arr[n] == 0)
// //         {
// //             cout << n << endl;
// //             break;
// //         }
// //         cout << arr[n] << endl;
// //         n = n / arr[n];
// //     }

// //     return 0;
// // }
