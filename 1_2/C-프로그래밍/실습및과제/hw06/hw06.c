#include <stdio.h>
#include <math.h>

int main()

{

	double a, b, c, rx1, rx2;

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.0lfx^2 + %.0lfx + %.0lf = 0\n", a, b, c);

	rx1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	rx2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

	printf("x = %.01f, ", rx1);
	printf("x = %.0lf\n", rx2);

}
