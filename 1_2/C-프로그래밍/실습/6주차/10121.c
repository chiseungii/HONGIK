#include <stdio.h>

int a, b, c;
// extern int extt;

int main() {
	{
		int c = -1.9;
		printf("%d %d %d\n", a, b, c);	// 0 0 -1

		{
			int b = 2;
			int c = 1.9;
			printf("%d %d %d\n", a, b, c);	// 0, 2, 1
			a = b, b = a++;

			{
				register int a = 0; static int c;
				printf("%d %d %d\n", a, b, c);	// 0 2 0
			}

			{
				register int b = 0; static int c;
				printf("%d %d %d\n", a, b, c);	// 3 0 0
			}

			printf("%d %d %d\n", a, b, c);	// 3 2 1
		}

		printf("%d %d %d\n", a, b, c);	// 3 0 -1
	}

	printf("%d %d %d\n", a, b, c);	// 3 0 0
}
