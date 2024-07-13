// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;
// int coun = 0;
// int fun(int n, int i, int j)
// {
//     int ans;
//     coun++;
//     for (int jk = 0; jk < i; jk++)
//     {
//         cout << "         ";
//     }

//     cout << "fun(" << n << "," << i << "," << j << ")" << endl;
//     if (i == n - 1 || j == n - 1)
//     {
//         for (int jk = 0; jk < i; jk++)
//         {
//             cout << "         ";
//         }
//         cout << "fun(" << n << "," << i << "," << j << ") "
//              << "return = " << 1 << endl;

//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         cout << "m" << endl;
//         return 0;
//     }
//     ans = fun(n, i + 1, j) + fun(n, i, j + 1);
//     for (int jk = 0; jk < i; jk++)
//     {
//         cout << "         ";
//     }
//     cout << "fun(" << n << "," << i << "," << j << ") "
//          << "ans = " << ans << endl;
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fun(n, 0, 0) << endl;
//     // cout << coun << endl;
//     return 0;
// }

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int fun(int n, int i, int j)
{
    if (i == n - 1 || j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return fun(n, i + 1, j) + fun(n, i, j + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n, 0, 0) << endl;
    return 0;
}