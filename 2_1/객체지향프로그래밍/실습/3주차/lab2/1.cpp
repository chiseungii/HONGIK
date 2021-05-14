/*
 3주차 lab2
 #1
 */

#include <iostream>
using namespace std;

int oneToTen()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	return sum;
}

int main()
{
	cout << "1부터 10까지의 합은: " << oneToTen() << endl;
}
