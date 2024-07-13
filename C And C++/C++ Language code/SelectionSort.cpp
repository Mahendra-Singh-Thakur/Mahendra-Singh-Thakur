#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {3, 1, 6, 2, 4, 5};
    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        for (int k = 0; k < 6; k++)
        {
            cout << arr[k] << "\t";
        }
        cout << endl;
    }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    return 0;
}