#include <stdio.h>

void main() {
	// %d %c %f %lf
	double areal, aimg, breal, bimg;
	char op;

	scanf("%lf %lf %c %lf %lf\n", &areal, &aimg, &op, &breal, &bimg);
	// %lf 필수
	// 입력 마지막에 CTRL + z 누르세요. 입력의 끝 나타냄.

	if (op == '+')	// 복소수 더하기 결과
	{
		printf("%f + %f i \n", areal + breal, aimg + bimg);
	}
	if (op == '-')	// 복소수 빼기 결과
	{
		printf("(%f) + (%f) i \n", areal - breal, aimg - bimg);
	}
}
