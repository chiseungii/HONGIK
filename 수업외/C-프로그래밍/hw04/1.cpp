/*
 하나의 영문자를 읽어서 모음과 자음을 구분하는 프로그램
 단, switch 문으로 작성하라.
 */

#include <stdio.h>

int main() {
	char ch;

	printf("문자를 입력하시오. >> ");
	scanf("%c", &ch);

	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.\n");
		break;

	default:
		printf("자음입니다.\n");
		break;
	}
}
