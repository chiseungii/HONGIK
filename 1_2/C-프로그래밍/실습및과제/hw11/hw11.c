#include <stdio.h>

int main()

{

	char ch;

	scanf("%c", &ch);

	switch (ch)
	{
	case 'B':
	case 'b':
		printf("Battle\n");
		break;
	case 'C':
	case 'c':
		printf("Cruiser\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}

}
