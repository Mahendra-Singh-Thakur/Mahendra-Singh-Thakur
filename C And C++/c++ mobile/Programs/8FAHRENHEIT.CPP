#include <iostream>
main()
{
	printf("enter temperature in fahrenheit = \t");
	float f, c;
	scanf("%f", &f);
	c = 0.55555555555 * (f - 32);
	printf("the temperature in celcius is = %f", c);
}