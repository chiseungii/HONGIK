#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
private:
	double hour;	// 시간
	double hourPay;	// 시급

public:
	// 생성자 & 소멸자
	HourlyEmployee() { hour = hourPay = 0.0; }
	HourlyEmployee(string, string, string, double, double);
	HourlyEmployee(HourlyEmployee&);
	~HourlyEmployee() { ; }

	// get & set
	double getHour() { return hour; }
	double getHourPay() { return hourPay; }
	void setHour(double hour) { this->hour = hour; }
	void setHourPay(double pay) { hourPay = pay; }

	// 가상 함수
	void print();
	double earning();
};

#endif
