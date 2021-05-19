#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
	int n1, n2, n3;

public:
	// 생성자
	Shape() { ; }
	Shape(int);	// 선분의 길이에 대한 생성자
	Shape(int, int);	// 직사각형의 넓이에 대한 생성자
	Shape(int, int, int);	// 직육면체의 부피에 대한 생성자

	// 멤버 함수
	int spec();
};

#endif
