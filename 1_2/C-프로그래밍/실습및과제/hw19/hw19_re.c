#include <stdio.h>
#include <math.h>

double mysqrt(double x) {
	double R = x, oldx = x;

	while (1) {
		x = (x + R / x) / 2.;
		if (fabs(oldx - x) < 0.001) break;
		oldx = x;
	}

	return x;
}
