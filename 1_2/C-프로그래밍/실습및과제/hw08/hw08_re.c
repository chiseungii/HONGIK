#include <stdio.h>

int main() {
	char gender;
	int age;

	scanf("%c %d", &gender, &age);

	// 구현1
	if (gender == 'm' || age >= 19)
		printf("술을 마셔도 된다.\n");
	else printf("술 마시지 마\n");

	// 구현2
	if (!(gender == 'm' || age >= 19))
		printf("술 마시지 마\n");
	else printf("술을 마셔도 된다.\n");

	// 구현3
	if (gender == 'f' && age < 19)
		printf("술 마시지 마\n");
	else printf("술을 마셔도 된다.\n");
}
