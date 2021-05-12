#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	
	switch (ch) {
		// case 'b' || 'C': 이러면 망함
	case 'b':
	case 'B':
		printf("Battle\n");
		break;
	}
}
