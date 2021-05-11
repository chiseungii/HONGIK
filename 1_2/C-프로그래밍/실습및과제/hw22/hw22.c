/*
 n*m 곱하기 recursive 함수
 */

#include <stdio.h>

int multi(int n, int m)
{
	if (m == 1)
		return n * m;
	else
		return n + multi(n, m - 1);
}

int main()

{
	int x, y;

	printf("____\b\b\b\b");
	scanf("%d %d", &x, &y);
	printf("%d*%d=%d\n", x, y, multi(x, y));
}
