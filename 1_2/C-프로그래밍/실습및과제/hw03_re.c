/*
 입출력 연습2
 10 A 0.1 0.1
 을 int char float double 로 읽고 찍어보기
 */

#include <stdio.h>
int main() {
	int n;
	char c;
	float f;
	double d;

	scanf("%d %c %f %lf", &n, &c, &f, &d);
	printf("%d %c %.1f %.1lf\n", n, c, f, d);
}
