#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {1, 8, 3, 4, 2, 5};
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k];
                cout << " ";
            }

            // cout << "*\t";
            cout << endl;
        }
    }

    return 0;
}