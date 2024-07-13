#include <iostream>
using namespace std;

int DecimalToBinary(int n)
{
    int ans = 0, x = 1, num;
    while (x <= n)
    {
        x = x * 2;
    }
    x = x / 2;
    while (x > 0)
    {
        num = n / x;
        n = n - num * x;
        x = x / 2;
        ans = ans * 10 + num;
    }
    return ans;
}
int BinaryToDecimal(int n)
{
    int num = n, ans = 0, D = 1;
    while (num)
    {
        int dig = num % 10;
        num = num / 10;
        ans = dig * D + ans;
        D = (D * 2);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << DecimalToBinary(n);
    // cout << endl << BinaryToDecimal(n);
    return 0;
}
