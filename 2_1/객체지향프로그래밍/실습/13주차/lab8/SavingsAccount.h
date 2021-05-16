#pragma once

#include "Account.h"

class SavingsAccount : public Account {
public:
	SavingsAccount(double d) : Account(d) { ; }
	void PrintBalance();
};
