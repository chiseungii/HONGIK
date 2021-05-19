/*
 hw2
 #3
 */

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	// 4명의 정보를 저장하기 위해 크기가 4인 배열을 동적 할당
	Employee* emps = new Employee[4];

	// 각 정보를 모두 저장
	emps[0] = Employee("김철수", 23, "인사팀", "010-2342-1453");
	emps[1] = Employee("정연우", 31, "연구계획팀", "010-4231-1241");
	emps[2] = Employee("박지운", 35, "인사팀", "010-3421-6894");
	emps[3] = Employee("최지우", 26, "영업1팀", "010-9653-3532");

	// 부서 검색
	cout << "부서 검색 >> ";
	string depart; cin >> depart;

	bool found = false;	// 찾았는지 여부 확인

	for (int i = 0; i < 4; i++) {
		if (emps[i].getDepart() == depart) {
			found = true;
			emps[i].printEmp();
		}
	}

	if (!found) cout << "해당 부서의 직원이 존재하지 않습니다.\n";

	for (int i = 0; i < 4; i++) {
		if (emps[i].getName() == "최지우") {
			emps[i].setDepart("영업2팀");
			emps[i].printEmp();
			break;
		}
	}

	// 메모리 반환
	delete[] emps;
}
