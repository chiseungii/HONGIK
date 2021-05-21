#include <string>
#include "Employee.h"

// 생성자
Employee::Employee() {
	lastName = firstName = num = "";
	type = -1;
}

Employee::Employee(string lastName, string firstName, string num, string type) {
	this->lastName = lastName;
	this->firstName = firstName;
	this->num = num;
	this->type = (type == "정규직" ? 0 : 1);
}

Employee::Employee(Employee& e) {
	lastName = e.lastName;
	firstName = e.firstName;
	num = e.num;
	type = e.type;
}

// 가상 함수
void Employee::print() {
	cout << "이름: " << firstName << ' ' << lastName << endl;
	int age = 2020 - stoi(num.substr(0, 2)) + 1;
	cout << "나이: " << age << endl;
	cout << "주민번호: " << num << endl;
	cout << "고용채용일: 2020-05-22\n";
}
