/*
 n! 계산
 for 및 while 사용 2번 구현
 */

#include <stdio.h>

int main()

{

	int num, nnum, sum;
	sum = 1;

	printf("정수를 입력하시오. : ");
	scanf("%d", &num);

	for (nnum = num; nnum > 0; nnum--)
	{
		sum = sum * nnum;
	}

	printf("%d!=%d\n", num, sum);

}
