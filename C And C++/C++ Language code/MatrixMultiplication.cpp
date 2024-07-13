#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 2, m = 3, add = 0, i, j;
    int m1[n][m] = {{1, 2, 3},
                    {4, 5, 6}};
    int m2[m][n] = {{1, 2},
                    {5, 6},
                    {9, 10}};
    int ans[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            add = 0;
            for (int k = 0; k < m; k++)
            {
                add = add + ((m1[i][k]) * (m2[k][j]));
            }
            ans[i][j] = add;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}