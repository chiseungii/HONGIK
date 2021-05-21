#include "IntNumber.h"

// 연산자 오버로딩
IntNumber IntNumber::operator + (const IntNumber& i) {
	return IntNumber(k + i.k);
}

IntNumber IntNumber::operator - (const IntNumber& i) {
	return IntNumber(k - i.k);
}

IntNumber IntNumber::operator * (const IntNumber& i) {
	return IntNumber(k * i.k);
}

IntNumber IntNumber::operator / (const IntNumber& i) {
	return IntNumber(k / i.k);
}

bool IntNumber::operator > (const IntNumber& i) const {
	return k > i.k;
}

bool IntNumber::operator < (const IntNumber& i) const {
	return k < i.k;
}

bool IntNumber::operator <= (const IntNumber& i) const {
	return k <= i.k;
}

bool IntNumber::operator >= (const IntNumber& i) const {
	return k >= i.k;
}

bool IntNumber::operator == (const IntNumber& i) const {
	return k == i.k;
}

bool IntNumber::operator != (const IntNumber& i) const {
	return k != i.k;
}

ostream& operator << (ostream& os, IntNumber& i) {
	os << i.k;
	return os;
}
