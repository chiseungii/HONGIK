#include <stdio.h>

void strcpy(char dest[], char str[]) {
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = 0;
}
