#include <stdio.h>

void mystrcat(char a[], char b[])
{
	for (; *a; a++);
	for (; *b; b++, a++)
		*a = *b;
}

void main()
{
	char str1[] = "first-", str2[] = "second";

	mystrcat(str1, str2);

	printf("%s\n", str1);
}
