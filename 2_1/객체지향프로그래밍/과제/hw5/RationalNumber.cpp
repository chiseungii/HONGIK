#include "RationalNumber.h"

void RationalNumber::reduction() {
	for (int i = 2; i <= numerator && i <= denominator; i++) {
		// 1로 나누는 건 무의미하므로 2부터 분자, 분모 중 작은 수까지 반복
		if (numerator % i == 0 && denominator % i == 0) {
			numerator /= i;
			denominator /= i;
			i = 1;
			// 분자와 분모 모두 나뉘어지는 i가 있으면
			// 둘 다 i로 나누어주고 i는 2로 초기화 후 다시 for문 반복
		}
	}
}

// 생성자
RationalNumber::RationalNumber(int k, int m) {
	numerator = k;
	denominator = m;
	reduction();	// 생성 시에도 약분 필요
}

RationalNumber::RationalNumber(RationalNumber& r) {
	numerator = r.numerator;
	denominator = r.denominator;
}

// 연산자 오버로딩
RationalNumber RationalNumber::operator + (const RationalNumber& r) {
	RationalNumber tmp;	// 결과 저장할 객체 생성

	// 두 객체의 분모가 같으면 분자만 더해서 약분
	if (denominator == r.denominator) {
		tmp.numerator = numerator + r.numerator;
		tmp.denominator = denominator;
		tmp.reduction();
	}
	// 아니면 두 객체의 분모를 곱해 통분해서 더한 후 약분
	else {
		tmp.denominator = denominator * r.denominator;
		tmp.numerator = numerator * r.denominator + denominator * r.numerator;
		tmp.reduction();
	}

	return tmp;
}

RationalNumber RationalNumber::operator - (const RationalNumber& r) {
	RationalNumber tmp;	// 결과 저장할 객체 생성

	// 두 객체의 분모가 같으면 분자만 빼서 약분
	if (denominator == r.denominator) {
		tmp.numerator = numerator - r.numerator;
		tmp.denominator = denominator;
		tmp.reduction();
	}
	// 아니면 두 객체의 분모를 곱해 통분해서 뺀 후 약분
	else {
		tmp.denominator = denominator * r.denominator;
		tmp.numerator = numerator * r.denominator - denominator * r.numerator;
		tmp.reduction();
	}

	return tmp;
}

RationalNumber RationalNumber::operator * (const RationalNumber& r) {
	RationalNumber tmp;

	// 두 객체의 분자와 분모를 각각 곱해줌
	tmp.numerator = numerator * r.numerator;
	tmp.denominator = denominator * r.denominator;
	tmp.reduction();

	return tmp;
}

RationalNumber RationalNumber::operator / (const RationalNumber& r) {
	RationalNumber tmp;

	// r 객체의 분자, 분모를 반대로 곱해줌
	tmp.numerator = numerator * r.denominator;
	tmp.denominator = denominator * r.numerator;
	tmp.reduction();

	return tmp;
}

bool RationalNumber::operator > (const RationalNumber& r) const {
	return numerator * r.denominator > r.numerator * denominator;
}

bool RationalNumber::operator < (const RationalNumber& r) const {
	return numerator * r.denominator < r.numerator * denominator;
}

bool RationalNumber::operator <= (const RationalNumber& r) const {
	return numerator * r.denominator <= r.numerator * denominator;
}

bool RationalNumber::operator >= (const RationalNumber& r) const {
	return numerator * r.denominator >= r.numerator * denominator;
}

bool RationalNumber::operator == (const RationalNumber& r) const {
	return numerator * r.denominator == r.numerator * denominator;
}

bool RationalNumber::operator != (const RationalNumber& r) const {
	return numerator * r.denominator != r.numerator * denominator;
}

ostream& operator << (ostream& os, const RationalNumber& r) {
	// 분모가 1일 경우 분수 형식이 아닌 정수 형태로 분자만 출력
	if (r.denominator == 1) os << r.numerator;
	// 분모가 1이 아닐 경우 분수 형식으로 '/'를 추가해 출력
	else os << r.numerator << '/' << r.denominator;

	return os;
}
