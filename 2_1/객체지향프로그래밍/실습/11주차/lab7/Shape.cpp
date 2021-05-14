#include "Shape.h"

// 생성자
Shape::Shape(int w, int h) {
	width = w;
	height = h;
}

// set
void Shape::setHeight(int h) { height = h; }
void Shape::setWidth(int w) { width = w; }
