#include <stdio.h>

int main()
{
	int input = 876324;

	while (input)
	{
		printf("%d", input % 10);
		input = input / 10;
	}
	printf("\n");
}
