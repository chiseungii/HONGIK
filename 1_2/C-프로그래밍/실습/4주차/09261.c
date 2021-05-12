#include <stdio.h>

int main() {
	int a, b;
	a = 1, b = 1;
	printf("%d %d\n", ++a, b++);
	// ++a a 사용 전에 ++
	// b 사용 후 나중에 ++
	printf("%d %d\n", a, b);
}
