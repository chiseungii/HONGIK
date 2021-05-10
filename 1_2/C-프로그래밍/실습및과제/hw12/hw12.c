/*
 1부터 10까지 for && while 사용 더하기
 */

#include <stdio.h>

int main()

{

	int num, sum;
	num = 1;
	sum = 0;

	for (num = 1; num < 11; num++) {
		sum = sum + num;
	}

	printf("%d\n", sum);

	num = 1;
	sum = 0;

	while (num < 11)
	{
		sum = sum + num;
		num++;
	}

	printf("%d\n", sum);

}
