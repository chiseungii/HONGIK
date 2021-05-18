/*
 14주차 lab9
 #2
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// 출력을 위한 파일 생성
	ofstream fout("a.txt");

	// 1부터 10까지 파일에 출력
	for (int i = 1; i < 9; i += 2)
		fout << i << '\t';
	fout << 9 << endl;

	// 파일을 닫는다
	fout.close();

	// 파일을 입력용으로 연다
	ifstream fin("a.txt");

	// 읽어서 화면에 출력
	if (fin.is_open()) {
		char arr[256];

		while (!fin.eof()) {
			fin.getline(arr, 256);
			cout << arr;
		}
		cout << endl;
	}

	fin.close();
}
