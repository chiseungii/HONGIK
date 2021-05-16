#pragma once

#include "Account.h"

class CheckingAccount : public Account {
public:
	CheckingAccount(double d) : Account(d) { ; }
	void PrintBalance();
};
