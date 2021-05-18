/*
 14주차 lab9
 #1
 */

#include <iostream>
#include "Complex.h"
using namespace std;

Complex &operator +(Complex &c1, Complex &c2) {
	double real = c1.getReal() + c2.getReal();
	double img = c1.getImg() + c2.getImg();
	Complex tmp(real, img);
	return tmp;
}

template <class T>
T add(T a, T b) { return a + b; }

int main() {
	int a = 5, b = 2;
	cout << add(a, b) << endl;
	cout << add(2.5, 3.7) << endl;
	Complex c1(1, 3), c2(3, 4);
	cout << add(c1, c2) << endl;
}
