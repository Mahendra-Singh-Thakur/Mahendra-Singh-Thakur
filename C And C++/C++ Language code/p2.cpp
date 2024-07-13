// // // #include <iostream>
// // // #include <climits>
// // // #include <cmath>
// // // #include <vector>
// // // #include <string>
// // // #include <algorithm>
// // // #include <unordered_set>
// // // using namespace std;
// // // int fun(int n, int m)
// // // {
// // //     // if (n == 0)
// // //     // {
// // //     //     return 1;
// // //     // }
// // //     if (n == 1 || m == 1)
// // //     {
// // //         return 1;
// // //     }
// // //     else
// // //     {
// // //         return (fun(n - 1, m) + fun(n, m - 1));
// // //     }
// // // }
// // // int main()
// // // {
// // //     int n, m;
// // //     cin >> m >> n;
// // //     cout << fun(m, n);
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <climits>
// // #include <cmath>
// // #include <vector>
// // #include <string>
// // #include <algorithm>
// // #include <unordered_set>
// // using namespace std;
// // void swap(int &a, int &b)
// // {
// //     a = a + b;
// //     b = a - b;
// //     a = a - b;
// // }
// // int main()
// // {
// //     vector<int> arr = {1, 2, 3};
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         for (int j = 0; j < arr.size(); j++)
// //         {
// //             swap(arr[i], arr[j]);
// //             for (int k = 0; k < arr.size(); k++)
// //             {
// //                 cout << arr[i] << ",";
// //             }
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int count = 0;
// void fun(string s, string ans)
// {
//     if (s.size() == 0)
//     {
//         count++;
//         cout << "\"" << ans << "\"" << endl;
//         return;
//     }
//     for (int i = 0; i < s.size(); i++)
//     {
//         string ros = s.substr(0, i) + s.substr(i + 1);
//         fun(ros, ans + s[i]);
//     }
//     // fun(s.substr(1), ans);
//     // fun(s.substr(1), ans + s[0]);
// }
// int main()
// {
//     fun("abcd", "");
//     cout << count << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int subString(int n)
// {
//     if ( n == 2)
//     {
//         return 1;
//     }
//     if ( n == 3)
//     {
//         return 2;
//     }
//     return (subString(n - 1) + subString(n - 2));
// }

// int main()
// {
//     cout << subString(6);
//     return 0;
// }
#include<iostream>
using namespace std;
string arr[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS"};
void fun(string s, string ans)
{
    for (int j = 0; j < ans.size(); j++)
    {
        cout << "\t";
    }

    cout << "fun("
         << "\"" << ans << "\""
         << ","
         << "\"" << s << "\""
         << ")" << endl;
    if (s.length() == 0)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << "\t";
        }
        cout << "print = "
             << "\"" << ans << "\"" << endl;
        return;
    }

    for (int i = 0; i < arr[s[0] - '0'].size(); i++)
    {
        cout << "arr[" << s[0] - '0' << "][" << i << "]"
             << " = " << arr[s[0] - '0'][i] << "-----------------" << endl;
        fun(s.substr(1), ans + arr[s[0] - '0'][i]);
    }
}
int main()
{
    cout << endl;
    fun("23", "");
    return 0;
}