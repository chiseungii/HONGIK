/*
 다양한 출력
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	num1 = 1.99999;
	printf("%c %s >%8d< >%-8d< >%+8d< >%08d< >%7.3f<\n",
		'A', "ABab", 123, 123, 123, 123, 12.34);
	printf("num1 : %#x (hexadecimal) %d (decimal)\n", num1, num1);
	printf("input num1. ");
	scanf("%d", &num1);
	printf("input num2. ");
	scanf("%d", &num2);
	printf("num1 : %#x (hexadecimal) %d (decimal)\n", num1, num1);
	printf("num2 : %#x (hexadecimal) %d (decimal)\n", num2, num2);
}
