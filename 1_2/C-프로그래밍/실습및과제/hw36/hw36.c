#include <stdio.h>

void main()
{
	FILE* ip, * op;
	ip = fopen("C\:\\Users\\User\\Desktop\\input.txt", "r");
	op = fopen("C\:\\Users\\User\\Desktop\\output.txt", "w");

	char name1[5], name2[5], name3[5];
	int grade1[3], grade2[3], grade3[3], average1, average2, average3;

	fscanf(ip, "%s %d %d %d", &name1, &grade1[0], &grade1[1], &grade1[2]);
	fscanf(ip, "%s %d %d %d", &name2, &grade2[0], &grade2[1], &grade2[2]);
	fscanf(ip, "%s %d %d %d", &name3, &grade3[0], &grade3[1], &grade3[2]);

	average1 = (grade1[0] + grade1[1] + grade1[2]) / 3;
	average2 = (grade2[0] + grade2[1] + grade2[2]) / 3;
	average3 = (grade3[0] + grade3[1] + grade3[2]) / 3;

	printf("%s의 성적 평균 : %d\n", name1, average1);
	printf("%s의 성적 평균 : %d\n", name2, average2);
	printf("%s의 성적 평균 : %d\n", name3, average3);

	fprintf(op, "%s의 성적 평균 : %d\n", name1, average1);
	fprintf(op, "%s의 성적 평균 : %d\n", name2, average2);
	fprintf(op, "%s의 성적 평균 : %d\n", name3, average3);
}
