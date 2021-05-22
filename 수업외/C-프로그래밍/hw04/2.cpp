/*
 사용자의 키를 입력 받아서 표준체중을 계산한 후에
 사용자의 체중과 비교하여 저체중인지 표준인지, 과체중인지를 판단하는 프로그램
 표준 체중 = (키 - 100) * 0.9
 */

#include <stdio.h>

int main() {
	double height, weight;
	double normalWeight;

	printf("체중과 키를 입력하시오. (키 체중) >> ");
	scanf("%lf %lf", &height, &weight);

	normalWeight = (height - 100) * 0.9;

	if (weight == normalWeight)
		printf("표준체중입니다.\n");
	else if (weight > normalWeight)
		printf("과체중입니다.\n");
	else printf("저체중입니다.\n");
}
