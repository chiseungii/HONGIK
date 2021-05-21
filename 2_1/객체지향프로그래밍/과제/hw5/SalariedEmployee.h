#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
private:
	double earn;

public:
	// 생성자 & 소멸자
	SalariedEmployee() { earn = 0.0; }
	SalariedEmployee(string, string, string, double);
	SalariedEmployee(SalariedEmployee&);
	~SalariedEmployee() { ; }

	// get & set
	double getEarn() { return earn; }
	void setEarn(double earn) { this->earn = earn; }

	// 가상 함수
	void print();
	double earning() { return earn * 12.; }
};

#endif
