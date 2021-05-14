/*
 3주차 lab2
 #3
 */

#include <iostream>
#include <string>
using namespace std;

string toUpper(string &s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}

	return s;
}

int main() {
	string s = "hongik university";
	toUpper(s);
	cout << s << endl;
}
