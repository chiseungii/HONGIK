#pragma once

#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double img;

public:
	// 생성자 & 소멸자
	Complex() { real = img = 0.0; }
	Complex(double);
	Complex(double, double);
	~Complex(){}

	// get & set
	double getReal() { return real; }
	double getImg() { return img; }
	void setReal(double a) { real = a; }
	void setImg(double a) { img = a; }

	// 멤버 함수
	void print();
	// Complex add(double);
	// Complex add(double, double);
	// Complex add(Complex);

	// 연산자 오버로딩
	friend ostream &operator << (ostream&, Complex &);
};
