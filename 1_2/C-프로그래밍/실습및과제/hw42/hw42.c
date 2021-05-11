/*
 문자열 scanf 하기 메모리 없으면 망함 확인
 */

#include <stdio.h>

int main()
{
	char* nomemory;
	scanf("%s", nomemory);
	printf("%s\n", nomemory);
}
