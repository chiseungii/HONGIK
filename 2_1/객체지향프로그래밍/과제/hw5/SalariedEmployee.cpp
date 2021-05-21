#include "SalariedEmployee.h"

// 생성자
SalariedEmployee::SalariedEmployee(string l, string f, string n, double e)
	: Employee(l, f, n, "정규직") {
	earn = e;
}

SalariedEmployee::SalariedEmployee(SalariedEmployee& s) {
	setLastName(s.getLastName());
	setFirstName(s.getLastName());
	setNum(s.getNum());
	setType(s.getType());
	earn = s.earn;
}

// 가상 함수
void SalariedEmployee::print() {
	cout << "\n정규직원\n";
	Employee::print();
}
