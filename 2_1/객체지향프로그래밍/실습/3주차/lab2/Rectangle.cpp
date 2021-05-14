#include <iostream>
#include "Rectangle.h"
using namespace std;

float Rectangle::Area() {
	return width * height;
}

float Rectangle::perimeter() {
	return (width + height) * 2;
}

bool Rectangle::isSquare() {
	return width == height;
}
