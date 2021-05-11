/*
 파일 copy 프로그램 짜기
 main(int argc, char *argv[]) 연습
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
	scanf("%c%c", &argv[0], &argv[1]);
	argv[2] = argv[1];

	printf("argc = %d\nargv = %c %c %c\n", argc, argv[0], argv[1], argv[2]);
}
