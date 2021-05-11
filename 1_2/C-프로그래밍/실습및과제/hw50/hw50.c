/*
 typedef 사용해 보기
 */

#include <stdio.h>

typedef double vector[3];
typedef int INT;

int main()
{
	INT i;
	vector v;

	for (i = 0; i < 3; i++)
		v[i] = i;

	printf("%f %f %f\n", v[0], v[1], v[2]);
}
