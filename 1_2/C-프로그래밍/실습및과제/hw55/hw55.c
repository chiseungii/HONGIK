#include <stdio.h>

void mystrcat(char a[], char b[])
{
	int i, j;

	for (i = 0; *(a + i); i++);
	for (j = 0; *(b + j); j++, i++)
		*(a + i) = *(b + j);
	*(a + i) = 0;
}

void main()
{
	char str1[] = "first-", str2[] = "second";

	mystrcat(str1, str2);

	printf("%s\n", str1);
}
