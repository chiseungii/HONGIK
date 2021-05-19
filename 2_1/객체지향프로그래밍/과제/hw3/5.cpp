/*
 hw3
 #5
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

	Member newMem;	// 새로운 객체 생성
	char newID[20], newPWD[20], newName[20];	// 입력 받을 변수들
	int newAge;	// 나이

	// 아이디 조건 확인
	// 1. 소문자 영문, 숫자만 입력 가능
	// 2. 중복 불가능
	while (1) {
		cout << "ID >> ";
		cin >> newID;

		bool flag = true;

		for (int i = 0; newID[i]; i++) {
			// 알파벳, 숫자가 아닌 경우
			if (!isdigit(newID[i]) && !isalpha(newID[i])) {
				cout << "영문 소문자 혹은 숫자만 가능합니다.\n";
				flag = false;
				break;
			}
			// 대문자가 섞인 경우
			else if (newID[i] >= 'A' && newID[i] <= 'Z') {
				cout << "영문 소문자 혹은 숫자만 가능합니다.\n";
				flag = false;
				break;
			}
		}
		if (!flag) continue;

		flag = true;

		for (int i = 0; i < 4; i++) {
			if (!strcmp(mArray[i].getID(), newID)) {
				cout << "이미 사용 중인 아이디입니다.\n";
				flag = false;
				break;
			}
		}
		if (flag) break;
	}

	// 비밀번호 조건 확인
	// 1. 특수문자가 최소한 1개는 있어야 함
	// 2. 11자리 이상 19자리 이하
	while (1) {
		cout << "PWD >> ";
		cin >> newPWD;

		bool flag = false;

		for (int i = 0; newPWD[i]; i++) {
			if ((newPWD[i] >= '!' && newPWD[i] <= '/') ||
				(newPWD[i] >= ':' && newPWD[i] <= '@') ||
				(newPWD[i] >= '[' && newPWD[i] <= '`') ||
				(newPWD[i] >= '{' && newPWD[i] <= '~')) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			cout << "특수문자를 반드시 포함해야 합니다.\n";
			continue;
		}

		if (strlen(newPWD) >= 11 && strlen(newPWD) <= 19) break;
		else cout << "비밀번호는 11자리 이상 19자리 이하로 입력하세요.\n";
	}

	cout << "이름 >> ";
	cin >> newName;
	cout << "나이 >> ";
	cin >> newAge;

	// 객체에 정보 임력
	newMem.setID(newID);
	newMem.setPWD(newPWD);
	newMem.setName(newName);
	newMem.setAge(newAge);

	newMem.printMemInfo();

	// 메모리 반환
	delete[] mArray;
}
