#include <stdio.h>

int islower(char a[])
{
	int i, result;

	for (i = 0; a[i]; i++)
	{
		if ((a[i] >= 'a') && (a[i] <= 'z'))
			result = 1;
		else
		{
			result = 0;
			break;
		}
	}

	return result;
}

int mystrlen(char a[])
{
	int i, count;
	count = 0;

	for (i = 0; a[i]; i++, count++);

	return count;
}

int goodwords(char a[])
{
	if (islower(a) && (mystrlen(a) >= 6))
		return 1;
	else
		return 0;
}

int main()
{
	char word[200];
	FILE* fp, * op;
	int in;

	fp = fopen("C:\\Users\\User\\Desktop\\hangman_words.txt", "r");
	op = fopen("C:\\Users\\User\\Desktop\\words.txt", "w");

	if (fp == 0)
		printf("file open error\n");

	for (; in = fscanf(fp, "%s", &word);)
	{
		if (in <= 0)
			break;

		if (goodwords(word))
			fprintf(op, "%s\n", word);
	}

	fclose(fp);
	fclose(op);
}
