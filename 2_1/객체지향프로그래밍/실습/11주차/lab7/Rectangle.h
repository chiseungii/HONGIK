#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	// 생성자 & 소멸자
	Rectangle(){}
	Rectangle(int w, int h) : Shape(w,h){}
	~Rectangle(){}

	// get & set
	int getArea() { return getWidth() * getHeight(); }
};
