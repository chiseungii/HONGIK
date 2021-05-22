/*
 행렬의 덧셈
 */

#include <stdio.h>

int main() {
	int A[2][3], B[2][3], C[2][3];

	printf("행렬 A 입력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d행 %d열 >> ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}

	printf("\n행렬 B 입력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d행 %d열 >> ", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}
	}

	printf("\n행렬 A\n");
	for (int i = 0; i < 2; i++) {
		printf("[ ");
		for (int j = 0; j < 3; j++) {
			printf("%d ", A[i][j]);
		}
		printf("]\n");
	}

	printf("\n행렬 B\n");
	for (int i = 0; i < 2; i++) {
		printf("[ ");
		for (int j = 0; j < 3; j++) {
			printf("%d ", B[i][j]);
		}
		printf("]\n");
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			C[i][j] = A[i][j] + B[i][j];

	printf("\n행렬 C = A + B\n");
	for (int i = 0; i < 2; i++) {
		printf("[ ");
		for (int j = 0; j < 3; j++) {
			printf("%d ", C[i][j]);
		}
		printf("]\n");
	}
}
