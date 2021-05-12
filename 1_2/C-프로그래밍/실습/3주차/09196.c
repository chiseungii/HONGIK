/*
 섭씨 화씨 유사 코드
 */

#include <stdio.h>

int main() {
	int i;
	char c;
	float f, degree, degreeF;
	double d;
	i = 10; c = 'A', f = 0.1, d = 0.1;

	// scanf("%d", &i); scanf("%c", &c); scanf("%f", &f); scanf("%f", &d);
	// scanf("%d %c %f %lf", &i, &c, &f, &d);
	scanf("%f%c", &degree, &c);
	printf("%d %f %f\n", 9 / 5, 9. / 5, 9. / 5.);

	if ('C' == c || 'c' == c) {
		degreeF = 9. / 5.*degree + 32.;
		printf("degree in F : %f\n", degreeF);
	}
	if ('f' == c || 'F' == c) {

	}

	// printf("%d %c %f %f\n", i, c, f, d);
	// printf("%d %c %.20f %.20lf\n", i, c, f, d);
}
