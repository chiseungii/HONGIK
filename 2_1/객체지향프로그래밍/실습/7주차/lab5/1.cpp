/*
 7주차 lab5
 #1
 */

#include <iostream>
#include "Person.h"
using namespace std;

// 얕은 복사 생성자
Person::Person(Person &p) {
	id = p.id;
	name = p.name;
	address = p.address;
	phoneNumber = p.phoneNumber;
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
