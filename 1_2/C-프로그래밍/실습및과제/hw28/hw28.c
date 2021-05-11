#include <stdio.h>

func()
{
	static int count = 0;
	return (++count);
}

int main()
{
	int n = 3;

	printf("%d\n", func(n));
	printf("%d\n", func(n));
	printf("%d\n", func(n));
}
