/*
 hw5
 #3
 */

// #define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
using namespace std;

int main() {
	// 각 크기를 5로 동적 할당
	SalariedEmployee* salary = new SalariedEmployee[5];
	HourlyEmployee* hourly = new HourlyEmployee[5];

	salary[0] = SalariedEmployee("진우", "정", "901211-1234567", 3000000);
	salary[1] = SalariedEmployee("다름", "박", "950116-2345678", 2800000);
	salary[2] = SalariedEmployee("민정", "김", "890530-2456789", 3200000);
	salary[3] = SalariedEmployee("지훈", "맹", "850416-1789543", 4000000);
	salary[4] = SalariedEmployee("기열", "장", "881201-1043253", 3800000);
	hourly[0] = HourlyEmployee("치우", "김", "901213-1234568", 120, 8500);
	hourly[1] = HourlyEmployee("지현", "구", "960523-2942243", 80, 8000);
	hourly[2] = HourlyEmployee("은지", "이", "970830-134234", 172, 7900);
	hourly[3] = HourlyEmployee("성태", "류", "890208-1032147", 75, 8900);
	hourly[4] = HourlyEmployee("다현", "곽", "910219-2324429", 140, 8400);

	// 모든 직원의 정보를 출력
	for (int i = 0; i < 5; i++) salary[i].print();
	for (int i = 0; i < 5; i++) hourly[i].print();

	string f, l, n;	// 성, 이름, 주민번호
	bool isIn = false;	// 입력 받은 정보가 존재하는지

	while (1) {
		cout << "성 >> ";
		cin >> f;
		if (f == "exit") break;

		cout << "이름 >> ";
		cin >> l;
		if (l == "exit") break;

		cout << "주민번호 (- 포함) >> ";
		cin >> n;
		if (n == "exit") break;

		for (int i = 0; i < 5; i++) {
			if (f == salary[i].getFirstName() && l == salary[i].getLastName()
				&& n == salary[i].getNum()) {
				isIn = true;
				cout << "월급: " << (int)salary[i].getEarn() << endl;
				cout << "연봉: " << (int)salary[i].earning() << endl;
			}
		}

		for (int i = 0; i < 5; i++) {
			if (f == hourly[i].getFirstName() && l == hourly[i].getLastName()
				&& n == hourly[i].getNum()) {
				isIn = true;
				cout << "임금: " << (int)hourly[i].earning() << endl;
			}
		}

		if (!isIn) cout << "일치하는 직원이 없습니다.\n";
		isIn = false;
	}

	// 메모리 반환
	delete[] salary;
	delete[] hourly;
}
