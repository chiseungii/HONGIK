#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a, b, c, d, e, f, g;

	srand(time(NULL));

	a = 1 + rand() % 45;

	while (1)
	{
		b = 1 + rand() % 45;

		if (b != a)
			break;
	}

	while (1)
	{
		c = 1 + rand() % 45;

		if (c != a && c != b)
			break;
	}

	while (1)
	{
		d = 1 + rand() % 45;

		if (d != a && d != b && d != c)
			break;
	}

	while (1)
	{
		e = 1 + rand() % 45;

		if (e != a && e != b && e != c && e != d)
			break;
	}

	while (1)
	{
		f = 1 + rand() % 45;

		if (f != a && f != b && f != c && f != d && f != e)
			break;
	}

	while (1)
	{
		g = 1 + rand() % 45;

		if (g != a && g != b && g != c && g != d && g != e && g != f)
			break;
	}

	printf("%d %d %d %d %d %d\n", a, b, c, d, e, f, g);
}
