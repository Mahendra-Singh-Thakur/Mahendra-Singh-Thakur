#include <stdio.h>

void main()
{
	int j, d1, d2, m1, m2, y1, y2, year;
	long double p, pn, p1, p2, i2, i, i1, i3, r;
	printf("Enter (1) if you calculate interest less than one year = \n");
	printf("Enter (2) if you calculate interest more than one year = ");

	scanf("%d", &year);

	if (year == 2)
	{
		printf("Enter date when you gave money = ");
		scanf("%d", &d1);
		printf("Enter month when you gave money = ");
		scanf("%d", &m1);
		printf("Enter year when you gave money = ");
		scanf("%d", &y1);

		printf("Enter present date or when you take money from borrower= ");
		scanf("%d", &d2);
		printf("Enter present month or when you take money from borrower= ");
		scanf("%d", &m2);
		printf("Enter present year or when you take money from borrower= ");
		scanf("%d", &y2);

		d1 = d1 - d2;
		m1 = m1 - m2;
		y1 = y1 - y2;

		if (d1 < 0)
		{
			d1 = -(d1);
		}
		if (m1 < 0)
		{
			m1 = -(m1);
		}
		if (y1 < 0)
		{
			y1 = -(y1);
		}

		printf("Enter principal amount = ");
		scanf("%Lf", &p);
		printf("Enter rate of interest = ");
		scanf("%Lf", &r);

		for (j = 1; j <= y1; j++)
		{

			pn = p;
			p = p / 100;
			i = p * r * 12;
			printf("interest of %d year = %Lf\n", j, i);
			p = pn + i;
			i1 = p;
		}

		p2 = p;
		p = p / 100;
		i = p * r;
		i2 = i * m1;
		printf("interest of %d month = %Lf\n", m1, i2);

		p = p2 / 100;
		i = p * r;
		i = i / 30.41666;
		i3 = i * d1;
		printf("interest of %d days = %Lf\n", d1, i3);

		p = i1 + i2 + i3;

		printf("Total amount is %Lf", p);
	}

	if (year == 1)
	{
		printf("Enter number of days since you gave money = ");
		scanf("%d", &d1);
		printf("Enter number of month since you gave money = ");
		scanf("%d", &m1);

		printf("Enter principal amount = ");
		scanf("%Lf", &p);
		printf("Enter rate of interest = ");
		scanf("%Lf", &r);

		p2 = p;
		p = p / 100;
		i = p * r;
		i2 = i * m1;
		printf("interest of %d month = %Lf\n", m1, i2);

		p = p2 / 100;
		i = p * r;
		i = i / 30.41666;
		i3 = i * d1;
		printf("interest of %d days = %Lf\n", d1, i3);

		p = i2 + i3;
		printf("Total amount is %Lf", p);
	}
}

/*	for(j=1;j<=y1;j++)
	{
		p2=p;
		p=p/100;
		i=p*r*12;
		 //	printf("interest of %d year = %Lf\n",j,i);
		p3=p2+i;

	}


		//	printf("interest of %d days = %Lf\n",dd,i);
   */