/*
 double 입력 망하는 경우
 */

#include <stdio.h>	// std 표준 io 입출력

int main()
{
	double d = 0.1;	// d란 변수 선언. 알파벳으로 시작해야 함. _는 허용
	int i; float f; char c;
	scanf("%f", &d);	// 망함
	scanf("%d", &i); scanf("%c", &c); scanf("%f", &f);
	printf("%f\n", d);
	printf("%d %c %f %lf", i, c, f, d);
}
