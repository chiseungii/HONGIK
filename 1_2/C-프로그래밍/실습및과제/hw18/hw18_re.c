#include <stdio.h>

double myexp(double x) {
	double result = 1.0;
	int i;

	for (i = 7; i >= 1; i--) {
		result *= x / (double)i;
		result += 1.0;
	}

	return result;
}
