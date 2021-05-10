#include <stdio.h>

int main() {
	char ch[3];
	float kor[3], eng[3], math[3], sum[3];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%c %f %f %f", &ch[i], &kor[i], &eng[i], &math[i]);
		sum[i] = kor[i] + eng[i] + math[i];
		getchar();
	}

	printf("\t국\t영\t수\t총점\n");
	for (i = 0; i < 3; i++) {
		printf("%c\t%.1f\t%.1f\t%.1f\t%.1f\n", ch[i], kor[i], eng[i], math[i], sum[i]);
	}
}
