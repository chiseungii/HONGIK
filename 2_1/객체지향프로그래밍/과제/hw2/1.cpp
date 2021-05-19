/*
 hw2
 #1
 */

#include <iostream>
#include "Shape.h"
using namespace std;

int main() {
	int a1, a2, a3;	// 입력 받을 세 정수

	// 파라미터 1개
	cout << "양의 정수 하나를 입력하세요: ";
	cin >> a1;

	// 양의 정수가 아닌 경우
	while (a1 <= 0) {
		cout << "잘못 입력하셨습니다. 다시 입력: ";
		cin >> a1;
	}

	Shape S1(a1);
	cout << "선분의 길이: " << S1.spec() << "\n\n";

	// 파라미터 2개
	cout << "양의 정수를 두 개 입력하세요: ";
	cin >> a1 >> a2;

	// 양의 정수가 아닌 경우
	while (a1 <= 0 || a2 <= 0) {
		cout << "잘못 입력하셨습니다. 다시 입력: ";
		cin >> a1 >> a2;
	}

	Shape S2(a1, a2);
	cout << "직사각형의 넓이: " << S2.spec() << "\n\n";

	// 파라미터 3개
	cout << "양의 정수를 세 개 입력하세요: ";
	cin >> a1 >> a2 >> a3;

	// 양의 정수가 아닌 경우
	while (a1 <= 0 || a2 <= 0 || a3 <= 0) {
		cout << "잘못 입력하셨습니다. 다시 입력: ";
		cin >> a1 >> a2 >> a3;
	}

	Shape S3(a1, a2, a3);
	cout << "직육면체의 부피: " << S3.spec() << endl;
}
