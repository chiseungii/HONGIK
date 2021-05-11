#include <stdio.h>

int mystrcmp(char* compare, char* input)
{
	int i;

	for (i = 0; *(compare + i) && *(input + i) && !(*(compare + i) - *(input + i)); i++);

	return *(compare + i) - *(input + i);
}

int main()
{
	printf("%d %d %d\n", mystrcmp("", ""), mystrcmp("h", ""), mystrcmp("hong", "hong"));
}
