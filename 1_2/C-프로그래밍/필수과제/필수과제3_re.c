#include <stdio.h>

int main(void) {
	int i;

	for (i = 9; i >= 1; i--) {
		printf("9 X %d = %d\n", i, i * 9);
	}
}
