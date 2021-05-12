#include <stdio.h>

int main()
{
	int i = 1;	// int 정수형 변수. 변수란 usb메모리 같은 임시 저장 공간.
	char c = 'B';	// char 영문글자 한 자. 한글은 글자 두 자라서 저장 불가.
	float f = 0.1, degree, degreeF;	// 보통 크기 실수
	double d = 0.1;	// 2배 크기 실수. 정교한 계산.

	// a = b; b 값을 a란 변수에 넣으라는 의미
	i = 10; c = 'A', f = 0.1, d = 0.1;

	scanf("%f%c", &degree, &c);	// & 주소 모르면 저장 안 됨.
	printf("%f %c\n", degree, c);	// 입력 확인

	if ('C' == c || 'c' == c)	// if 만약. (0)이면 거짓. (0아님)참말
	{
		degreeF = 9. / 5.*degree + 32.;
		printf("degree in F: %f\n", degreeF);
	}
	if ('f' == c || 'F' == c)
	{
		// 화씨 변환은 각자가 채워 넣으세요.
	}
}
