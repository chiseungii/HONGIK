/*
 다항식 y = 3x^2 + 7x + 11의 값(y)을 계산하는 프로그램
 x 값은 실수로 작성할.
 */

#include <stdio.h>

int main() {
	double x, y;

	printf("실수를 입력하시오 >> ");
	scanf("%lf", &x);

	y = 3. * x * x + 7. * x + 11.;
	printf("다항식의 값은 %lf\n", y);
}
