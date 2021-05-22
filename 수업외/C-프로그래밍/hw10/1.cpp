/*
 구조체(person)를 이용하여 3명의 인적사항을 입력하고
 그중 최고령자를 출력하는 프로그램
 */

#include <stdio.h>

typedef struct Person {
	char name[100];
	char gender[100];
	int age;
} Person;

int main() {
	Person p[3];

	strcpy(p[0].name, "나태희");
	strcpy(p[0].gender, "여");
	p[0].age = 20;

	strcpy(p[1].name, "유현빈");
	strcpy(p[1].gender, "남");
	p[1].age = 29;

	strcpy(p[2].name, "나원빈");
	strcpy(p[2].gender, "남");
	p[2].age = 25;

	printf("이름\t성별\t나이\n");
	for (int i = 0; i < 3; i++)
		printf("%s\t%s\t%d\n", p[i].name, p[i].gender, p[i].age);

	int max_age = 0, index = -1;
	for (int i = 0; i < 3; i++) {
		if (p[i].age > max_age) {
			max_age = p[i].age;
			index = i;
		}
	}

	printf("\n<<최고령 사용자>>\n");
	printf("%s\t%s\t%d\n", p[index].name, p[index].gender, p[index].age);
}
