#define _USE_MATH_DEFINES	// visual studio에 컴파일 안 되면 이것

#include <stdio.h>
#include <math.h>

int main() {
	printf("%f %f %f\n", sin(45.0 / 180.0 * M_PI), cos(45.0 / 180.0 * M_PI),
		tan(45.0 / 180.0 * M_PI));
}
