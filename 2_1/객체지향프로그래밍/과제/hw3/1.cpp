/*
 hw3
 #1
 */

#include <iostream>
using namespace std;

// 두 정수를 입력 받아 더한 값 리턴
int add(int a, int b) { return a + b; }

// 두 실수를 입력 받아 더한 값 리턴
float add(float a, float b) { return a + b; }

// 한 배열을 입력 받아 모든 값을 더해서 리턴
int add(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

// 2개 배열의 각각의 값을 더해서 나머지 배열에 입력
void add(int a[], int b[], int c[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = b[i] + c[i];
}

int main() {
	int a1 = 4;
	int b1 = 5;
	cout << add(a1, b1) << endl;

	float a2 = 4.5;
	float b2 = 3.2;
	cout << add(a2, b2) << endl;

	int arr_1[4] = { 45, 32, 11, 65 };
	cout << add(arr_1, 4) << endl;

	int arr_2[4] = { 11, 43, 32, 56 };
	int arr_3[4];
	add(arr_3, arr_1, arr_2, 4);
	for (int i = 0; i < 4; i++)
		cout << arr_3[i] << ' ';
	cout << endl;
}
