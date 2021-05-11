/*
 1부터 100까지 for && while 사용 더하기
 */

#include <stdio.h>

int main()

{

	int i, sum;
	sum = 0;
	i = 1;

	while (i < 101)
	{
		sum = sum + i;
		i++;
	}

	printf("1~100까지의 합 = %d\n", sum);

}
