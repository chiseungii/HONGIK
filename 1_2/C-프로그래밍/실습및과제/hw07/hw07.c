#include <stdio.h>

int main()

{

	char b1, b2, b3, b4, b5, b6, bar, n1, n2, n3, n4, n5, n6, n7;
	int year, month, day;

	scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c", &b1, &b2, &b3, &b4, &b5, &b6, &bar, &n1, &n2, &n3, &n4, &n5,
		&n6, &n7);

	year = (b1 - '0') * 10 + (b2 - '0') + 1900;
	month = (b3 - '0') * 10 + (b4 - '0');
	day = (b5 - '0') * 10 + (b6 - '0');

	if (b1 == '-' || b2 == '-' || b3 == '-' || b4 == '-' || b5 == '-' || b6 == '-' || bar != '-' || 
		n1 == '-' || n2 == '-' || n3 == '-' || n4 == '-' || n5 == '-' || n6 == '-' || n7 == '-' || 
		month > 12 || day > 31)
	{
		printf("비정상 주민번호\n");
	}
	else if (n1 == '1')
	{
		printf("남자 주민번호 %d년 %d월 %d일생\n", year, month, day);
	}
	else if (n1 == '2')
	{
		printf("여자 주민번호 %d년 %d월 %d일생\n", year, month, day);
	}

}
