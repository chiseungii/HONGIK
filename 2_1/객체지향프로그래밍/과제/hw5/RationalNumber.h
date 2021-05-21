#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>
#include "IntNumber.h"
using namespace std;

class RationalNumber : public IntNumber {
private:
	int denominator;	// 분자
	void reduction();	// 약분

public:
	// 생성자 & 소멸자
	RationalNumber(int k = 0, int m = 1);
	RationalNumber(RationalNumber&);
	~RationalNumber() { ; }

	// 연산자 오버로딩
	RationalNumber operator + (const RationalNumber&);
	RationalNumber operator - (const RationalNumber&);
	RationalNumber operator * (const RationalNumber&);
	RationalNumber operator / (const RationalNumber&);

	bool operator > (const RationalNumber&) const;
	bool operator < (const RationalNumber&) const;
	bool operator <= (const RationalNumber&) const;
	bool operator >= (const RationalNumber&) const;
	bool operator == (const RationalNumber&) const;
	bool operator != (const RationalNumber&) const;

	friend ostream& operator << (ostream&, const RationalNumber&);
};

#endif
