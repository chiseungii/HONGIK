#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Score.h"
using namespace std;

typedef struct Birth {
	int year;
	int month;
	int day;
} Birth;

class Student {
private:
	string s_name;
	Score s_score;
	Birth s_birth;

public:
	// 생성자 & 소멸자
	Student() { ; }
	Student(string, Score, Birth);
	Student(Student&);
	~Student() { ; }

	// get
	string getName() { return s_name; }
	Score getScore() { return s_score; }
	Birth getBirth() { return s_birth; }

	// 연산자 오버로딩
	friend ostream& operator << (ostream&, Student&);
	bool operator > (Student);	// 생년월일 순서 확인
};

#endif
