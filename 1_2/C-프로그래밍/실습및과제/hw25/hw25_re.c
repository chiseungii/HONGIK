#include <stdio.h>

int myatoi(char str[]) {
	int result = 0, i;

	for (i = 0; str[i]; i++) {
		result *= 10;
		result += str[i] - '0';
	}

	return result;
}

int main() {
	char myint[20];
	scanf("%s", myint);

	printf("%d\n", myatoi(myint));
}
