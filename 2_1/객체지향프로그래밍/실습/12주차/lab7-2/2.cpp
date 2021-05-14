/*
 12주차 lab7-2
 #2
 */

#include <iostream>
#include "Rectangle.h"
#include "Ellipse.h"
using namespace std;

int main() {
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);

	cout << "Total area: " << Rect.getArea() << endl;

	Ellipse El;
	El.setWidth(5);
	El.setHeight(7);

	cout << "Total area: " << El.getArea() << endl;
}
