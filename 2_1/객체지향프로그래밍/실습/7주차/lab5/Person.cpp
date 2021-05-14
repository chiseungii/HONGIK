#include <iostream>
#include "Person.h"
using namespace std;

// 생성자 & 소멸자
Person::Person() {
	id = 0;
	name = address = phoneNumber = NULL;
}

Person::Person(int id, const char name[], const char address[], const char phone[]) {
	this->id = id;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->address = new char[strlen(address) + 1];
	strcpy(this->address, address);
	this->phoneNumber = new char[strlen(phone) + 1];
	strcpy(this->phoneNumber, phone);
}

Person::~Person() {
	delete name;
	delete address;
	delete phoneNumber;
}

// 멤버 함수
void Person::changeID(int id) {
	this->id = id;
}

void Person::changeName(const char *name) {
	if (this->name != NULL) delete this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

void Person::changeAddress(const char *addr) {
	if (this->address != NULL) delete this->address;
	this->address = new char[strlen(addr) + 1];
	strcpy(this->address, addr);
}

void Person::changePhoneNumber(const char *number) {
	if (this->phoneNumber != NULL) delete this->phoneNumber;
	this->phoneNumber = new char[strlen(number) + 1];
	strcpy(phoneNumber, number);
}

void Person::print() {
	cout << "ID: " << id << endl;
	cout << "이름: " << name << endl;
	cout << "주소: " << address << endl;
	cout << "전화번호: " << phoneNumber << endl;
}
