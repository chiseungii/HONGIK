#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
	string e_name;	// 이름
	int e_age;	// 나이
	string e_depart;	// 부서
	string e_phone;	// 전화번호

public:
	// 생성자 & 소멸자
	Employee() { ; }
	Employee(string, int, string, string);
	~Employee() { ; }

	// get & set
	string getName() { return e_name; }
	int getAge() { return e_age; }
	string getDepart() { return e_depart; }
	string getPhone() { return e_phone; }
	void setName(string name) { e_name = name; }
	void setAge(int age) { e_age = age; }
	void setDepart(string depart) { e_depart = depart; }
	void setPhone(string phone) { e_phone = phone; }

	// 멤버 함수
	void printEmp();	// 모든 정보를 출력
};

#endif
