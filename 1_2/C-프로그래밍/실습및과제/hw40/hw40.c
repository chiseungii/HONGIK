/*
 2차원 배열 이용 - 행렬 곱하기 함수
 */

#include <stdio.h>

int mymulti(int a[3][3], int b[3][3], int result[3][3])
{
	int i, j, k, sum;
	sum = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			result[i][j] = 0;

	for(i=0;i<3;i++)
		for (k = 0; k < 3; k++)
		{
			for (j = 0; j < 3; j++)
				sum += a[i][j] * b[k][j];
			result[i][k] = sum;
			sum = 0;
		}
}

int main()
{
	int inputA[3][3], inputB[3][3], result[3][3], i, j;

	printf("행렬 A 입력 (한 행씩)\n");
	for (i = 0; i < 3; i++)
		scanf("%d %d %d", &inputA[i][0], &inputA[i][1], &inputA[i][2]);

	printf("행렬 B 입력 (한 행씩)\n");
	for (i = 0; i < 3; i++)
		scanf("%d %d %d", &inputB[i][0], &inputB[i][1], &inputB[i][2]);

	mymulti(inputA, inputB, result);

	printf("==두 행 곱한 결과==\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d ", result[i][j]);
		printf("\b\n");
	}
}
