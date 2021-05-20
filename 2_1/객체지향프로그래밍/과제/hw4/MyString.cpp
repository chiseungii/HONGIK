#define _CRT_SECURE_NO_WARNINGS

#include "MyString.h"

// 생성자 & 소멸자
MyString::MyString() {
	str = NULL;
	str_len = 0;
}

MyString::MyString(char* a) {
	if (str) delete[] str;
	str = new char[strlen(a) + 1];
	strcpy(str, a);
	str_len = strlen(a);
}

MyString::MyString(MyString& ms) {
	str = new char[ms.str_len + 1];
	strcpy(str, ms.str);
	str_len = ms.str_len;
}

MyString::~MyString() {
	if (str) delete[] str;
}

// 연산자 오버로딩
void MyString::operator = (char* a) {
	if (str) delete[] str;
	str = new char[strlen(a) + 1];
	strcpy(str, a);
	str_len = strlen(a);
}

void MyString::operator = (MyString ms) {
	if (str) delete[] str;
	str = new char[ms.str_len + 1];
	strcpy(str, ms.str);
	str_len = ms.str_len;
}

ostream& operator << (ostream& os, MyString& ms) {
	if (ms.str) os << ms.str;
	return os;
}
