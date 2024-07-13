#include <iostream>
using namespace std;

int main()
{
	int trc, c, r, n;
	char a = 'A', b;
	cout << "Enter number of rows : ";
	cin >> trc;
	n = (2 * trc - 1) / 2 + 1;

	for (r = 1; r <= trc; r++)
	{
		for (c = 1; c <= (2 * trc - 1); c++)
		{
			if (c >= n - (r - 1) && c <= n + (r - 1))
			{
				if (c < n)
				{
					cout << a;
					a++;
				}
				if (c >= n)
				{
					b = a--;
					cout << b;
				}
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
		a = 'A';
	}
}