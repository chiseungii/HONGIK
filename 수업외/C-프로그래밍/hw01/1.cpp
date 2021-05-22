/*
 원의 면적을 구하는 프로그램
 단, 반지름은 10
 */

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main() {
	double radius = 10;
	printf("%lf\n", radius * radius * M_PI);
}
