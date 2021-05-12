/*
 입출력 오류 해결법
 */

#include <stdio.h>

int main() {
	int i;
	char ch1, ch2, ch3;
	float f, kor1, kor2, kor3, eng1, eng2, eng3, math1, math2, math3, total1, total2, total3;
	double d;

	f = 0.1; d = 0.1;
	printf("0.1 == float %.20f double %.20f \n", f, d);

	// printf("입력: ");
	scanf("%c %f %f %f\n", &ch1, &kor1, &eng1, &math1);
	// printf("입력: ");
	scanf("%c %f %f %f\n", &ch2, &kor2, &eng2, &math2);
	// printf("입력: ");
	scanf("%c %f %f %f\n", &ch3, &kor3, &eng3, &math3);

	total1 = (kor1 + eng1 + math1);
	total2 = (kor2 + eng2 + math2);
	total3 = (kor3 + eng3 + math3);

	printf("%c %.1f %.1f %.1f %.1f \n", ch1, kor1, eng1, math1, total1);
	printf("%c %.1f %.1f %.1f %.1f \n", ch2, kor2, eng2, math2, total2);
	printf("%c %.1f %.1f %.1f %.1f \n", ch3, kor3, eng3, math3, total3);

	return 0;
}
