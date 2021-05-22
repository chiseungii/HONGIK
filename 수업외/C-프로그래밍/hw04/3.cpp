/*
 x 값을 입력 받아서 정의된 함수의 함수 값을 계산하는 프로그램
 단, x는 실수이다.
 */

#include <stdio.h>

int main() {
	double x, fx;

	printf("x의 값을 입력하시오. >> ");
	scanf("%lf", &x);

	if (x <= 0) fx = x * x - 9. * x - 2.;
	else fx = 7. * x + 2.;

	printf("f(x)의 값은 %lf\n", fx);
}
