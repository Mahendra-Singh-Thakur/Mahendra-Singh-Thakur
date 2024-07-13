#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
string fun(string s, string ansString)
{
    if (s.length() == 0)
    {
        return ansString;
    }
    if ((s[0] == 'p' && s[1] == 'i')||(s[0] == 'P' && s[1] == 'I'))
    {
        // cout << " "
        //      << "3.14"
        //      << " ";
        ansString = ansString + " 3.14 ";
        return fun(s.substr(2), ansString);
    }
    else
    {
        ansString = ansString + s[0];
        // cout << s[0];
        return fun(s.substr(1), ansString);
    }
}
int main()
{
    string s = "piMAPIHEpiNDPIRApi";
    cout << s << endl;
    cout << fun(s, "");

    return 0;
}