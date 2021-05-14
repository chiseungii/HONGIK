/*
 12주차 lab7-2
 #1
 */

#include <iostream>
#include "PhoneBook.h"
//#include "PhoneNumber.h"
using namespace std;

int main() {
	PhoneNumber pn1;
	PhoneNumber pn2("Hongik_in", "01012345678");
	PhoneNumber pn3("Comgong_in", "01012345679");

	PhoneBook pb;
	pb.addNum(pn1);
	pb.addNum(pn2);

	PhoneNumber pn4 = pb.searchNum("Hongik_in");
	pn4.print();

	pb.print();
}
