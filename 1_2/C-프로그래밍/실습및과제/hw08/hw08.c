#include <stdio.h>

int main()

{

	char c;
	int age;

	scanf("%c %d", &c, &age);

	if ('f' == c || age > 18)
	{
		printf("술을 마셔도 된다.\n");
	}
	else
	{
		printf("술 마시지 마.\n");
	}

	if (!('f' == c || age > 18))
	{
		printf("술 마시지 마.\n");
	}
	else
	{
		printf("술을 마셔도 된다.\n");
	}

	if ('m' == c || age < 19)
	{
		printf("술 마시지 마.\n");
	}
	else
	{
		printf("술을 마셔도 된다.\n");
	}

}
