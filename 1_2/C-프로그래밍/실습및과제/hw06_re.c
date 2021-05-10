#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	double res1, res2;

	scanf("%lf %lf %lf", &a, &b, &c);

	res1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	res2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	printf("%lf\n%lf\n", res1, res2);
}
