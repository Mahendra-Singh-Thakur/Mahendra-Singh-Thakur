#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {5,2,8,1,9,3};
    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < 6; k++)
        {
            cout << arr[k] << "\t";
        }
        cout << endl;
    }
    // for (int k = 0; k < 6; k++)
    // {
    //     cout << arr[k] << "\t";
    // }

    return 0;
}