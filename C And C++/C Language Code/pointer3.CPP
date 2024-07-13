// #include <stdio.h>

// int main()
// {
// 	int a[] = {10, 11, -1, 5, 6, 67, 5, 4};
// 	int *p, *q;
// 	p = a;
// 	q = &a[0] + 3;
// 	printf("%u\n", p);
// 	printf("%d  %d  %d\n", (*p)++, (*p)++, *(++p));
// 	printf("%d\n", *p);
// 	printf("%d\n", (*p)++);
// 	printf("%d\n", (*p)++);
// 	q--;
// 	printf("%d\n", (*(q + 2))--);
// 	printf("%d\n", *(p + 2) - 2);
// 	printf("%d\n", a[1]);
// 	printf("%d\n", *(p++ - 2) - 1);
// 	printf("%u\n", p);
// 	printf("%d\n", a[1]);
// 	return 0;
// }

#include <maths>
#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int num, flag;
	cin >> num;
	for (int i = 2; i <= num; i++)
	{
		flag = 0;
		for (int j = 2; j <= sprt(num); j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}