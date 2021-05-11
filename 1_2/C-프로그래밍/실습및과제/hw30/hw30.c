#include <stdio.h>

int main() {
	int i, j;

	for (i = 0; i <= 4; i++) {
		if (!(i - 2)) i = 3;
		for (j = 3; j < 6; j = j + 2) {
			if (j == 4) continue;
			if (j > 4) break;
			printf("%d %d\n", i, j);
		}
	}
}
