#include "Employee.h"

// 생성자
Employee::Employee(string name, int age, string depart, string phone) {
	e_name = name;
	e_age = age;
	e_depart = depart;
	e_phone = phone;
}

// 멤버 함수
void Employee::printEmp() {
	cout << "\n[직원 정보]\n";
	cout << "이름: " << e_name << endl;
	cout << "나이: " << e_age << endl;
	cout << "부서: " << e_depart << endl;
	cout << "전화번호: " << e_phone << endl;
}
