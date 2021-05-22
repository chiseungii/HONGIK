/*
 석차구하기
 */

#include <stdio.h>

int main() {
	int kor[5] = { 90, 80, 70, 60, 100 };
	int math[5] = { 81, 91, 81, 81, 100 };
	double avg[5]; int rank[5];

	// 평균 구하기
	for (int i = 0; i < 5; i++)
		avg[i] = ((double)kor[i] + (double)math[i]) / 2.;

	// 석차 구하기
	for (int i = 0; i < 5; i++) rank[i] = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == i) continue;
			if (avg[i] > avg[j]) rank[j]++;
		}
	}

	// 출력
	printf("============================\n");
	printf("국어\t수학\t평균\t석차\n");
	printf("============================\n");

	for (int i = 0; i < 5; i++) {
		printf("%d\t%d\t%.2f\t%d\n", kor[i], math[i], avg[i], rank[i]);
	}
}
