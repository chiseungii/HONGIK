#include <stdio.h>

int main() {
	int a = 0;
	char* str = "AAAAAAAAAAAA";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	char arr3[] = { 'a', 'b', 'c', '\0' };

	printf("arr1=%d arr2=%d arr3=%d\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
	scanf("%s", str);	// ERROR
}
