#include <stdio.h>

double average(int grade[])
{
	double result;

	result = (grade[0] + grade[1] + grade[2]) / 3;

	return result;
}

int main()
{
	char name1[5], name2[5], name3[5];
	int grade1[3], grade2[3], grade3[3], i;

	printf("학생의 이름과 성적을 입력하세요. : ");
	scanf("%s %d %d %d", &name1, &grade1[0], &grade1[1], &grade1[2]);
	printf("두번째 이름과 성적 : ");
	scanf("%s %d %d %d", &name2, &grade2[0], &grade2[1], &grade2[2]);
	printf("세번째 이름과 성적 : ");
	scanf("%s %d %d %d", &name3, &grade3[0], &grade3[1], &grade3[2]);

	printf("%s의 성적 평균 : %.2lf\n", name1, average(grade1));
	printf("%s의 성적 평균 : %.2lf\n", name2, average(grade2));
	printf("%s의 성적 평균 : %.2lf\n", name3, average(grade3));
}
