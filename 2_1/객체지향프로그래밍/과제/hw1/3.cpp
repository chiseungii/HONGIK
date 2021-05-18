/*
 hw1
 #3
 */

#include <iostream>
#include "Rect.h"
using namespace std;

int main() {
	float x1, x2, y1, y2;

	cout << "좌표입력>>";
	cin >> x1 >> x2 >> y1 >> y2;

	Rect rect1(x1, x2, y1, y2);
	cout << "직사각형의 넓이: " << rect1.get_area() << endl;
	cout << "대각선의 길이: " << rect1.get_diagonal_length() << endl;
}
