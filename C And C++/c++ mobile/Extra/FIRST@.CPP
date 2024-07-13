#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
	int trc, r, sp, st, a = 65;
	printf("Enter number of lines : ");
	scanf("%d", &trc);

	for (r = 1; r <= trc; r++)
	{
		for (sp = 1; sp <= trc - r; sp++)
		{
			printf("  ");
		}
		for (st = 1; st <= r; st++)
		{
			printf("%c   ", a);
			a = 65 + st;
		}
		a = 65;
		printf("\n");
	}
	for (r = trc - 1; r >= 1; r--)
	{
		for (sp = 1; sp <= trc - r; sp++)
		{
			printf("  ");
		}
		for (st = 1; st <= r; st++)
		{
			printf("%c   ", a);
			a = 65 + st;
		}
		a = 65;
		printf("\n");
	}
}