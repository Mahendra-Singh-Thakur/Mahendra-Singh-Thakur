#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 0; j <= (row - i); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (2 * i - 2); j++)
        {
            cout << "  ";
        }

        for (int j = (row - i); j >= 0; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
