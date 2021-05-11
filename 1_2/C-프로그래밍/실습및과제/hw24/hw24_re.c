/*
 register 변수 사용하면 scanf 망하는 것 확인
 */

#include <stdio.h>

void toUpper(char str[]) {
	int i;

	for (i = 0; str[i]; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
}

int main() {
	char str[20];
	scanf("%s", str);
	toUpper(str);
	printf("%s\n", str);
}
