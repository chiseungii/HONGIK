#include <iostream>
#include "CheckingAccount.h"
using namespace std;

void CheckingAccount::PrintBalance() {
	cout << "Checking accoutn balance: " << getBalance() << endl;
}
