#ifndef RECTANGLE_H

class Rectangle {
public:
	float width, height;

public:
	float Area();	// 면적 리턴
	float perimeter();	// 둘레 리턴
	bool isSquare();	// 정사각형인지 아닌지
};

#endif
