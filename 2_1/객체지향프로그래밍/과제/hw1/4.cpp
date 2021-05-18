/*
 hw1
 #4
 */

#include <iostream>
using namespace std;

int count_words(char* s) {
	// 첫 문자가 공백이면 0개로 카운트
	if (s[0] == ' ') return 0;

	int cnt = 1;	// 끝이 공백이 아니기 때문에 1을 더해줘야 함

	for (int i = 0; s[i]; i++) {
		// 공백이 나올 때마다 단어 하나 카운트
		if (s[i] == ' ') cnt++;
	}

	return cnt;
}

int count_sentences(char* s) {
	int cnt = 0;

	for (int i = 0; s[i]; i++) {
		// 마침표가 나올 때마다 문장 하나로 카운트
		if (s[i] == '.') cnt++;
	}

	return cnt;
}

int main() {
	char s1[1000], s2[1000], s3[1000];

	// 문자열 3개 각각 입력 받음
	cin.getline(s1, 1000);
	cin.getline(s2, 1000);
	cin.getline(s3, 1000);

	cout << "첫 번째 문자열에 포함된 단어 수: " << count_words(s1) << endl;
	cout << "두 번째 문자열에 포함된 단어 수: " << count_words(s2) << endl;
	cout << "세 번째 문자열에 포함된 단어 수: " << count_words(s3) << endl;

	cout << "첫 번째 문자열에 포함된 문장 수: " << count_sentences(s1) << endl;
	cout << "두 번째 문자열에 포함된 문장 수: " << count_sentences(s2) << endl;
	cout << "세 번째 문자열에 포함된 문장 수: " << count_sentences(s3) << endl;
}
