/*
 3주차 lab2
 #5
 */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle rect1;
	rect1.width = 3.5;
	rect1.height = 4.7;

	cout << "rect1의 면적: " << rect1.Area() << endl;
	cout << "rect1의 둘레: " << rect1.perimeter() << endl;
	if (rect1.isSquare()) cout << "rect1은 정사각형이다.\n";
	else cout << "rect1은 정사각형이 아니다.\n";
}
