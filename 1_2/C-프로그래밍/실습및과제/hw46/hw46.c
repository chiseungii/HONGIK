#include <stdio.h>

int mystrcmp(char* compare, char* input)
{
	for (; *compare && *input && !(*compare - *input); input++, compare++);

	return *compare - *input;
}

int main()
{
	printf("%d %d %d\n", mystrcmp("", ""), mystrcmp("h", ""), mystrcmp("hong", "hong"));
}
