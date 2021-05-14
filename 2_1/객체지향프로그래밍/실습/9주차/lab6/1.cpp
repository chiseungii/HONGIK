/*
 9주차 lab6
 #1
 */

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	Complex c1(1, 2);
	Complex c2(2, 3);

	c1.print();
	Complex c3 = c1.add(3);
	c1.print();
	c3.print();

	c2.print();
	Complex c4 = c2.add(c1);
	c2.print();
	c4.print();
}
