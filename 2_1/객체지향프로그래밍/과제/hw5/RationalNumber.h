#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>
using namespace std;

class RationalNumber {
private:
	int numerator, denominator;	// 분자, 분모
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
