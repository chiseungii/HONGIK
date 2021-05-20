#include "Student.h"

// 생성자
Student::Student(string name, Score score, Birth birth) {
	s_name = name;
	s_score = score;
	s_birth = { birth.year, birth.month, birth.day };
}

Student::Student(Student& s) {
	s_name = s.s_name;
	s_score = s.s_score;
	
	Birth b = s.s_birth;
	s_birth = { b.year, b.month, b.day };
}

// 연산자 오버로딩
ostream& operator << (ostream& os, Student& s) {
	os << s.s_name << '\t' << s.s_score.getMath() << '\t' << s.s_score.getKor() << '\t'
		<< s.s_score.getEng() << '\t' << s.s_score.getSoc() << '\t'
		<< s.s_birth.year << '-' << s.s_birth.month << '-' << s.s_birth.day;
	return os;
}

bool Student::operator > (Student s) {
	if (s_birth.year == s.s_birth.year) {
		if (s_birth.month == s.s_birth.month)
			return s_birth.day > s.s_birth.day;
		else return s_birth.month > s.s_birth.month;
	}
	else return s_birth.year > s.s_birth.year;
}
