#include <stdio.h>

int main() {
	int i, sum = 0;
	// 초기화 안 하면 일반 변수에는 쓰레기 값 들어있음

	for (i = 1; i <= 10; i = i + 1, printf("i=%d\n", i)) {
		printf("before i=%d sum=%d\n", i, sum);
		sum = sum + i;
		printf("after i=%d sum=%d\n", i, sum);
	}

	printf("%d\n", sum);
	sum = 0; while (i <= 10) { sum += i; ++i; }
}
