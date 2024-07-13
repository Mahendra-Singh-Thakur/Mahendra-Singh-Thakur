// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int arr[6] = {12, 45, 23, 51, 19, 8};
//     for (int i = 1; i < 6; i++)
//     {
//         int currentNo = arr[i];
//         int j = i - 1;
//         while (currentNo < arr[j] && j >= 0)
//         {
//             // cout << "current numb=" << arr[i] << endl;
//             arr[j + 1] = arr[j];
//             // for (int k = 0; k < 6; k++)
//             // {
//             //     cout << arr[k] << "\t";
//             // }
//             // cout << endl;
//             j--;
//         }

//         arr[j + 1] = currentNo;
//         // while (currentNo < arr[j] && j >= 0)
//         // {
//         //     int temp = arr[j + 1];
//         //     arr[j + 1] = arr[j];
//         //     arr[j] = temp;
//         //     j--;
//         // }
//     }
//     for (int k = 0; k < 6; k++)
//     {
//         cout << arr[k] << "\t";
//     }
//     cout << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {12, 45, 23, 51, 19, 8};
    for (int i = 1; i < 6; i++)
    {
        int currentNo = arr[i];
        int j = i - 1;
        while (currentNo < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = currentNo;
    }
    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << "\t";
    }
    cout << endl;
    return 0;
}