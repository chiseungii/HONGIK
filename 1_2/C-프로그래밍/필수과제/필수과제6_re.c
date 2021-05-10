#include <stdio.h>

struct Complex {
	float real;	// 정수부
	float img;	// 허수부
};

struct Complex *add(struct Complex *c1, struct Complex *c2) {
	struct Complex *result = malloc(sizeof(struct Complex));

	result->real = c1->real + c2->real;
	result->img = c1->img + c2->img;

	return result;
}

struct Complex *sub(struct Complex *c1, struct Complex *c2) {
	struct Complex *result = malloc(sizeof(struct Complex));

	result->real = c1->real - c2->real;
	result->img = c1->img - c2->img;

	return result;
}

struct Complex *mul(struct Complex *c1, struct Complex *c2) {
	struct Complex *result = malloc(sizeof(struct Complex));

	result->real = c1->real*c2->real - c1->img*c2->img;
	result->img = c1->real*c2->img + c1->img*c2->real;

	return result;
}

int main(void) {
	float c1_real, c1_img, c2_real, c2_img;
	char op;	// 연산 기호
	struct Complex *c1 = malloc(sizeof(struct Complex));
	struct Complex *c2 = malloc(sizeof(struct Complex));
	struct Complex *c3;	// 계산 후 결과 저장할 복소수

	scanf("%f %f %c %f %f", &c1_real, &c1_img, &op, &c2_real, &c2_img);

	c1->real = c1_real; c1->img = c1_img;
	c2->real = c2_real;	c2->img = c2_img;

	// 더하기
	if (op == '+') {
		c3 = add(c1, c2);
		printf("%.1f + %.1fi\n", c3->real, c3->img);
	}
	// 빼기
	else if (op == '-') {
		c3 = sub(c1, c2);
		printf("%.1f + %.1fi\n", c3->real, c3->img);
	}
	// 곱하기
	else {
		c3 = mul(c1, c2);
		printf("%.1f + %.1fi\n", c3->real, c3->img);
	}
}
