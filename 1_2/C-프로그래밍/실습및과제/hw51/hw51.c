/*
 복소수 구조체 더하기 곱하기 연습
 */

#include <stdio.h>

struct complex
{
	double real;
	double img;
};

struct complex cadd(struct complex a, struct complex b, struct complex* res)
{
	(*res).real = a.real + b.real;
	(*res).img = a.img + b.img;
}

struct complex multi(struct complex a, struct complex b, struct complex* res)
{
	(*res).real = a.real * b.real - a.img * b.img;
	(*res).img = a.real * b.img + a.img * b.real;
}

int main()
{
	struct complex a, b;
	struct complex resAdd, resMulti;

	scanf("%lf %lf", &a.real, &a.img);
	scanf("%lf %lf", &b.real, &b.img);

	cadd(a, b, &resAdd);
	multi(a, b, &resMulti);

	printf("덧셈 결과 : %.1f + %.1fi\n", resAdd.real, resAdd.img);
	printf("곱셈 결과 : %.1f + %.1fi\n", resMulti.real, resMulti.img);
}
