/*
 입력 출력 연습
 */

#include <stdio.h>

int main()
{
	int i;
	char c;
	float f;
	double d;
	i = 10; c = 'A', f = 0.1, d = 0.1;
	scanf("%d %c %f %lf", &i, &c, &f, &d);

	printf("%d %c %f %f\n", i, c, f, d);
	printf("%d %c %.20f %.20lf\n", i, c, f, d);
}
