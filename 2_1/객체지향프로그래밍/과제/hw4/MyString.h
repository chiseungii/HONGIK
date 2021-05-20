#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
using namespace std;

class MyString {
private:
	char* str;	// 문자열
	int str_len;	// 문자열 길이

public:
	// 생성자 & 소멸자
	MyString();
	MyString(char*);
	MyString(MyString&);
	~MyString();

	// get
	char* getString() { return str; }	// 문자열 반환
	int getLen() { return str_len; }	// 문자열 길이 반환

	// 연산자 오버로딩
	void operator = (char*);	// 문자열을 직접 복사하기 위한 연산자
	void operator = (MyString);	// 다른 객체의 문자열을 복사하기 위한 연산자
	friend ostream& operator << (ostream&, MyString&);
};

#endif
