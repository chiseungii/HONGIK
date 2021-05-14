#ifndef PHONEBOOK_H

#include <iostream>
#include "PhoneNumber.h"
using namespace std;

class PhoneBook {
private:
	PhoneNumber* phoneNum;
	int maxNum, num;

public:
	// 생성자 & 소멸자
	PhoneBook();
	~PhoneBook() { if (phoneNum != NULL) delete phoneNum; }

	// 멤버 함수
	void addNum(PhoneNumber&);
	PhoneNumber searchNum(char*);
	void print();
};

#endif
