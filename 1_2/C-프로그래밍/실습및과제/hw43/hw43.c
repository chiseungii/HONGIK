/*
 로또 중복되는 번호 제거 프로그래밍
 */

#include <stdio.h>

int strcmp(char s[], char t[])
{
	int i;
	for (i = 0; s[i] && t[i]; ++i)
		if (s[i] - t[i])
			return s[i] - t[i];

	return s[i] - t[i];
}

int repeat(int lucky6[], int foundCount, int randomInput)
{
	int i;
	if (foundCount <= 0)
		return 0;

	for (i = 0; i < foundCount; ++i)
		if (randomInput == lucky6[i])
			return 1;

	return 0;
}

void main()
{
	int i, input[] = { 45, 46, 45, 10, 8, 10, 27, 28 };
	int lucky6[6], foundCount = 0;

	for (i = 0; foundCount < 6; ++i)
		if (!repeat(lucky6, foundCount, input[i]))
			lucky6[foundCount++] = input[i];

	printf("%d %d %d %d %d %d\n", lucky6[0], lucky6[1], lucky6[2], lucky6[3], lucky6[4], lucky6[5]);
}
