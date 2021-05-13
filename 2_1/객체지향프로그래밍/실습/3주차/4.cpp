/*
 3주차 lab1
 #4
 */

#include <iostream>
#include <cstring>
using namespace std;

int res(int a, char c, int b)
{
	if (c == '+')
		return a + b;
	else if (c == '-')
		return a - b;
	else if (c == '*')
		return a * b;
	else if (c == '/')
		return a / b;
	else if (c == '%')
		return a % b;
}

void calc()
{
	cout << "연산식을 입력하세요 (예: 2+3+6-2=)\n>>";
	int a, b, result;
	char ch, eq;
	cin >> a >> ch >> b;
	result = res(a, ch, b);

	while (1)
	{
		cin >> eq;

		if (eq == '=')
			break;
		else
		{
			cin >> a;
			result = res(result, eq, a);
		}
	}
	cout << result << endl;
}

int main() {
	calc();
}
