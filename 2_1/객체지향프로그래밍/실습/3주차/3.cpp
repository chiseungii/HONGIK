/*
 3주차 lab1
 #3
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
	cout << "연산식을 입력하세요 (예: 2+3=)\n>>";
	int a, b;
	char ch, eq;
	cin >> a >> ch >> b >> eq;
	cout << res(a, ch, b) << endl;
}

int main()
{
	calc();
}
