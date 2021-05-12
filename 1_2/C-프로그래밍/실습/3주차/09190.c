#include <stdio.h>

int main() {
	int num1, num2;
	num1 = 1.99999;

	printf("%c %s >%8d< >%-8d< >%+8d< >%08d< >%7.3f<\n",
		'A', "ABab", 123, 123, 123, 123, 12.34);
	// %8d 정수 8칸 잡음
	// %08d 정수 8칸 잡되 앞에 0으로 채움
	// %-8d 8칸인데 왼쪽으로 땡김
	// %+8d 8칸인데 +- 부호 붙이기
	// %7.3f 실수 총 7칸 중 소수점 이하부 3칸, 소수점 1칸, 남는 3칸 정수부

	printf("num1 : %#x (hexadecimal) %d (decimal)\n", num1, num1);
	printf("input num1. ");
	scanf("%d", &num1);
	printf("input num2. ");
	scanf("%d", &num2);

	printf("num1 : %#x (hexadecimal) %d (decimal)\n", num1, num1);
	printf("num2 : %#x (hexadecimal) %d (decimal)\n", num2, num2);
	// %#x: #은 0x123 등 0x가 나오고 %x 16진수 형태로 찍어냄
}
