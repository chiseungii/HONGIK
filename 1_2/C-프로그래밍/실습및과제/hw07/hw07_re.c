#include <stdio.h>

int main() {
	char c[14];	// 입력
	int year, month, day;
	char* gender;
	int i;

	for (i = 0; i < 14; i++)
		scanf("%c", &c[i]);

	year = 1900 + (c[0] - '0') * 10 + (c[1] - '0');
	month = (c[2] - '0') * 10 + (c[3] - '0');
	day = (c[4] - '0') * 10 + (c[5] - '0');
	gender = c[7] == '1' ? "남자" : "여자";

	printf("%s 주민번호 %d년 %d월 %d일생\n", gender, year, month, day);
}
