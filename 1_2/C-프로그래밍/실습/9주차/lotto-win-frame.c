/*
 lotto 기본 코드
 */

// hangman-xp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.

// Using rand() function from stdlib.h

#include <stdio.h>
#include <stdlib.h>
//#include "stdafx.h"
//#include <ctype.h>
#include <time.h>

int lotto(int idx);

int main() {
	int i;

	getchar();
	return 0;
}

int lotto(int idx) {
	FILE* fp;
	char str[100];
	int i, fi, nthWord;
	
	// fp = fopen("C:\\_C언어\\words.txt", "r");
	if (idx <= 1)
		srand(time(0));
	// printf("%d %d\n", RAND_MAX, rand());

#define LASTWORD 45
#define MIN_LENGTH 6

	// incomplete because number ranges from 0 to 45
	// same number can appear
	nthWord = random() % (LASTWORD)+1;	// % 45 + 1

	printf("lotto = %d\n", nthWord);
	/* skip until nth word */

	/* use only long enough words */

	return 0;
}
