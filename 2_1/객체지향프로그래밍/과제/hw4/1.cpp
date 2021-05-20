/*
 hw4
 #1
 */

#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
	MyString my_str1, my_str2;

	my_str1 = "hello world!";
	cout << my_str1 << endl;
	cout << my_str1.getLen() << endl;

	my_str2 = my_str1;
	cout << my_str2 << endl;
	cout << my_str2.getLen() << endl;
}
