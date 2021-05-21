#include "HourlyEmployee.h"

// 생성자
HourlyEmployee::HourlyEmployee(string l, string f, string n, double h, double p)
	: Employee(l, f, n, "계약직") {
	hour = h;
	hourPay = p;
}

HourlyEmployee::HourlyEmployee(HourlyEmployee& h) {
	setLastName(h.getLastName());
	setFirstName(h.getFirstName());
	setNum(h.getNum());
	setType(h.getType());
	hour = h.hour;
	hourPay = h.hourPay;
}

// 가상 함수
void HourlyEmployee::print() {
	cout << "\n계약직원\n";
	Employee::print();
}

double HourlyEmployee::earning() {
	if (hour > 100)
		return 100 * hourPay + (hour - 100) * hourPay * 1.5;
	else return hour * hourPay;
}
