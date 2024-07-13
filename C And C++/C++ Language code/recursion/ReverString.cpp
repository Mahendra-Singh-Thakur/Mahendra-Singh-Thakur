#include <iostream>
#include <climits>
using namespace std;

void reverseString(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string s1 = s.substr(1);
    reverseString(s1);
    cout << s[0];
}
int main()
{
    reverseString("MAHENDRA");
}