#include <iostream>
#include "Account.h"
using namespace std;

// 생성자
Account::Account() {
	balance = 0;
	cout << "기본 생성자 호출\n";
}

Account::Account(double d) {
	balance = d;
	cout << "(int) 생성자 호출\n";
}
