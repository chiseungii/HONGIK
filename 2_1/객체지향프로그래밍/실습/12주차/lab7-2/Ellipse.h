#pragma once

#include "Shape.h"

class Ellipse : public Shape {
public:
	// 생성자 & 소멸자
	Ellipse() { ; }
	Ellipse(int w, int h) : Shape(w, h) { ; }
	~Ellipse() { ; }

	// 가상 함수
	int getArea() { return (getWidth() / 2) * (getHeight() / 2) * 3; }
};
