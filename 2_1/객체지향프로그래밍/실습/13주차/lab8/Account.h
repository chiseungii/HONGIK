#pragma once

#include <iostream>
using namespace std;

class Account {
private:
	double balance;

public:
	// 생성자 & 소멸자
	Account();
	Account(double);
	~Account() { cout << "소멸자 호출\n"; }

	// 멤버 함수
	double getBalance() { return balance; }

	// 가상 함수
	virtual void PrintBalance() { cout << "Error. Balance not available for base type\n"; }
};
