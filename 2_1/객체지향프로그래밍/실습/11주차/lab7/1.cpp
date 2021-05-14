/*
 11주차 lab7
 #1
 */

#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
	PhoneNumber pn1;
	PhoneNumber pn2("Hongik_in", "01012345678");

	pn1.print();
	pn2.print();
}
