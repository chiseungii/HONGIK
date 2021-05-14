#pragma once

class Person {
private:
	int id;
	char *name;
	char *address;
	char *phoneNumber;

public:
	// 생성자 & 소멸자
	Person();
	Person(int, const char[], const char[], const char[]);
	Person(Person&);
	~Person();

	// 멤버 함수
	void changeID(int);
	void changeName(const char*);
	void changeAddress(const char*);
	void changePhoneNumber(const char*);
	void print();
};
