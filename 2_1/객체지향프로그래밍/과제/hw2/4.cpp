/*
 hw2
 #4
 */

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	// 4명의 정보를 저장하기 위해 크기가 4인 배열을 동적 할당
	Employee* emp_list1 = new Employee[4];

	// 각 정보를 모두 저장
	emp_list1[0] = Employee("김철수", 23, "인사팀", "010-2342-1453");
	emp_list1[1] = Employee("정연우", 31, "연구계획팀", "010-4231-1241");
	emp_list1[2] = Employee("박지운", 35, "인사팀", "010-3421-6894");
	emp_list1[3] = Employee("최지우", 26, "영업1팀", "010-9653-3532");

	cout << "추가할 직원은 몇 명입니까? >> ";
	int n; cin >> n;	// 추가될 직원의 수

	// 기존의 4명 + 추가된 직원의 수 만큼의 배열 할당
	Employee* emp_list2 = new Employee[4 + n];

	// 기존의 정보 복사
	for (int i = 0; i < 4; i++) {
		emp_list2[i] = Employee(emp_list1[i].getName(), emp_list1[i].getAge(),
			emp_list1[i].getDepart(), emp_list1[i].getPhone());
	}

	// 기존 배열 메모리 반환
	delete[] emp_list1;

	// 추가될 정보 입력
	for (int i = 0; i < n; i++) {
		cout << endl;

		cout << "직원이름 >> ";
		string name; cin >> name;
		emp_list2[4 + i].setName(name);

		cout << "직원나이 >> ";
		int age; cin >> age;
		emp_list2[4 + i].setAge(age);

		cout << "소속부서 >> ";
		string depart; cin >> depart;
		emp_list2[4 + i].setDepart(depart);

		cout << "전화번호 >> ";
		string phone; cin >> phone;
		emp_list2[4 + i].setPhone(phone);
	}

	// 모든 정보 출력
	for (int i = 0; i < 4 + n; i++)
		emp_list2[i].printEmp();

	// 메모리 반환
	delete[] emp_list2;
}
