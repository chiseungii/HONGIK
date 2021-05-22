/*
 사용자로부터 정수를 16진수로 입력 받아
 8진수, 10진수, 16진수 형태로 출력하는 프로그램
 */

#include <stdio.h>

int main() {
	int n;

	printf("16진수 정수를 입력하시오. >> ");
	scanf("%x", &n);

	printf("8진수로는 %o입니다.\n", n);
	printf("10진수로는 %d입니다.\n", n);
	printf("16진수로는 %x입니다.\n", n);
}
