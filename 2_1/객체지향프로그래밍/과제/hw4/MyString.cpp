#include "MyString.h"

// 생성자 & 소멸자
MyString::MyString() {
	str = NULL;
	str_len = 0;
}

MyString::~MyString() {
	if (str != NULL) delete[] str;
}

// 연산자 오버로딩
void MyString::operator = (const char a[]) {
	if (str != NULL) delete[] str;
	str = new char[strlen(a) + 1];
	strcpy(str, a);
	str_len = strlen(a);
}

void MyString::operator = (MyString m) {
	if (str != NULL) delete[] str;
	str = new char[m.getLen() + 1];
	strcpy(str, m.getString());
	str_len = m.getLen();
}

ostream &operator << (ostream &os, MyString &m) {
	os << m.getString();
	return os;
}
