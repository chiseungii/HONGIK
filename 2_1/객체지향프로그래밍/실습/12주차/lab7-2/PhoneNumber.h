#ifndef PHONENUMBER_H

class PhoneNumber {
private:
	char* name;
	char number[11];

public:
	// 생성자 & 소멸자
	PhoneNumber();
	PhoneNumber(char*, char*);
	~PhoneNumber();

	// 멤버 함수
	void print();

	friend class PhoneBook;
};

#endif
