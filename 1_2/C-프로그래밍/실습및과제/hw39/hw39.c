#include <stdio.h>

int myplus(int a[3][3], int b[3][3], int result[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			result[i][j] = a[i][j] + b[i][j];
}

int main()
{
	int inputA[3][3], inputB[3][3], i, j, result[3][3];

	printf("3x3 행렬을 한 행씩 입력하세요.\n");

	printf("행렬 A\n");
	for (i = 0; i < 3; i++)
		scanf("%d %d %d", &inputA[i][0], &inputA[i][1], &inputA[i][2]);

	printf("행렬 B\n");
	for (i = 0; i < 3; i++)
		scanf("%d %d %d", &inputB[i][0], &inputB[i][1], &inputB[i][2]);

	myplus(inputA, inputB, result);

	printf("행렬A + 행렬B : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d ", result[i][j]);
		printf("\b\n");
	}
}
