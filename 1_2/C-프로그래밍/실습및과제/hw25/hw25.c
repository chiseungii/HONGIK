#include <stdio.h>

int myatoi(char* number)
{
	int i, sum;
	sum = 0;

	for (i = 0; number[i]; i++)
	{
		sum = sum * 10 + (number[i] - '0');
	}

	return sum;
}

int main()
{
	char scan_number[8];

	scanf("%s", &scan_number);
	printf("%d\n", myatoi(scan_number));
}
