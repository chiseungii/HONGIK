/*
 문자열 길이 계산 프로그래밍
 */

#include <stdio.h>

int rength(char* str)
{
	int count;

	for (count = 0; str[count]; count++);

	return count;
}

int main()
{
	char ch[100];

	printf("문자를 입력하세요. : ");
	scanf("%s", &ch);
	printf("전부 %d글자입니다.\n", rength(ch));
}
