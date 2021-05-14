/*
 11주차 lab7
 #2
 */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);

	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}
