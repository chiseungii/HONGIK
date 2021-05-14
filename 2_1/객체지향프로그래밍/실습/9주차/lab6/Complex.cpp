#include <iostream>
#include "Complex.h"
using namespace std;

// 생성자
Complex::Complex(double a) {
	real = a;
	img = 0;
}

Complex::Complex(double a, double b) {
	real = a;
	img = b;
}

// 멤버 함수
void Complex::print() {
	cout << real << " + " << img << "i\n";
}


/*Complex Complex::add(double a) {
	real += a;
	return *this;
}*/

Complex Complex::add(double a, double b = 0.0) {
	real += a;
	img += b;
	return *this;
}

Complex Complex::add(Complex c) {
	real += c.getReal();
	img += c.getImg();
	return *this;
}
