/*
 3주차 lab1
 #3
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	char op, equal;

	cin >> a >> op >> b >> equal;

	switch (op) {
	case '+':
		cout << a + b << endl;
		break;

	case '-':
		cout << a - b << endl;
		break;

	case '*':
		cout << a * b << endl;
		break;

	case '/':
		cout << a / b << endl;
		break;

	case '%':
		cout << a % b << endl;
		break;
	}
}
