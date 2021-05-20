#ifndef SCORE_H
#define SCORE_H

#include <iostream>
using namespace std;

class Score {
private:
	double math;
	double kor;
	double eng;
	double soc;

public:
	// 생성자 & 소멸자
	Score() { ; }
	Score(double, double, double, double);
	Score(Score&);
	~Score() { ; }

	// get
	double getMath() { return math; }
	double getKor() { return kor; }
	double getEng() { return eng; }
	double getSoc() { return soc; }

	// 연산자 오버로딩
	friend ostream& operator << (ostream&, Score&);	// 성적 출력
	Score operator += (Score);	// 과목들 총합(단일 연산자)
	Score operator /= (int);	// 과목들 평균(단일 연산자)
	friend Score operator + (Score, Score);	// 과목들 총합(이항 연산자)
	friend Score operator / (Score, int);	// 과목들 평균(이항 연산자)
};

#endif
