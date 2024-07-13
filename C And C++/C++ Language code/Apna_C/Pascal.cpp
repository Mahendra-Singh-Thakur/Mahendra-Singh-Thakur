#include <iostream>
using namespace std;

long factorial(long num)
{
    long fac = 1;
    while (num)
    {
        fac = fac * num;
        num--;
    }
    return fac;
}
int main()
{

    freopen("Input.text", "r", stdin);
    freopen("Output.text", "w", stdout);

    long n, combination;

    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int sp = 0; sp <= (n - i); sp++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            combination = factorial(i) / (factorial(i - j) * factorial(j));
            cout << combination << "  ";
        }
        cout << endl;
    }
}