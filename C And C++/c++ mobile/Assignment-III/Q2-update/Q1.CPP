#include <iostream>
using namespace std;
int main()
{
	int trc, r, sp, st, a = 65;
	cout << "Enter number of lines : ";
	cin >> trc;

	for (r = 1; r <= trc; r++)
	{
		for (sp = 1; sp <= trc - r; sp++)
		{
			cout << "  ";
		}
		for (st = 1; st <= r; st++)
		{
			cout << static_cast<char>(a) << "   ";
			a = 65 + st;
		}
		a = 65;
		cout << endl;
	}

	for (r = trc - 1; r >= 1; r--)
	{
		for (sp = 1; sp <= trc - r; sp++)
		{
			cout << "  ";
		}
		for (st = 1; st <= r; st++)
		{
			cout << static_cast<char>(a) << "   ";
			a = 65 + st;
		}
		a = 65;
		cout << endl;
	}

	return 0;
}