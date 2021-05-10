#include <stdio.h>

int strlen_arr(char arr[]) {
	int len = 0, i;

	for (i = 0; arr[i]; i++)
		len++;

	return len;
}

int strlen_pt_plus(char *arr) {
	int len = 0, i;

	for (i = 0; *(arr + i); i++)
		len++;

	return len;
}

int strlen_pt_inc(char *arr) {
	int len = 0;

	for (; *arr; arr++)
		len++;

	return len;
}

void strcpy_arr(char destination[], char source[]) {
	int i;

	for (i = 0; source[i]; i++)
		destination[i] = source[i];
	destination[i] = 0;
}

void strcpy_pt_plus(char *destination, char *source) {
	int i;

	for (i = 0; *(source + i); i++)
		*(destination + i) = *(source + i);
	*(destination + i) = 0;
}

void strcpy_pt_inc(char *destination, char *source) {
	for (; *source; source++, destination++)
		*destination = *source;
	*destination = 0;
}

int main(void) {
	char str[] = "hongik", copy[20];
	printf("%d %d %d\n", strlen_arr(str), strlen_pt_plus(str), strlen_pt_inc(str));
	strcpy_arr(copy, str);
	printf("1=%s\n", copy);
	strcpy_pt_plus(copy, str);
	printf("2=%s\n", copy);
	strcpy_pt_inc(copy, str);
	printf("3=%s\n", copy);
}
