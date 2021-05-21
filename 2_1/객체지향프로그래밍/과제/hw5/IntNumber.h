#ifndef INTNUMBER_H
#define INTNUMBER_H

#include <iostream>
using namespace std;

class IntNumber {
protected:
	int k;

public:
	// 생성자 & 소멸자
	IntNumber(int k = 0) { this->k = k; }	// k를 초기화
	IntNumber(IntNumber& i) { k = i.k; }
	~IntNumber() { ; }

	// 연산자 오버로딩
	IntNumber operator + (const IntNumber&);
	IntNumber operator - (const IntNumber&);
	IntNumber operator * (const IntNumber&);
	IntNumber operator / (const IntNumber&);

	bool operator > (const IntNumber&) const;
	bool operator < (const IntNumber&) const;
	bool operator <= (const IntNumber&) const;
	bool operator >= (const IntNumber&) const;
	bool operator == (const IntNumber&) const;
	bool operator != (const IntNumber&) const;

	friend ostream& operator << (ostream&, IntNumber&);
};

#endif
