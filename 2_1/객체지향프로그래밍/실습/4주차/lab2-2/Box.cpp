#include <iostream>
#include "Box.h"
using namespace std;

// 생성자
Box::Box(int w, int h) {
	width = w;
	height = h;
}

// 멤버 함수
void Box::setFill(char c) {
	fill = c;
}

void Box::setSize(int w, int h) {
	width = w;
	height = h;
}

void Box::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			cout << fill;
		cout << endl;
	}
}
