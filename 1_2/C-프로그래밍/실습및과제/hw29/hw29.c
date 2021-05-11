#include <stdio.h>

int a = 0, b = 0, c = 0;

main() {
	/*A*/
	{
		int c = -1.9;
		printf("%d %d %d\n", a, b, c);

		{
			int b = 2;
			int c = 1.9;
			printf("%d %d %d\n", a, b, c);
			a = b, b = a++;

			{
				register int a = 0; static int c = 0;
				printf("%d %d %d\n", a, b, c);
			}

			{
				register int b = 0; static int c = 0;
				printf("%d %d %d\n", a, b, c);
			}

			printf("%d %d %d\n", a, b, c);
		}

		printf("%d %d %d\n", a, b, c);
	}

	printf("%d %d %d\n", a, b, c);

	/*A*/
}
