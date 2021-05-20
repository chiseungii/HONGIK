#include "Score.h"

// 생성자
Score::Score(double m, double k, double e, double s) {
	math = m;
	kor = k;
	eng = e;
	soc = s;
}

Score::Score(Score& s) {
	math = s.math;
	kor = s.kor;
	eng = s.eng;
	soc = s.soc;
}

// 연산자 오버로딩
ostream& operator << (ostream& os, Score& s) {
	os << s.math << '\t' << s.kor << '\t' << s.eng << '\t' << s.soc;
	return os;
}

Score Score::operator += (Score s) {
	math += s.math;
	kor += s.kor;
	eng += s.eng;
	soc += s.soc;
	return *this;
}

Score Score::operator /= (int n) {
	math /= (double)n;
	kor /= (double)n;
	eng /= (double)n;
	soc /= (double)n;
	return *this;
}


Score operator + (Score s1, Score s2) {
	Score s;
	s.math = s1.math + s2.math;
	s.kor = s1.kor + s2.kor;
	s.eng = s1.eng + s2.eng;
	s.soc = s1.soc + s2.soc;
	return s;
}

Score operator / (Score s1, int n) {
	Score s;
	s.math = s1.math / (double)n;
	s.kor = s1.kor / (double)n;
	s.eng = s1.eng / (double)n;
	s.soc = s1.soc / (double)n;
	return s;
}
