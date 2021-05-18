#include <cmath>
#include "Rect.h"

Rect::Rect(float x1, float x2, float y1, float y2) {
	p1_x = x1, p2_x = x2;
	p1_y = y1, p2_y = y2;
}

float Rect::get_area() {
	return abs(p1_x - p2_x)*abs(p1_y - p2_y);
}

float Rect::get_diagonal_length() {
	return sqrt((p1_x - p2_x)*(p1_x - p2_x) + (p1_y - p2_y)*(p1_y - p2_y));
}
