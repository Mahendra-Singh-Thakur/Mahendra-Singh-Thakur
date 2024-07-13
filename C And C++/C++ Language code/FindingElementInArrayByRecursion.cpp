#include <bits/stdc++.h>
using namespace std;
int find(vector<int> v, int key)
{
    if (v.size() == 0)
    {
        return -1;
    }
    if (v[v.size() - 1] == key)
    {
        return v.size() - 1;
    }
    v.pop_back();
    return find(v, key);
}
int main()
{
    vector<int> v = {1, 5, 3, 4, 5};
    cout << find(v, 3);
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}