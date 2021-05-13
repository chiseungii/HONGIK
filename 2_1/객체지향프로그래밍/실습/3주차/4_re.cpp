/*
 3주차 lab1
 #4
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; char op1 = ' ', op2;
	int result = 0;

	while (1) {
		cin >> a >> op2;

		switch (op1) {
		case ' ':
			result = a;
			break;

		case '+':
			result += a;
			break;

		case '-':
			result -= a;
			break;

		case '*':
			result *= a;
			break;

		case '/':
			result /= a;
			break;

		case '%':
			result %= a;
			break;
		}

		if (op2 == '=')
			break;
		op1 = op2;
	}

	cout << result << endl;
}
