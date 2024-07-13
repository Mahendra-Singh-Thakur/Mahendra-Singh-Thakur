#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "aabbccd";
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        v[(s[i] - 'a')]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            cout << (char)('a' + i) << " = " << v[i] << endl;
        }
    }
    return 0;
}