#include <iostream>
#include <vector>
#include <string>
using namespace std;

void fu(int n, vector<string> &s)
{
    if (n >= 100)
    {
        if (n == 100)
        {
            cout << "hunderd ";
        }
        return;
    }
    if (n < 100)
    {
        if (20 <= n)
        {
            int temp = n % 10;
            n = n / 10;
            n = n * 10;
            switch (n)
            {
            case 20:
                cout << "twenty ";
                break;
            case 30:
                cout << "thirty ";
                break;
            case 40:
                cout << "fourty ";
                break;
            case 50:
                cout << "fifty ";
                break;
            case 60:
                cout << "sixty ";
                break;
            case 70:
                cout << "seventy ";
                break;
            case 80:
                cout << "eighty ";
                break;
            case 90:
                cout << "ninety ";
                break;
            }
            fu(temp, s);
        }
        else
        {
            cout << s[n];
        }
        return;
    }
    fu(n / 10, s);
}
int main()
{
    int n;
    vector<string> s;
    s.push_back("zero ");
    s.push_back("one ");
    s.push_back("two ");
    s.push_back("three ");
    s.push_back("four ");
    s.push_back("five ");
    s.push_back("six ");
    s.push_back("seven ");
    s.push_back("eight ");
    s.push_back("nine ");
    s.push_back("ten ");
    s.push_back("Eleven ");
    s.push_back("twelve ");
    s.push_back("thirteen ");
    s.push_back("fourteen ");
    s.push_back("fifteen ");
    s.push_back("sixteen ");
    s.push_back("seventeen ");
    s.push_back("eightteen ");
    s.push_back("nineteen ");
    cin >> n;
    fu(n, s);
    // cout << n << endl;
    return 0;
}