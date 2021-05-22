/*
 문자열로 연산 명령을 입력 받아 해당 연산을 수행하는 프로그램을 작성하라.
 해당 연산은 "add", "sub", "mul", "div"로 한다.
 atoi(), strcpy(), strcmp() 함수를 사용한다.
 즉, 문자열로 "mul 5 2"를 입력하면 5*2로 연산을 수행하는 프로그램을 작성하라.
 */

#include <stdio.h>
#include <string.h>

int main() {
	char input[256], *op;
	int a, b, c;

	printf("연산을 입력하시오. >> ");
	gets(input, 256);

	op = strtok(input, " ");
	a = atoi(strtok(NULL, " "));
	b = atoi(strtok(NULL, " "));

	if (!strcmp(op, "add")) c = a + b;
	else if (!strcmp(op, "sub")) c = a - b;
	else if (!strcmp(op, "mul")) c = a * b;
	else if (!strcmp(op, "div")) c = a / b;
	else printf("잘못된 연산입니다.\n");

	printf("연산의 결과: %d\n", c);
}
