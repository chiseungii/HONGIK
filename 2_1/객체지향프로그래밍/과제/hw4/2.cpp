/*
 hw4
 #2
 */

// #define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Score.h"
using namespace std;

Score getAverageScore_1(Score* sc, int n) {
	Score res(0, 0, 0, 0);

	for (int i = 0; i < n; i++)
		res = res + sc[i];
	res = res / n;

	return res;
}

Score getAverageScore_2(Score* sc, int n) {
	Score res(0, 0, 0, 0);

	for (int i = 0; i < n; i++)
		res += sc[i];
	res /= n;

	return res;
}

int main() {
	// (1)
	Score* score_list = new Score[5];

	// 각 배열 정보 입력
	score_list[0] = Score(41, 85, 72, 38);
	score_list[1] = Score(80, 69, 65, 68);
	score_list[2] = Score(96, 22, 49, 67);
	score_list[3] = Score(51, 61, 63, 87);
	score_list[4] = Score(66, 24, 80, 83);

	cout << "수학\t언어\t외국어\t사회\n";
	for (int i = 0; i < 5; i++) cout << score_list[i] << endl;

	// (2)
	cout << "평균" << endl;

	Score avg;
	avg = getAverageScore_1(score_list, 5);
	cout << avg << endl;

	avg = getAverageScore_2(score_list, 5);
	cout << avg << endl;

	// 메모리 반환
	delete[] score_list;
}
