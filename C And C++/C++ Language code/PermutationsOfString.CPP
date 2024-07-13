#include <iostream>
using namespace std;
int count = 0;
void fun(string s, string ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "\t";
    }

    cout << "fun("
         << "\"" << ans << "\""
         << ","
         << "\"" << s << "\""
         << ")" << endl;
    if (s.size() == 1)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "\t";
        }
        count++;
        cout << "print = "
             << "\"" << ans + s[0] << "\"" << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << "i = " << i << endl;
        string ros = s.substr(0, i) + s.substr(i + 1);
        fun(ros, ans + s[i]);
    }
    // fun(s.substr(1), ans);
    // fun(s.substr(1), ans + s[0]);
}
int main()
{
    cout << endl;
    fun("ABCD", "");
    cout << count << endl;
    return 0;
}

// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;
// vector<string> a;
// vector<string> per(string s, string ans)
// {
//     if (s.size() == 0)
//     {
//         a.push_back(ans);
//     }
//     for (int i = 0; i < s.size(); i++)
//     {
//         string ros = s.substr(0, i) + s.substr(i + 1);
//         // per(ros, ans);
//         per(ros, ans+s[i]);
//     }
//     return a;
// }

// int main()
// {
//     string s = "ABC";
//     for (auto i : per(s, ""))
//     {
//         cout << i << endl;
//     }
//     return 0;
// }