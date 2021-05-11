#include <stdio.h>

void mystrcpy(char copy[], char* source)
{
	int i;

	for (i = 0; *(source + i); i++)
		copy[i] = source[i];
	copy[i] = 0;
}

void main()
{
	char copy[20], * source = "HONGIK";

	printf("복사 할 단어 : %s\n", source);

	mystrcpy(copy, source);

	printf("복사 된 단어 : %s\n", copy);
}
