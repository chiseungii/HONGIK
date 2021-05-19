/*
 hw3
 #3
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

	while (1) {
		// 아이디와 비밀번호 입력
		cout << "찾는 사용자의 아이디를 입력하시오 : ";
		char id[20]; cin >> id;
		cout << "해당 아이디에 맞는 Password를 입력하시오 : ";
		char pwd[20]; cin >> pwd;

		// 입력이 "0000"이면 종료
		if (!strcmp(id, "0000") && !strcmp(pwd, "0000")) break;

		bool found = false;	// 찾았다는 표시

		// 입력 받은 아이디와 일치하는 정보 찾기
		for (int i = 0; i < 4; i++) {
			if (strcmp(mArray[i].getID(), id) == 0) {
				found = true;

				// 해당 객체의 비밀번호와 일치하는지 확인
				if (strcmp(mArray[i].getPWD(), pwd) == 0)
					mArray[i].printMemInfo();
				else cout << "비밀번호가 틀립니다.\n";
			}
		}

		if (!found) cout << "입력하신 정보가 존재하지 않습니다.\n";
	}

	// 메모리 반환
	delete[] mArray;
}
