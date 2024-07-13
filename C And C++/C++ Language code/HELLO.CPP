// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;

// void fun(string s, string ans)
// {
//     if (s[0] == '\0')
//     {
//         int flag = 1;
//         for (int i = 0; i < (ans.length() - 1); i++)
//         {
//             if ((s[i] == s[i + 1])||())
//             {
//                 flag = 0;
//             }
//         }
//         if (flag == 1)
//             cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     fun(s.substr(1), (ans + ch));
//     fun(s.substr(1), ans);

//     return;
// }
#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    if (s.find(7) == s.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    if (s.count(7) == 0)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    cout << s.count(7) << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     string n;
    //     cin >> n;
    //     s.insert(n);
    // }

    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << (*i) << endl;
    // }

    return 0;
}