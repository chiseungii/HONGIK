#include <stdio.h>

int main(void) {
	float n;	// 온도
	char ch;	// 문자
	float result;	// 변환 후

	scanf("%f %c", &n, &ch);

	if (ch == 'C' || ch == 'c') {
		result = (9. / 5.)*n + 32;
		printf("%.1f F\n", result);
	}
	else {
		result = (5. / 9.)*(n - 32);
		printf("%.1f C\n", result);
	}
}
