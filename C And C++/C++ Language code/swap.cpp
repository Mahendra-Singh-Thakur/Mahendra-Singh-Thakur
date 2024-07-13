#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a = 5, b = 6;
    cout << "before swap : " << endl;
    cout << "a = " << a << " "
         << "b = " << b << endl;
    swap(a, b);
    cout << "after swap : " << endl;
    cout << "a = " << a << " "
         << "b = " << b << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// void fun()
// {
//     static int i = 0;
//     int j = 0;
//     i++;
//     j++;
//     cout << "i= " << i << " and j = " << j << endl;
// }
// int main()
// {
//     fun();
//     fun();
//     fun();
//     fun();
//     return 0;
// }