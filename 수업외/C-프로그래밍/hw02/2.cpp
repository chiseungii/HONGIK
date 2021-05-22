/*
 자신의 몸무게를 입력 받아 달에서의 몸무게를 계산하는 프로그램
 달의 중력은 지구의 17%
 실수형으로 작성하라.
 */

#include <stdio.h>

int main() {
	double weight;

	printf("몸무게를 입력하세요. (단위 kg) >> ");
	scanf("%lf", &weight);

	printf("달에서의 몸무게는 %lfkg입니다.\n", weight * 0.17);
}
