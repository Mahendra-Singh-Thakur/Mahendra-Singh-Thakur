#include <iostream>

int main()
{
	int n;
	char a = 'A';
	a--;
	std::cout << "Enter number of lines : ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << "  ";
		}
		for (int k = 1; k <= ((2 * i) - 1); k++)
		{
			if (k < 1 + i)
			{
				a++;
				std::cout << a << " ";
			}
			else
			{
				a--;
				std::cout << a << " ";
			}
		}
		a = 'A';
		a--;
		std::cout << "\n";
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << "  ";
		}
		for (int k = 1; k <= ((2 * i) - 1); k++)
		{
			if (k < 1 + i)
			{
				a++;
				std::cout << a << " ";
			}
			else
			{
				a--;
				std::cout << a << " ";
			}
		}
		a = 'A';
		a--;
		std::cout << "\n";
	}
}