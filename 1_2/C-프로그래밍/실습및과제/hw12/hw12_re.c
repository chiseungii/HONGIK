/*
 1부터 10까지 for && while 사용 더하기
 */

#include <stdio.h>

int main() {
	int sum, i;

	// for문 사용
	sum = 0;

	for (i = 1; i <= 10; i++)
		sum += i;

	printf("%d\n", sum);

	// while문 사용
	sum = 0; i = 0;

	while (++i <= 10)
		sum += i;

	printf("%d\n", sum);
}
