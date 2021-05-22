/*
 표준편차는 각 자료들이 평균에 얼마나 근접하게 분포되어 있는지 알려주는 값으로
 표준편차가 0이라면 모든 자료가 동일한 값임을 의미한다.
 실행 결과와 같이 5개의 자료에 대해 표준편차를 구하여 출력하시오.
 초기값 : {55, 21, 32, 47, 19}
 */

#include <stdio.h>
#include <math.h>

int main() {
	int x[5] = { 55, 21, 32, 47, 19 };
	double avg, sd, sum = 0;

	for (int i = 0; i < 5; i++)
		printf("x[%d] = %d\n", i, x[i]);

	for (int i = 0; i < 5; i++) sum += (double)x[i];
	avg = sum / 5.;
	printf("\n평균: %f\n", avg);
	
	sum = 0;
	for (int i = 0; i < 5; i++) {
		double tmp = avg - (double)x[i];
		tmp *= tmp;
		sum += tmp;
	}
	sd = sqrt(sum / 5.);
	printf("\n표준편차: %f\n", sd);
}
