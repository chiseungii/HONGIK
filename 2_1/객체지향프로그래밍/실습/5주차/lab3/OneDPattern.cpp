#include <iostream>
#include "OneDPattern.h"
using namespace std;

// 생성자
OneDPattern::OneDPattern() {
	fill = NULL;
	maxWidth = width = 0;
}

OneDPattern::OneDPattern(int w) {
	fill = new char[w + 1];
	maxWidth = w;
	width = 0;
}

// 멤버 함수
void OneDPattern::Fill(char c[]) {
	for (int i = 0; i < maxWidth && c[i]; i++)
		fill[i] = c[i];
	width = strlen(c);
	fill[width] = 0;
}

void OneDPattern::changeWidth(int w) {
	// 이전의 동적 메모리 반환
	delete fill;
	// 새로 할당
	fill = new char[w + 1];

	// 초기화
	maxWidth = w;
	width = 0;
}

void OneDPattern::draw() {
	cout << fill << endl;
}
