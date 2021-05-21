#include "RationalNumber.h"

void RationalNumber::reduction() {
	for (int i = 2; i <= k && i <= denominator; i++) {
		// 1로 나누는 건 무의미하므로 2부터 분자, 분모 중 작은 수까지 반복
		if (k % i == 0 && denominator % i == 0) {
			k /= i;
			denominator /= i;
			i = 1;
			// 분자와 분모 모두 나뉘어지는 i가 있으면
			// 둘 다 i로 나누어주고 i는 2로 초기화 후 다시 for문 반복
		}
	}
}

// 생성자
RationalNumber::RationalNumber(int k, int m) : IntNumber(k) {
	denominator = m;
	reduction();
}

RationalNumber::RationalNumber(RationalNumber& r) {
	k = r.k;
	denominator = r.denominator;
}

// 연산자 오버로딩
RationalNumber RationalNumber::operator + (const RationalNumber& r) {
	RationalNumber tmp;	// 결과 저장할 객체 생성

	// 둘 다 정수일 때
	if (denominator == 1 && r.denominator == 1) {
		return RationalNumber(k + r.k);
	}
	// 두 객체의 분모가 같으면 분자만 더해서 약분
	if (denominator == r.denominator) {
		tmp.k = k + r.k;
		tmp.denominator = denominator;
		tmp.reduction();
	}
	// 아니면 두 객체의 분모를 곱해 통분해서 더한 후 약분
	else {
		tmp.denominator = denominator * r.denominator;
		tmp.k = k * r.denominator + denominator * r.k;
		tmp.reduction();
	}

	return tmp;
}

RationalNumber RationalNumber::operator - (const RationalNumber& r) {
	RationalNumber tmp;	// 결과 저장할 객체 생성

	// 둘 다 정수일 때
	if (denominator == 1 && r.denominator == 1) {
		return RationalNumber(k - r.k);
	}
	// 두 객체의 분모가 같으면 분자만 더해서 약분
	if (denominator == r.denominator) {
		tmp.k = k - r.k;
		tmp.denominator = denominator;
		tmp.reduction();
	}
	// 아니면 두 객체의 분모를 곱해 통분해서 더한 후 약분
	else {
		tmp.denominator = denominator * r.denominator;
		tmp.k = k * r.denominator - denominator * r.k;
		tmp.reduction();
	}

	return tmp;
}

RationalNumber RationalNumber::operator * (const RationalNumber& r) {
	RationalNumber tmp;

	// 둘 다 정수일 때
	if (denominator == 1 && r.denominator == 1) {
		return RationalNumber(k * r.k);
	}

	// 두 객체의 분자와 분모를 각각 곱해줌
	tmp.k = k * r.k;
	tmp.denominator = denominator * r.denominator;
	tmp.reduction();

	return tmp;
}

RationalNumber RationalNumber::operator / (const RationalNumber& r) {
	RationalNumber tmp;

	// 둘 다 정수일 때
	if (denominator == 1 && r.denominator == 1) {
		return RationalNumber(k / r.k);
	}

	// r 객체의 분자, 분모를 반대로 곱해줌
	tmp.k = k * r.denominator;
	tmp.denominator = denominator * r.k;
	tmp.reduction();

	return tmp;
}

bool RationalNumber::operator > (const RationalNumber& r) const {
	return k * r.denominator > r.k * denominator;
}

bool RationalNumber::operator < (const RationalNumber& r) const {
	return k * r.denominator < r.k * denominator;
}

bool RationalNumber::operator <= (const RationalNumber& r) const {
	return k * r.denominator <= r.k * denominator;
}

bool RationalNumber::operator >= (const RationalNumber& r) const {
	return k * r.denominator >= r.k * denominator;
}

bool RationalNumber::operator == (const RationalNumber& r) const {
	return k * r.denominator == r.k * denominator;
}

bool RationalNumber::operator != (const RationalNumber& r) const {
	return k * r.denominator != r.k * denominator;
}

ostream& operator << (ostream& os, const RationalNumber& r) {
	// 분모가 1일 경우 분수 형식이 아닌 정수 형태로 분자만 출력
	if (r.denominator == 1) os << r.k;
	// 분모가 1이 아닐 경우 분수 형식으로 '/'를 추가해 출력
	else os << r.k << '/' << r.denominator;

	return os;
}
