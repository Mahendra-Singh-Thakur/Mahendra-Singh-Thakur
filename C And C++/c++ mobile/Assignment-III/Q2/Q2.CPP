#include <iostream>
using namespace std;

int main()
{
	int r, c, trc, a, b, n;

	cout << "Enter odd number of rows : ";

	cin >> n;

	if (n % 2 != 0)
	{

		trc = (n / 2) + 1;

		a = 2 * trc + 1;

		b = a / 2 + 1;

		for (r = 1; r <= trc; r++)
		{
			//	printf("r=%d",r);
			for (c = 1; c <= (2 * trc + 1); c++)
			{
				if ((c == b) && (r == 1))
				{
					cout << "* ";
				}
				else
				{
					if ((c >= b - (r - 1)) && (c <= b + (r - 1)))
					{
						//	printf("c=%d",c);
						cout << "  ";
					}
					else
					{
						cout << "* ";
					}
				}
			}
			cout << endl;
		}
		for (r = trc - 1; r >= 1; r--)
		{
			//	printf("r=%d",r);
			for (c = 1; c <= (2 * trc + 1); c++)
			{
				if ((c == b) && (r == 1))
				{
					cout << "* ";
				}
				else
				{
					if ((c >= b - (r - 1)) && (c <= b + (r - 1)))
					{
						//	printf("c=%d",c);
						cout << "  ";
					}
					else
					{
						cout << "* ";
					}
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "!!Enter odd number of rows!!";
		cout << "\n!!Bye-Bye!!";
	}
}