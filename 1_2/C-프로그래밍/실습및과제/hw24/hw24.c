#include <stdio.h>

int main()
{
	char str[20];
	int num;

	printf("문자 : ");
	scanf("%s", &str);

	for (num = 0; str[num] != 0; num++)
	{
		if (str[num] >= 'a' && str[num] <= 'z')
		{
			str[num] = str[num] - 'a' + 'A';
		}
	}

	printf("%s\n", str);
}
