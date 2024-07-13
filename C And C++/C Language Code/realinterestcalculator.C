#include <stdio.h>

int main()
{
	int i, flag = 1;
	double years, years_interest, months, months_interest, days, days_interest, principal, principal1, rate, interest;
	// printf("Enter number of years = ");
	// scanf("%lf", &years);
	// printf("Enter number of months = ");
	// scanf("%lf", &months);
	// printf("Enter number of days = ");
	// scanf("%lf", &days);
	// printf("Enter principal amount = ");
	// scanf("%lf", &principal);
	// principal1 = principal;
	// printf("Enter rate of interest = ");
	// scanf("%lf", &rate);

	// Take input from the user for the number of years
	printf("Enter number of years = ");
	scanf("%lf", &years);

	// Check if the number of years is valid
	if (years < 0)
	{
		printf("Error: The number of years must be non-negative\n");
		return 1;
	}

	// Take input from the user for the number of months
	printf("Enter number of months = ");
	scanf("%lf", &months);

	// Check if the number of months is valid
	if (months < 0 || months >= 12)
	{
		printf("Error: The number of months must be between 0 and 11\n");
		return 1;
	}

	// Take input from the user for the number of days
	printf("Enter number of days = ");
	scanf("%lf", &days);

	// Check if the number of days is valid
	if (days < 0 || days >= 31)
	{
		printf("Error: The number of days must be between 0 and 30\n");
		return 1;
	}

	// Take input from the user for the principal amount
	printf("Enter principal amount = ");
	scanf("%lf", &principal);
	principal1 = principal;

	// Check if the principal amount is valid
	if (principal < 0)
	{
		printf("Error: The principal amount must be non-negative\n");
		return 1;
	}

	// Take input from the user for the rate of interest
	printf("Enter rate of interest = ");
	scanf("%lf", &rate);
	for (i = 1; i <= years; i++) // years -1 because for compound interest
	{
		years_interest = (principal * rate * 12) / 100;
		if (i == years)
		{
			months_interest = (principal * rate * months) / 100;

			days_interest = (principal * rate * days) / 3041.7;
			flag = 0;
		}
		principal = years_interest + principal;
	}
	if (flag == 0)
	{
		interest = principal - principal1;
		interest = interest + months_interest + days_interest;
		principal = principal + months_interest + days_interest;
		printf("interest = %lf\n", interest);
		printf("principal = %lf\n", principal);
	}
	if (flag == 1)
	{
		days_interest = (principal * rate * days) / 3041.7;

		months_interest = (principal * rate * months) / 100;
		interest = days_interest + months_interest + years_interest;
		principal1 = principal1 + interest;
		printf("principal = %lf\n", principal1);
		printf("interest = %lf", interest);
	}

	return 0;
}
