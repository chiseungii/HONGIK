#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	// 생성자 & 소멸자
	Rectangle(){}
	Rectangle(int w, int h) : Shape(w,h){}
	~Rectangle(){}

	// 가상 함수
	int getArea() { return getWidth() * getHeight(); }
};
