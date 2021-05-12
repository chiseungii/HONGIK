/*
 exp(), sqrt()
 */

#include <stdio.h>
#include <math.h>

double mysqrt(double R) {
	double x, oldx;
	x = R;

	for (; 1;) {	// for( ; ; )
		oldx = x;	// 새 x 계산 전 복사
		x = 0.5 * (x + R / x);

		if (fabs(x - oldx) < 0.0001) break;
	}

	return x;
}

double myexp(double x) {
	double tmp = 1., sum = 1.; int i;

	for (i = 1; i <= 5; ++i) {
		tmp = tmp * x / i;
		sum = sum + tmp;
	}

	return sum;
}

void main() {
	printf("exp %f\n", exp(0.1) - myexp(0.1));
	printf("sqrt %f\n", sqrt(2.) - mysqrt(2.));
}
