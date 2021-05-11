#include <stdio.h>

void strcpy(char a[], char b[])
{
	int i;

	for (i = 0; b[i]; ++i)
	{
		a[i] = b[i];
	}
	a[i] = 0;
}

void main()
{
	char a[50];
	char* b = "hongik";

	strcpy(a, b);

	printf("%s %s\n", a, b);
}
