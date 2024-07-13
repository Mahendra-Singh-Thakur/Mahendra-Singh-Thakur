
// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;

// string fun(string s, string ans)
// {
//     if (s[0] == '\0')
//     {
//         return "";
//     }
//     char ch = s[0];
//     ans = fun(s.substr(1), ans);
//     if (ch == ans[0])
//     {
//         return (ans);
//     }
//     else
//     {
//         return (ch + ans);
//     }
// }
// int main()
// {
//     string s = "mmmmaaaahenddddra";
//     cout << fun(s, "");
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool fun(int arr[], int n)
// {
//     if (n == -1)
//     {
//         return 1;
//     }

//     if ((arr[n] < arr[n + 1]) && (fun(arr, n - 1)))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     cout << fun(arr, (((sizeof(arr)) / (sizeof(int))) - 2));
//     return 0;
// }

#include <iostream>
using namespace std;
// int f = -1;
// int l = -1;
int fun(string s, char ele, int n)
{
    if (s[0] == '\0')
    {
        return -1;
    }
    char ch = s[0];
    // fun(s.substr(1), ele, n + 1);
    n = fun(s.substr(1), ele, n);
    // cout << ch << endl;
    if (ch == ele)
    {
        return (s.length());
        // if (l == -1)
        // {
        //     l = n;
        // }
        // else
        // {
        //     f = n;
        // }
    }
    else
        return n;
}
int main()
{
    string s = "mahendra";
    char ch = 'h';
    int ROfS = fun(s, ch, 0);
    ROfS = (s.length()) - ROfS;
    cout << ROfS << endl;
    // cout << f << endl;
    // cout << l << endl;
    return 0;
}

// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <string>
// #include <algorithm>
// using namespace std;
// int ans = 1;
// int fun(int st)
// {
//     if (st < 0)
//     {
//         return 0;
//     }

//     if ((st == 1))
//         return 1;
//     int FV = (fun(st - 1));
//     ans = FV;
//     return FV + ans;
// }
// int main()
// {
//     int st = 0, end;
//     cin >> st >> end;
//     cout << fun((end - st));
//     return 0;
// }

/*
// ABC
// ACB
// BAC
// BCA
// CAB
// CBA

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void fun(string s, string ans)
{
    if (s[0] == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ROfS = {s.substr(0, i) + s.substr(i + 1)};
        fun(ROfS, (ans + ch));
    }
}
int main()
{
    string s = "ABC";
    fun(s, "");
    return 0;
}

/*
//    {"", "./", "abc", "def", "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"};

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int c = 0;
void fun(string s1, string s2)
{
    c++;
    char c1;
    if (s1[0] == '\0')
    {
        return;
    }
    c1 = s1[0];
    fun(s1.substr(1), s2);
    for (int i = 0; i < (s2.size()); i++)
    {
        cout << c1 << s2[i] << endl;
    }
}
int main()
{
    string key;
    string s[10] = {"", "./", "abc", "def", "ghi", "jkl", "mno",
                    "pqrs", "tuv", "wxyz"};
    cin >> key;

    int key1 = {key[0] - '0'};
    int key2 = {key[1] - '0'};
    fun(s[key1], s[key2]);
    cout << c << endl;
    return 0;
}
/*
        // {"", "./", "abc", "def", "ghi", "jkl", "mno",
        // "pqrs", "tuv", "wxyz"};

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int c = 0;
void fun(string s1, string s2)
{
    c++;
    char c1;
    if (s1[0] == '\0')
    {
        return;
    }
    c1 = s1[0];
    fun(s1.substr(1), s2);
    for (int i = 0; i < (s2.size()); i++)
    {
        cout << c1 << s2[i] << endl;
    }
}
int main()
{
    int key1, key2;
    string s[10] = {"", "./", "abc", "def", "ghi", "jkl", "mno",
                    "pqrs", "tuv", "wxyz"};
    cin >> key1 >> key2;
    fun(s[key1], s[key2]);
    cout << c << endl;
    return 0;
}
/*
// fun(s.substr(1), ans);
// fun(s.substr(1), (ans + ch));
// fun(s.substr(1), (ans + to_string(num)));

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int p;
void fun(string s, string ans)
{
    ++p;
    if (s[0] == '\0')
    {
        cout << "<" << ans << ">" << endl;
        return;
    }
    char ch = s[0];
    int num = ch;
    fun(s.substr(1), ans);
    fun(s.substr(1), (ans + ch));
    fun(s.substr(1), (ans + to_string(num)));
}
int main()
{
    string s = "AB";
    int n;
    n = 0;
    fun(s, "");
    cout << p << endl;
    return 0;
}
/*
"aaacccbbbddd"

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string fun(string s)
{
    string ans;
    char ch;
    if (s[0] == '\0')
    {
        return "";
    }
    ch = s[0];
    ans = fun(s.substr(1));
    if (ch == ans[0])
    {
        return (ans);
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    string s = "aaacccbbbddd";
    cout << fun(s) << endl;

    return 0;
}
/*
// "mxaxxhxexxnxdxrxa"

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string fun(string s)
{
    string ans;
    if (s[0] == '\0')
    {
        return "";
    }
char ch=s[0];
    ans = fun(s.substr(1));
    if (ch == 'x')
    {
        return (ans + ch);
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    string s = "mxaxxhxexxnxdxrxa";
    // s.erase(3);
    // cout << s.erase(0, 1) << endl;
    cout << fun(s) << endl;
    return 0;
}
/*
//aaaaabbbbbbccccccddd

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string fun(string s)
{
    string ans;
    if (s[0] == '\0')
    {
        return "";
    }
    char ch;
    ch = s[0];
    ans = fun(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    string s = "aaaabbbbcccddddd";
    cout << fun(s) << endl;
    return 0;
}*/