/*
 hw1
 #1
 */

#include <iostream>
using namespace std;

int main() {
	int a, b;	// 입력 받을 두 정수
	int commonDivisor[100];	// 두 정수의 공약수들을 저장해둘 배열

	cin >> a >> b;	// 정수 두 개를 입력 받음

	int j = 0;
	// 1부터 두 정수 중 작은 수까지 반복
	for (int i = 1; i <= a && i <= b; i++) {
		if (a%i == 0 && b%i == 0) {
			// a, b가 모두 i로 나누어 떨어지는 공약수를 찾아 배열에 차례대로 저장
			commonDivisor[j++] = i;
		}
	}

	// 공약수 차례대로 출력
	cout << "두 수의 공약수: ";
	for (int i = 0; i < j; i++)
		cout << commonDivisor[i] << ' ';
	cout << endl;

	int gcd = commonDivisor[j - 1];	// 최대공약수

	// 최소공배수 구한 뒤 출력
	int commonMultiple = (a / gcd)*(b / gcd)*gcd;
	cout << "최소공배수: " << commonMultiple << endl;
}
