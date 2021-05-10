/*
 입출력 연습
 */

#include <stdio.h>
int main()
{
	int i = 1;
	char c = 'A';
	float f = 0.1, degree, degreeF;
	double d = 0.1;
	scanf("%d %c %f %lf", &i, &c, &f, &d);
	scanf("%f%c", &degree, &c);
	printf("%d %c %f %lf\n", i, c, f, d);
	printf("%f %c\n", degree, c);
}
