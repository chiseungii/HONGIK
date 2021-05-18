#ifndef RECT_H
#define RECT_H

class Rect {
private:
	float p1_x, p2_x, p1_y, p2_y;

public:
	Rect() { ; }
	Rect(float, float, float, float);	// 두 좌표 (x1, y1), (x2, y2)
	float get_area();	// 직사각형 넓이 구하는 함수
	float get_diagonal_length();	// 직사각형 내부 대각선 길이 구하는 함수
};

#endif
