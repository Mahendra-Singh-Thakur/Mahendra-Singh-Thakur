// // // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     // int row;
// //     // cin >> row;
// //     // for (int i = 1; i <= row; i++)
// //     // {

// //     //     for (int j = 1; j <= i; j++)
// //     //     {
// //     //         cout << "* ";
// //     //     }

// //     //     for (int j = (row - i); j >= 1; j--)
// //     //     {

// //     //         cout << "  ";
// //     //     }
// //     //     for (int j = (row - i); j >= 1; j--)
// //     //     {

// //     //         cout << "  ";
// //     //     }
// //     //     for (int j = 1; j <= i; j++)
// //     //     {
// //     //         cout << "* ";
// //     //     }
// //     //     cout << endl;
// //     // }
// //     for (int i = 1; i <= 3; i++)
// //     {
// //         cout << "I = " << i << endl;
// //         for (int j = 1; j <= 3; j++)
// //         {
// //             cout << "       ";
// //             cout << "J = " << j << endl;
// //             for (int k = 1; k <= 3; k++)
// //             {
// //                 cout << "       ";
// //                 cout << "       ";
// //                 cout << "K = " << k << endl;
// //                 for (int l = 1; l <= 3; l++)
// //                 {
// //                     cout << "       ";
// //                     cout << "       ";
// //                     cout << "       ";
// //                     cout << "L = " << l << endl;
// //                 }
// //             }
// //             cout << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 7, 2, 3, 9, 4, 5, 7, 3, 9, 4, 1};
//     int size = sizeof(arr) / sizeof(int);
//     int large = arr[0], secondlarge = -1;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > large)
//         {
//             secondlarge = large;
//             large = arr[i];
//         }
//         else if (secondlarge < arr[i] && arr[i] < large)
//         {
//             secondlarge = arr[i];
//         }
//     }
//     cout << large << endl;
//     cout << secondlarge << endl;
//     return 0;
// }

class box

public:
    box(/* args */);
    ~box();
};

box::box(/* args */)
{
}

box::~box()
{
}
