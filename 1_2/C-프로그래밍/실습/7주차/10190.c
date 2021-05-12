#include <stdio.h>

void sol6() {
	int input = 876324;
	while (input) {
		printf("%d", input % 10);
		input = input / 10;
	} printf("\n");
}

int func() {
	static int called_num = 0;
	return (++called_num);
}

int conditionCheck1(int j, int n) {
	if (j > n) printf("j=%d는 %d보다 큼. 참말임. break, j-for 탈출\n", j, n);
	else printf("j=%d는 %d 값이 다름 계속 진행 \n", j, n);
	return 1;	// 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임.
}

int conditionCheck2(int i, int n) {
	if (i == n) printf("i=%d는 %d과 같음. 참말임. i=3 처리함. \n", i, n);
	else printf("i=%d는 i 와 %d 값이 다름 계속 진행 \n", i, n);
	return 1;	// 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임.
}

int conditionCheck3(int n, int i) {
	if (i == n) printf("i=%d는 n=%d과 같음. 참말임. 아래 실행 제끼고 j를 2 증가.\n", i, n);
	else printf("i=%d는 i와 %d 값이 다름 계속 진행 \n", i, n);
	return 1;	// 항상 1 돌려줘서 조건문 참말 되도록 만들었음. 메세지 생성용임.
}

void main() {
	int i, j;
	sol6();

	for (i = 0; i <= 4; ++i) printf("func called() %d times\n", func());
	for (i = 0; i <= 4; ++i) {
		if (conditionCheck2(i, 2) && !(i - 2)) i = 3;
		for (j = 3; j < 6; j = j + 2) {
			if (conditionCheck3(j, 4) && j == 4) continue;
			if (conditionCheck1(j, 4) && j > 4) break;
			printf("%d %d\n", i, j);
		}
	}
}
