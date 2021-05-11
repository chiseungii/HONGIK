/*
 필수과제3 연습
 */

#include <stdio.h>

int main()

{

	int num, nnum;

	printf("자연수를 입력하시오. : ");
	scanf("%d", &num);

	for (nnum = 9; nnum > 0; nnum--)
	{
		printf("%dX%d=%d\n", num, nnum, num*nnum);
	}

}
