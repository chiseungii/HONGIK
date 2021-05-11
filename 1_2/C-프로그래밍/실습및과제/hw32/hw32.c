#include <stdio.h>

int dot(int a[], int b[], int n)
{
	int result, i;
	result = 0;

	for (i = 0; i < n; i++)
		result = result + (a[i] * b[i]);

	return result;
}

int main()
{
	int a1[] = { 1, 2, 3 };
	int b1[] = { 4, 5, 6 };

	printf("1차원 : %d\n", dot(a1, b1, 1));
	printf("2차원 : %d\n", dot(a1, b1, 2));
	printf("3차원 : %d\n", dot(a1, b1, 3));
}
