#include <iostream>
using namespace std;
void fun(string s, string &temp)
{
    if (s.size() == 0)
    {
        return;
    }
    fun(s.substr(1), temp);
    if (s[0] == 'x')
    {
        temp = temp + 'x';
    }
    else
    {
        temp = s[0] + temp;
    }
}
int main()
{
    string s = "axxbdxcefxhix";
    string s1 = "";
    fun(s, s1);
    cout << s1 << endl;
    return 0;
}