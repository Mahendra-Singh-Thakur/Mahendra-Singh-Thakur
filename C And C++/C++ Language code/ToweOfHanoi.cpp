#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void toweOfHanoi(int n, string src, string help, string dest)
{
    cout << "TOH call : " << n << " " << src << " " << help << " " << dest << "\n";
    if (n == 0)
    {
        cout<< "return" <<endl;
        return;
    }
    toweOfHanoi(n - 1, src, dest, help);
    cout << "Move " << n << " disk  " << src << "  to  " << dest << endl;
    toweOfHanoi(n - 1, help, src, dest);
}
int main()
{
    int n;
    cin >> n;
    toweOfHanoi(n, "SOURCE", "HELPER", "DESTINATION");
    return 0;
}