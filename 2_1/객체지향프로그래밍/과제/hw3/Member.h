#ifndef MEMBER_H
#define MEMBER_H

class Member {
private:
	char* m_id;	// 아이디
	char* m_pwd;	// 비밀번호
	char* m_name;	// 이름
	int m_age;	// 나이

public:
	// 생성자 & 소멸자
	Member();	// 디폴트 생성자
	Member(char*, char*, char*, int);	// 매개변수를 입력 받는 생성자
	~Member();

	// get & set
	char* getID() { return m_id; }
	char* getPWD() { return m_pwd; }
	char* getName() { return m_name; }
	int getAge() { return m_age; }
	void setID(char*);
	void setPWD(char*);
	void setName(char*);
	void setAge(int age) { m_age = age; }

	// 멤버 함수
	void printMemInfo();	// 아이디, 이름, 나이를 차례로 출력
};

#endif
