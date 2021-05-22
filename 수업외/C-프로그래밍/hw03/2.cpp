/*
 아스키 코드 값을 입력하면 해당되는 문자를 출력하는 프로그램
 */

#include <stdio.h>

int main() {
	int n;

	printf("아스키 코드 값을 입력하시오. >> ");
	scanf("%d", &n);
	printf("문자 : %c입니다.\n", n);
}
