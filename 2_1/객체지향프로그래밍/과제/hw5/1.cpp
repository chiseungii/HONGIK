/*
 hw5
 #1
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
}
