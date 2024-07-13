#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

void function(string s)
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        function(s.substr(2));
    }
    else
    {
        cout << s[0];
        function(s.substr(1));
    }
}
int main()
{
    string s;
    cin >> s;
    function(s);
    return 0;
}