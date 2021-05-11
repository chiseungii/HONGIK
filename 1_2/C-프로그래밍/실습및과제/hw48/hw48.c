#include <stdio.h>

struct student
{
	char name[10];
	int kor;
	int eng;
	int math;
	double sum;
	double average;
};

void main()
{
	struct student score = { "KIM",95,90,100,0,0 };

	score.sum = score.eng + score.kor + score.math;
	score.average = score.sum / 3.;

	printf("이름 : %s\n", score.name);
	printf("국어 : %d점\n", score.kor);
	printf("영어 : %d점\n", score.eng);
	printf("수학 : %d점\n", score.math);
	printf("총점 : %.2lf점\n", score.sum);
	printf("평균 : %.2lf점\n", score.average);
}
