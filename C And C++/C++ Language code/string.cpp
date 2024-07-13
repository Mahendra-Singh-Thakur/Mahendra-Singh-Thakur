#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);
    // cout << a;

    int i = 0, sum = 0, maxsum = INT_MIN;
    while (1)
    {
        if ((a[i] == ' ') || (a[i] == '\0'))
        {
            if (maxsum < sum)
            {
                maxsum = sum;
            }
            sum = 0;
        }
        else
            sum++;

        if (a[i] == '\0')
        {
            // cout << "i=" << i;
            break;
        }
        i++;
    }
    cout << maxsum;
    // cin.ignore();
}
