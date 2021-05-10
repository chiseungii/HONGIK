/*
 sin(), cos(), tan() 사용해 보기
 */

#include <stdio.h>
#include <math.h>

int main()

#define PI 3.1415

{

	float f;
	scanf("%f", &f);
	printf("sinx=%.2f, cosx=%.2f, tanx=%.2f\n", sin((f / 180.0) * PI), cos((f / 180.0) * PI), 
		tan((f / 180.0) * PI));
}
