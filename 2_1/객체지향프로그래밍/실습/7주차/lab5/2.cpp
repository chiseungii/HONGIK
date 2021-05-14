/*
 7주차 lab5
 #2
 */

#include <iostream>
#include "Person.h"
using namespace std;

// 깊은 복사 생성자
Person::Person(Person &p) {
	id = p.id;
	
	name = new char[strlen(p.name) + 1];
	strcpy(name, p.name);

	address = new char[strlen(p.address) + 1];
	strcpy(address, p.address);

	phoneNumber = new char[strlen(p.phoneNumber) + 1];
	strcpy(phoneNumber, p.phoneNumber);
}

int main() {
	Person p(1, "Hongik In", "Wowsan-ro 94 Mapo-gu, Seoul, Korea", "02-320-0114");
	Person q(p);
	p.print();
	q.print();

	q.changeName("Com-Gong In");
	p.print();
	q.print();
}
