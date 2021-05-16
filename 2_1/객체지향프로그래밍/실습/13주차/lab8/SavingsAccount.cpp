#include <iostream>
#include "SavingsAccount.h"
using namespace std;

void SavingsAccount::PrintBalance() {
	cout << "Savings account balance: " << getBalance() << endl;
}
