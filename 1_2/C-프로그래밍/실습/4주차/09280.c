#include <stdio.h>

double myfabs(double x);
int factorial(int n);

double myfabs(double x) {
	if (x < 0.0) return -x;
	else return x;
}

int factorial(int n) {
	int i, fact = 1;

	#ifdef NDEL

	i = 1;
	for (; i <= n;) {
		fact = fact * i; ++i;
	}

	return fact;

	#endif

	i = 1;
	while (i <= n) {
		fact = fact * i; ++i;
	}

	return fact;
}

void main() {
	int i, n, fact = 1;
	n = 5; fact = 1; i = 1;

	if (i <= n) printf("i <= n ... i=%d는 n=%d보다 작음 \n", i, n);
	for (; i <= n;) {
		printf("before fact=%d i=%d\n", fact, i);
		fact = fact * i; ++i;
		printf("after fact=%d i=%d\n", fact, i);
		if (i <= n) printf("i <= n ... i=%d는 n=%d보다 작음 \n", i, n);
	}

	if (i > n) printf("i <= n ... i=%d는 n=%d보다 크므로 깨져나옴 \n", i, n);
	printf("%d! == %d %d myfabs == %f\n", n, fact, factorial(5), myfabs(-0.01));
}
