/*
 3주차 lab2
 #3
 */

#include <iostream>
#include <cstring>
using namespace std;

void upper(char a[])
{
	for (int i = 0; i < strlen(a); i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 'a' + 'A';
}

int main()
{
	char in[50];
	cin.getline(in, 50);
	upper(in);
	for (int i = 0; i < strlen(in); i++)
		cout << in[i];
	cout << endl;
}
