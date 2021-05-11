#include <stdio.h>

int main() {
	int input = 876324;

	while (input > 0) {
		printf("%d", input % 10);
		input /= 10;
	}
	printf("\n");
}
