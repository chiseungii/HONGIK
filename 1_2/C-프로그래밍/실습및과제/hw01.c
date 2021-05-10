/*
 필수과제2를 연습해 보기
 */

#include <stdio.h>
int main()
{
	int i = 10;
	char c = 'B';
	float f = 0.1, degree, degreeF;
	double d = 0.1;
	scanf("%f%c", &degree, &c);


	if('F'==c || 'f'==c)
	{
		degreeF = (degree - 32)*5. / 9.;
		printf("degree in C:%f\n", degreeF);
	}
	if ('C' == c || 'c' == c)
	{
		degreeF = 9. / 5.*degree + 32;
		printf("degree in F:%f\n", degreeF);
	}
}
