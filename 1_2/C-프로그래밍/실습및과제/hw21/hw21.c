/*
 1+...+n recursive function 작성
 */

#include <stdio.h>

int add(int n)
{
	if (n == 0)
		return 0;
	else
		return n + add(n - 1);
}

int main()

{
	int x;

	printf("sigma___\b\b\b");
	scanf("%d", &x);
	printf("sigma%d=%d", x, add(x));
}
