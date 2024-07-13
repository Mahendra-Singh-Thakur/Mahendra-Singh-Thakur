#include <iostream>
#include <cstdlib>

int main()
{
	int trc, c, r, a, n;
	std::cout << "Enter number of rows : ";
	std::cin >> trc;
	a = (2 * trc - 1) / 2 + 1;

	for (r = 1; r <= trc; r++)
	{
		for (c = 1; c <= (2 * trc - 1); c++)
		{
			if (c >= a - (r - 1) && c <= a + (r - 1))
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
	for (r = trc - 1; r >= 1; r--)
	{
		for (c = 1; c <= (2 * trc - 1); c++)
		{
			if (c >= a - (r - 1) && c <= a + (r - 1))
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}