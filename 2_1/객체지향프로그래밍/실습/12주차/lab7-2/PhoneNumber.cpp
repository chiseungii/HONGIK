#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "PhoneNumber.h"
using namespace std;

// 생성자 & 소멸자
PhoneNumber::PhoneNumber() {
	name = new char[8];
	strcpy(name, "Unknown");
	for (int i = 0; i < 11; number[i++] = '0');
}

PhoneNumber::PhoneNumber(char* name, char* num) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	for (int i = 0; i < 11; number[i] = num[i++]);
}

PhoneNumber::~PhoneNumber() {
	if (name != NULL) delete name;
}

// 멤버 함수
void PhoneNumber::print() {
	cout << name << ' ' << number << endl;
}
