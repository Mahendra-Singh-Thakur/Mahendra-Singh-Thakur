#include <iostream>
#include <climits>
#include <vector>
#define N 31
using namespace std;
bool getbit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int setBit(int n, int position)
{
    return (n | (1 << position));
}
int main()
{
    vector<int> v(N, 0);
    vector<int> vec = {11, 11, 11, 4, 4, 4, 9};
    for (int j = 0; j < vec.size(); j++)
    {
        for (int k = 0; k < N; k++)
        {
            v[k] = (v[k] + getbit(vec[j], k));
        }
    }
    int n, ans = 0;
    n = 0;
    for (int i = 0; i < N; i++)
    {
        if ((v[i] % 3) != 0)
        {
            ans = setBit(ans, i);
        }
    }
    cout << ans << endl;
    return 0;
}