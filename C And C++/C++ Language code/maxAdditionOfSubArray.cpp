#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int MaOfS = 0, AOfSubA = 0, cOfi, cOfj;
    int n = 13;
    int arr[n] = {4, -4, 6, -6, 10, -11, 12, 4, -4, 6, -6, 10, -11};
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            AOfSubA = 0;
            for (int k = i; k <= j; k++)
            {
                AOfSubA = AOfSubA + arr[k];
            }
            if (MaOfS < AOfSubA)
            {
                cOfi = i;
                cOfj = j;
                MaOfS = AOfSubA;
            }
        }
    }
    for (int i = cOfi; i <= cOfj; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl
         << "MaOfS = " << MaOfS;
}

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int MaOfS = 0, AOfSubA = 0;
//     int arr[4] = {-1, 4, 7, 2};
//     int cumulative[4 + 1];
//     cumulative[0] = 0;
//     for (int i = 1; i <= 4; i++)
//     {
//         cumulative[i] = cumulative[i - 1] + arr[i - 1];
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         cout << cumulative[i] << '\t';
//     }

//     cout << endl
//          << "MaOfS = " << MaOfS;
// }