/*
 double을 입력으로 받아 절대값 double을 돌려주는 함수
 myfabs() 구현
 */

#include <stdio.h>

double myfabs(double n) {
	return n < 0 ? -n : n;
}

int main() {
	double d; scanf("%lf", &d);
	printf("%lf\n", myfabs(d));
}
