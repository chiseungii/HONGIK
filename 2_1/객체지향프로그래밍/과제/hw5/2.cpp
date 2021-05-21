/*
 hw5
 #2
 */

// #define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "RationalNumber.h"
using namespace std;

int main() {
	RationalNumber c(7, 3);
	RationalNumber d(3, 9);
	RationalNumber x;

	x = c + d;
	cout << c << " + " << d << " = " << x << endl;
	x = c - d;
	cout << c << " - " << d << " = " << x << endl;
	x = c * d;
	cout << c << " * " << d << " = " << x << endl;
	x = c / d;
	cout << c << " / " << d << " = " << x << endl;

	RationalNumber a(2, 5), b(3), y;
	y = a * c / d + b;
	cout << y << endl;

	// 비교 연산자 operator들을 test하기 위한 코드들
	if (y > a) cout << y << " > " << a << endl;
	else cout << y << " <= " << a << endl;

	if (y < b) cout << y << " < " << b << endl;
	else cout << y << " >= " << b << endl;

	if (y >= c) cout << y << " >= " << c << endl;
	else cout << y << " < " << c << endl;

	if (y <= d) cout << y << " <= " << d << endl;
	else cout << y << " > " << d << endl;

	if (y == x) cout << y << " == " << x << endl;
	else cout << y << " != " << x << endl;
}
