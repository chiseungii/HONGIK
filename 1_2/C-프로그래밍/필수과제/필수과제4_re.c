#include <stdio.h>

// for문 이용
int factorial_1(int n) {
	int result = 1;

	for (; n > 1; n--)
		result *= n;

	return result;
}

// 재귀 함수 이용
int factorial_2(int n) {
	if (n == 0 || n == 1)
		return 1;

	return n * factorial_2(n - 1);
}

int main(void) {
	int n = 3;

	printf("for문 이용: %d\n", factorial_1(n));
	printf("재귀함수 이용: %d\n", factorial_2(n));
}
