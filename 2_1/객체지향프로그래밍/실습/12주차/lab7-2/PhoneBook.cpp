#define _CRT_SECURE_NO_WARNINGS

#include "PhoneBook.h"

// 생성자
PhoneBook::PhoneBook() {
	phoneNum = new PhoneNumber[10];
	maxNum = 10;
	num = 0;
}

// 멤버 함수
void PhoneBook::addNum(PhoneNumber &pn) {
	phoneNum[num++] = pn;
}

PhoneNumber PhoneBook::searchNum(char* name) {
	for (int i = 0; i < num; i++) {
		if (strcmp(phoneNum[i].name, name) == 0)
			return phoneNum[i];
	}
}

void PhoneBook::print() {
	for (int i = 0; i < num; i++)
		phoneNum[i].print();
}
