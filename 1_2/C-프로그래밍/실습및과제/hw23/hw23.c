/*
 register 변수 사용하면 scanf 망하는 것 확인
 */

#include <stdio.h>

int main()
{
	register int i;
	scanf("%d", &i);
}
