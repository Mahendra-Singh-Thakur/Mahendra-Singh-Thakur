#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int row, coloum, target = 95;
    int m[5][5] = {{1,  2,  3,  7,  9},
                   {4,  5,  6,  12, 11},
                   {13, 15, 18, 20, 23},
                   {29, 31, 33, 36, 39},
                   {40, 45, 89, 90, 95}};
    row = 0;
    coloum = 4;
    while (1)
    {
        if (target == m[row][coloum])
        {
            cout << "true";
            break;
        }
        if (target < m[row][coloum])
        {
            coloum--;
        }
        else
        {
            row++;
        }
        if ((coloum < 0) || (row > 4))
        {
            cout << "false";
            break;
        }
    }
}