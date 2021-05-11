/*
 enum 사용해 보기
 */

#include <stdio.h>

enum BOOLEAN { True = 123, False = 456 };

int main()
{
	enum BOOLEAN a, b;
	a = True, b = False;

	printf("%d %d\n", a, b);
}
