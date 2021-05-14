#ifndef BOX_H

class Box {
private:
	int width, height;
	char fill;

public:
	// 생성자
	Box(){}
	Box(int, int);

	// 멤버 함수
	void setFill(char);
	void setSize(int, int);
	void draw();
};

#endif
