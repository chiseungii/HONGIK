#include "Shape.h"

// 생성자
// 입력 받는 값을 제외한 변수들은 모두 1로 초기화
Shape::Shape(int a) {
	n1 = a;
	n2 = n3 = 1;
}

Shape::Shape(int a, int b) {
	n1 = a;
	n2 = b;
	n3 = 1;
}

Shape::Shape(int a, int b, int c) {
	n1 = a;
	n2 = b;
	n3 = c;
}

// 멤버 함수
int Shape::spec() {
	// 세 변수를 모두 곱한 값을 리턴
	return n1 * n2 * n3;
}
