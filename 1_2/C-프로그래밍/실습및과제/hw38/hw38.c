#include <stdio.h>

void mystrcpy(char copy[], char* source)
{
	int i;
	for (i = 0; *source; *source++, i++)
		copy[i] = *source;
	copy[i] = 0;
}

void main()
{
	char copy[20], * source = "HONGIK";

	mystrcpy(copy, source);

	printf("복사 할 단어 : %s\n", source);
	printf("복사 된 단어 : %s\n", copy);
}
