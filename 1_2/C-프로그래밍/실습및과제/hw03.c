/*
 입출력 연습2
 10 A 0.1 0.1
 을 int char float double 로 읽고 찍어보기
 */

#include <stdio.h>

int main()

{
	
	int i = 10;
	char c = 'A';
	float f = 0.1;
	double d = 0.1;

	scanf("%f %c %f %lf", &i, &c, &f, &d);

	printf("%f %c %f %lf\n", i, c, f, d);

}
