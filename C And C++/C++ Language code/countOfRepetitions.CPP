#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int i,j, lengthOfstring, repetitionCount, count = 0;
	char s[100], c;
	gets(s);
	// puts(s);
	lengthOfstring = strlen(s);

	for (i = 0; i <= 127; i++)
	{
		repetitionCount = 0;
		for (j = 0; j < lengthOfstring; j++)
		{
			if (i == s[j])
			{
				repetitionCount++;
				count++;
			}
		}
		if (repetitionCount > 0)
		{
			printf("%c = %d\n", i, repetitionCount);
		}
	}
	//		printf("'repetitionCount'=%d\n",'A');
	printf("The total character are %d", count);
}