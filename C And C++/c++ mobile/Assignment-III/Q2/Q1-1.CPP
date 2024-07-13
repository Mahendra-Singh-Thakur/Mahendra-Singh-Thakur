#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int trc, c, r, a, n;
    cout << "Enter number of rows : ";
    cin >> trc;
    a = (2 * trc - 1) / 2 + 1;

    for (r = 1; r <= trc; r++)
    {
        for (c = 1; c <= (2 * trc - 1); c++)
        {
            if (c >= a - (r - 1) && c <= a + (r - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}