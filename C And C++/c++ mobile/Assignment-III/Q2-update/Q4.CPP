#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    system("cls");
    int trc, r, sp, st;
    cout << "Enter number of lines : ";
    cin >> trc;

    for(r = trc; r >= 1; r--)
    {
        for(sp = 1; sp <= trc - r; sp++)
        {
            cout << "  ";
        }
        for(st = 1; st <= ((2 * r) - 1); st++)
        {
            if(st % 2 != 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "# ";
            }
        }

        cout << endl;
    }
    return 0;
}