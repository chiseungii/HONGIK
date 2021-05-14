#pragma once

class Shape {
private:
	int width, height;

public:
	// 생성자 & 소멸자
	Shape() { width = height = 0; }
	Shape(int, int);
	~Shape(){}

	// get & set
	int getHeight() { return height; }
	int getWidth() { return width; }
	void setHeight(int);
	void setWidth(int);

	// 가상 함수
	virtual int getArea() { return 0; }
};
