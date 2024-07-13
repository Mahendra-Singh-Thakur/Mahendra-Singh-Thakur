#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
long long factorialBetween(long long x, long long y)
{
    long long ans = 1;
    for (long long i = x; i <= y; i++)
    {
        ans = ans * i;
    }
    return ans;
}
main()
{
    long long num;
    cin >> num;
    for (long long n = 0; n <= num; n++)
    {
        for (int i = 0; i < num - n; i++)
        {
            cout << "   ";
        }

        for (long long r = 0; r <= n; r++)
        {
            if (r == 0 || (n - r) == 0)
            {
                // cout << 1 << " ";
                printf("%6d", 1);
                continue;
            }
            if ((n - r) >= r)
            {
                // cout << (factorialBetween((n - r) + 1, n) / factorialBetween(1, r)) << " ";
                printf("%6d", (factorialBetween((n - r) + 1, n) / factorialBetween(1, r)));
            }
            else
            {
                // cout << (factorialBetween(r + 1, n) / factorialBetween(1, (n - r))) << " ";
                printf("%6d", (factorialBetween(r + 1, n) / factorialBetween(1, (n - r))));
            }
        }
        cout << endl<<endl;
    }

    return 0;
}