#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randN;

//글자수 계산
int mystrlen(char a[])
{
	int i, count;

	for (i = 0, count = 0; a[i]; i++, count++);

	return count;
}

//추측한 알파벳인지 확인 (이미 추측:1, 추측x:0)
int alreadyTF(char a, char b[])
{
	int i;

	for (i = 0; b[i]; i++)
		if (b[i] == a)
			return 1;
	b[i] = a;
	return 0;
}

//맞는 알파벳인지 확인
int enterCorrect(char a, char b[], char c[])
{
	int i;

	for (i = 0; b[i]; i++)
		if (b[i] == a)
		{
		c[i] = a;
		return 1;
		}
	return 0;
}

//행맨 완료 확인
int finalcorrect(char a[])
{
	int i;

	for (i = 0; a[i]; i++)
		if (a[i] == '*')
			return 0;
	return 1;
}

//단어장에서 단어 받아오기
void words(char a[])
{
	char word[200];
	FILE *fp;
	int in, i, j;

	srand(time(NULL));
	randN = 1 + rand() % 99999;

	fp = fopen("C:\\Users\\TEMP.T605-11.003\\Downloads\\words.txt", "r");

	if (fp == 0)
		printf("file open error\n");

	for (j = 1; j <= randN; j++)
		fscanf(fp, "%s", &word);

	for (i = 0; word[i]; i++)
		a[i] = word[i];
	a[i] = 0;

	fclose(fp);
}

int main(void)
{
	char correct[20], guess[20] = { 0 }, alp, alreadyGuessed[50] = { 0 };
	int i, count, j, k;
	count = 10;

	words(correct);

	//글자수 계산해서 guess에 *로 채워넣음
	for (i = 0; i < mystrlen(correct); i++)
		guess[i] = '*';

	printf("%s START!\n", guess);

	//반복문
	while (count > 0)
	{
		printf("%s\n", guess);

		if (finalcorrect(guess))
		{
			printf("corrrrect!!!\n");
			break;
		}

		printf("알파벳을 입력하세요 (기회 %d번)\n", count);
		scanf("%c", &alp);
		if (alp == '\n')
			continue;
		if (alreadyTF(alp, alreadyGuessed))
		{
			printf("이미 입력한 알파벳입니다.\n");
			continue;
		}
		else
		{
			if (enterCorrect(alp, correct, guess))
				continue;
			else
				count--;
		}
	}
}
