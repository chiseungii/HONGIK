#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
	string lastName, firstName, num;	// 이름, 성, 주민번호
	int type;	// 직원 타입

public:
	// 생성자 & 소멸자
	Employee();
	Employee(string, string, string, string);
	Employee(Employee&);
	~Employee() { ; }

	// get & set
	string getLastName() { return lastName; }
	string getFirstName() { return firstName; }
	string getNum() { return num; }
	int getType() { return type; }
	void setLastName(string lastName) { this->lastName = lastName; }
	void setFirstName(string firstName) { this->firstName = firstName; }
	void setNum(string num) { this->num = num; }
	void setType(int type) { this->type = type; }

	// 가상 함수
	virtual void print();
	virtual double earning() = 0;
};

#endif
