/*
 13주차 lab8
 #1
 */

#include <iostream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main() {
	CheckingAccount* pChecking = new CheckingAccount(100.00);
	SavingsAccount* pSavings = new SavingsAccount(1000.00);

	Account* pAccount = pChecking;
	pAccount->PrintBalance();

	pAccount = pSavings;
	pAccount->PrintBalance();

	delete pChecking;
	delete pSavings;
}
