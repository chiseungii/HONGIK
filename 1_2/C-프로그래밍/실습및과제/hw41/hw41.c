/*
 swap(a, b) 값 바꾸기
 */

#include <stdio.h>

int swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;

	printf("두 수를 차례로 입력하세요.\n");
	scanf("%d %d", &a, &b);

	printf("순서 바꾸기 전 : %d %d\n", a, b);
	swap(&a, &b);
	printf("순서 바꾼 후 : %d %d\n", a, b);
}
