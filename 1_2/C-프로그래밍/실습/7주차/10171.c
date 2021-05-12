#include <stdio.h>
#include <math.h>

char toUpperChar(char ch) {	// 글자 한 자 받아 대문자로
	if (ch <= 'z' && ch >= 'a') ch = ch - 'a' + 'A';
	return ch;
}

void toUpper(char str[20]) {
	int i;
	for (i = 0; str[i]; ++i) str[i] = toUpperChar(str[i]);
}

int myatoi(char str[20]) {
	int sum = 0, i;
	for (i = 0; str[i]; i++) {
		sum = sum * 10 + (str[i] - '0');
	}

	return sum;
}

void mystrcpy(char dest[20], char source[20]) {
	int i;
	for (i = 0; dest[i] = source[i]; i++);
}

void mystrcpy2(char dest[20], char source[20]) {
	int i;
	for (i = 0; source[i] != 0; i++)
		dest[i] = source[i];
	dest[i] = 0;
}

void main() {
	char source[20] = "hongik", dest[20];
	char str[20] = "123";

	toUpper(source);
	printf("%s\n", source);

	printf("%d\n", myatoi(str));

	mystrcpy2(dest, source);
	printf("%s\n", dest);
}
