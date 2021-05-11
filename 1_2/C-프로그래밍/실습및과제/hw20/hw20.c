/*
 n! recursive function 작성
 */

#include <stdio.h>

int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()

{
	int x;

	printf("____!\b\b\b\b\b");
	scanf("%d", &x);
	printf("%d!=%d", x, fact(x));
}
