#pragma once

class OneDPattern {
private:
	int maxWidth;	// 패턴의 최대 길이
	int width;	// 실제 패턴의 길이
	char *fill;

public:
	// 생성자 & 소멸자
	OneDPattern();
	OneDPattern(int);
	~OneDPattern() { delete fill; }

	// 멤버 함수
	void Fill(char[]);
	void changeWidth(int);
	void draw();
};
