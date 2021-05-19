/*
 hw3
 #4
 */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Member.h"
using namespace std;

int main() {
	Member* mArray = new Member[4];	// 객체 배열 동적 할당

	// 각 정보 초기화
	mArray[0].setID("cheol88");
	mArray[0].setPWD("cheol88");
	mArray[0].setName("김철수");
	mArray[0].setAge(23);
	mArray[1].setID("ywjeong123");
	mArray[1].setPWD("12345");
	mArray[1].setName("정연우");
	mArray[1].setAge(31);
	mArray[2].setID("Jiwoon456");
	mArray[2].setPWD("34563%");
	mArray[2].setName("박지운");
	mArray[2].setAge(35);
	mArray[3].setID("Choi931");
	mArray[3].setPWD("96454$$");
	mArray[3].setName("최지우");
	mArray[3].setAge(26);

	for (int i = 0; i < 4; i++) {
		// 해당 아이디를 가진 배열
		if (!strcmp(mArray[i].getID(), "Jiwoon456")) {
			// 이름 새로 설정
			mArray[i].setName("박다니엘");
			// 나이 새로 설정
			mArray[i].setAge(22);
		}
	}

	for (int i = 0; i < 4; i++)
		mArray[i].printMemInfo();

	// 메모리 반환
	delete[] mArray;
}
