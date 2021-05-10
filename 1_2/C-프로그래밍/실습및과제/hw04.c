#include <stdio.h>

int main()

{

	int i; char c; float f = 0.1, kor, eng, math, sum; double d;

	scanf("%c %f %f %f", &c, &kor, &eng, &math);
	sum = kor + eng + math;
	printf("%c %.1f %.1f %.1f 총점=%.1f\n", c, kor, eng, math, sum);


}
