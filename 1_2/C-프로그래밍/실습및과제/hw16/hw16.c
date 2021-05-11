/*
 double을 입력으로 받아 절대값 double을 돌려주는 함수
 myfabs() 구현
 */

#include <stdio.h>

double myfabs(double x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

void main()

{

	double num;

	printf("실수를 입력하세요. : ");
	scanf("%lf", &num);
	printf("%.2lf의 절대값은 %.2lf입니다.\n", num, myfabs(num));

}
