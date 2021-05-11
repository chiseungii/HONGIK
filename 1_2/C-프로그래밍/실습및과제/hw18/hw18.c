#include <stdio.h>

int factorial(int n)
{
	int i, fact;
	fact = 1;

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	return fact;
}

double myexp(double x)
{
	double e;
	e = 1 + x / 1 + x * x / factorial(2) + x * x*x / factorial(3) + x * x*x*x / factorial(4) +
		x * x*x*x*x / factorial(5) + x * x*x*x*x*x / factorial(6) +
		x * x*x*x*x*x*x / factorial(7) + x * x*x*x*x*x*x*x / factorial(8) +
		x * x*x*x*x*x*x*x*x / factorial(9) + x * x*x*x*x*x*x*x*x*x / factorial(10);

	return e;
}
