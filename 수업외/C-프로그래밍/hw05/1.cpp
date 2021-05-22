/*
 컴퓨터가 숨기고 있는 1 ~ 100 중 정수 하나를 맞추는 게임 프로그램
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int n = rand() % 100 + 1;	// 숨겨진 정수

	int bottom = 1, top = 100;
	int cnt = 0;
	int input;

	while (1) {
		cnt++;
		printf("%d ~ %d 중의 값입니다. 얼마일까요? >> ", bottom, top);
		scanf("%d", &input);

		if (input == n) {
			printf("컴퓨터가 숨긴 %d를 %d번 만에 맞췄습니다.\n", n, cnt);
			break;
		}
		else if (n > input) bottom = input + 1;
		else top = input - 1;
	}
}
