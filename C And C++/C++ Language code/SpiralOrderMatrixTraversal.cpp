#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

template <typename T>
void printMatrix(vector<vector<T>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v = {{11, 25, 17, 69, 34},
                             {16, 20, 56, 89, 29},
                             {34, 78, 56, 91, 81},
                             {55, 24, 85, 19, 90}};
    ;
    // vector<vector<int>> v = {{00, 01, 02, 03, 04}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32, 33, 34}, {40, 41, 42, 43, 44}};
    printMatrix(v);
    cout << endl;
    int rs, re, cs, ce;
    rs = 0;
    cs = 0;
    ce = v[0].size() - 1;
    re = v.size() - 1;
    for (int i = 0; rs <= re && cs <= ce; i++)
    {
        for (int j = cs; j <= ce; j++)
        {

            cout << v[rs][j] << " ";
        }
        rs++;
        for (int j = rs; j <= re; j++)
        {

            cout << v[j][ce] << " ";
        }
        ce--;
        for (int j = ce; j >= cs; j--)
        {

            cout << v[re][j] << " ";
        }
        re--;
        for (int j = re; j >= rs; j--)
        {

            cout << v[j][cs] << " ";
        }
        cs++;
    }
    cout << endl;
    rs = 0;
    cs = 0;
    ce = v[0].size() - 1;
    re = v.size() - 1;
    while (rs <= re && cs <= ce)
    {
        for (int col = cs; col <= ce; col++)
        {

            cout << v[rs][col] << " ";
        }
        rs++;
        for (int row = rs; row <= re; row++)
        {

            cout << v[row][ce] << " ";
        }
        ce--;
        for (int col = ce; col >= cs; col--)
        {

            cout << v[re][col] << " ";
        }
        re--;
        for (int row = re; row >= rs; row--)
        {
            cout << v[row][cs] << " ";
        }
        cs++;
    }
    return 0;
}