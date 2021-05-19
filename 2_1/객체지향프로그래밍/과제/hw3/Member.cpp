#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Member.h"
using namespace std;

// 생성자 & 소멸자
Member::Member() {
	m_id = m_pwd = m_name = NULL;
}

Member::Member(char* id, char* pwd, char* name, int age) {
	m_id = new char[strlen(id) + 1];
	strcpy(m_id, id);

	m_pwd = new char[strlen(pwd) + 1];
	strcpy(m_pwd, pwd);

	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);

	m_age = age;
}

Member::~Member() {
	// 동적 할당 받은 메모리 반환
	delete[] m_id;
	delete[] m_pwd;
	delete[] m_name;
}

// get & set
void Member::setID(char* id) {
	if (m_id != NULL) delete[] m_id;
	m_id = new char[strlen(id) + 1];
	strcpy(m_id, id);
}

void Member::setPWD(char* pwd) {
	if (m_pwd != NULL) delete[] m_pwd;
	m_pwd = new char[strlen(pwd) + 1];
	strcpy(m_pwd, pwd);
}

void Member::setName(char* name) {
	if (m_name != NULL) delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}

// 멤버 함수
void Member::printMemInfo() {
	cout << m_id << ' ' << m_name << ' ' << m_age << endl;
}
