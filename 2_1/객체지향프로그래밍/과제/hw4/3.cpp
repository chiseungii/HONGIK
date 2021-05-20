/*
 hw4
 #3
 */

// #define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Student.h"
using namespace std;

void sorting(Student* s1, int size) {
	Student tmp;	// 재정렬 시 임시 저장을 위한 객체 생성
	
	for (int i = 0; i < size; i++) {
		tmp = s1[i];
		int min = i;

		for (int j = i + 1; j < size; j++) {
			if (tmp > s1[j]) {
				tmp = s1[j];	// 생년월일이 가장 빠른 객체
				min = j;	// 객체의 배열 주소값
			}
		}

		s1[min] = s1[i];
		s1[i] = tmp;	// 현재 배열의 객체와 바꾸기
	}
}

int main() {
	// (1)
	Student* list = new Student[5];

	// 정보 입력
	list[0] = Student("김진우", Score(41, 85, 72, 38), Birth{ 2003, 02, 04 });
	list[1] = Student("나문희", Score(80, 69, 65, 68), Birth{ 2002, 04, 05 });
	list[2] = Student("박명수", Score(96, 22, 49, 67), Birth{ 2002, 12, 31 });
	list[3] = Student("장산범", Score(51, 61, 63, 87), Birth{ 2003, 01, 11 });
	list[4] = Student("차재우", Score(66, 24, 80, 83), Birth{ 2002, 05, 25 });

	cout << "이름\t수학\t국어\t외국어\t사회\t생년월일\n";
	for (int i = 0; i < 5; i++) cout << list[i] << endl;

	// (2)
	sorting(list, 5);

	cout << "sorting 후 리스트\n";
	for (int i = 0; i < 5; i++) cout << list[i] << endl;

	delete[] list;
}
