#include <stdio.h>

int main() {
	double real[2], img[2];
	char op;

	scanf("%lf %lf %c %lf %lf", &real[0], &img[0], &op, &real[1], &img[1]);

	if (op == '+')
		printf("%.1lf + %.1lf i\n", real[0] + real[1], img[0] + img[1]);
	else
		printf("%.1lf + %.1lf i\n", real[0] - real[1], img[0] - img[1]);
}
